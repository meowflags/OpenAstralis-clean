# Desofuscación de la capa Java

Resultado del pipeline completo sobre los 518 `.class` del cliente
(**Fabric 26.3**, build **DrCrypter Astralis 2.11**). Todo se genera sin cargar
una sola clase: los `.class` se parsean, las claves se derivan de `<clinit>` y el
bytecode se reescribe con ASM.

---

## 1. Las cinco capas

| Capa | Forma en el bytecode | Cómo se pliega |
|---|---|---|
| clave por clase | `ldc2_w A` + `putstatic <cls>.a:J`, y `K = A ^ <const>` | XOR de los dos `long` |
| cadena simple | literal de 8·n bytes en `<clinit>`, DES/CBC/PKCS5, IV = 0 | DES con la clave de clase, salida **CESU-8** |
| tabla `long[]` por campo | `newarray long` + literales entre el `newarray` y el `putstatic` | cada bloque de 8 bytes, big-endian |
| `invokedynamic (IJ)I` / `(IJ)J` | `a:(IJ)I`, `b:(IJ)J` sobre un `long[]` | índice `(arg0 ^ (arg1 & 0x7fff) ^ sal)` y `DES(tabla[idx], arg1)` |
| `invokedynamic (IJ)Ljava/lang/String;` | `b[]` de trozos cifrados + caché `c[]` | índice anterior, DES del trozo, CESU-8, `ISO-8859-1` |

El detalle de cada una está en `tools/astralis_deobf.py` y en el reescritor
`tools/AstralisDeobf.java`.

---

## 2. El recorrido del blob va en caracteres, no en bytes

El primer pase dejaba **80 saltos `range`**: el sitio pedía un índice mayor que el
número de trozos recuperados. La causa no era la fórmula del índice, era el
tamaño de la tabla.

El `<clinit>` parte el literal así:

```
ldc_w   <blob>            // String
...
invokevirtual String.length:()I
sipush  208              // longitud del primer trozo
...
invokevirtual String.substring:(II)Ljava/lang/String;
```

`substring` y `charAt` cuentan **caracteres**. Un literal del constant pool se
guarda en MUTF-8, y los caracteres de `U+0080..U+07FF` ocupan dos bytes, así que
`len(bytes) > len(chars)`. Recorrer el blob con el string ya decodificado da el
número correcto de trozos; recorrerlo con los bytes del constant pool corta antes
de tiempo.

Caso que lo cerró: `cc/astralis/ehy` declara `bipush 59 / anewarray java/lang/String`
y el recorrido en bytes sólo devolvía 2 trozos (64 bytes). En dominio de
caracteres devuelve los 59, y cada índice de llamada (13..58) resuelve.

---

## 3. La constante del decodificador

`string_indy_xor()` tomaba el **primer** `sipush` del método decodificador. En
`cc/astralis/bpv` eso devolvía `14857` (un `sipush` que pertenece a otra parte del
método), cuando la constante real es el `bipush 18` que sigue al idioma

```
lload_1
ldc2_w  32767L
land
l2i
ixor
bipush  18        <- ésta
ixor
```

`_mask_xor()` busca ese idioma (`l2i; ixor; <bipush|sipush>`) con guardas de
longitud del operando. Efecto medido: `bpv` pasa de `Y=14857` a `Y=18`; `cse`
pasa de `255` a `29`. Sin ese arreglo, 13 sitios de `cse` caían en `eval`.

---

## 4. Tablas `long[]` por campo, no por clase

Una clase puede tener varias tablas (`d`, `j`, `p`, `e`…). Agruparlas todas
desindexa todo lo que va después de la primera. `field_tables()` asocia cada
literal al `putstatic` que le sigue, así que cada campo conserva su propio
vector y su propio tamaño declarado.

---

## 5. Resultado

```
clases analizadas       518
clases con clave        306
sitios invokedynamic   3.897
  (IJ)I                2.012
  (IJ)Ljava/lang/String; 1.726
  (IJ)J                  159
saltos                   55
```

- **0 saltos `range`**: todos los índices de cadena caen dentro de su tabla.
- **55 saltos `eval`, todos `(IJ)J`** en `cc/astralis/brc` y `cc/astralis/cvn`.
  Esos dos helpers construyen el call site en ejecución desde un `long[]`
  compuesto byte a byte dentro del propio `<clinit>`; no existe una tabla
  estática contra la que plegar, así que el sitio se queda como llamada.
- Las otras causas de salto (`des`, `stack`, `noframe`, `unknown`) quedan a cero.

`mapping/offsets.json` guarda los 3.897 sitios con su clase, método, descriptor,
argumentos, sal y valor. Las cadenas con forma de token de Discord se sustituyen
por `<redacted>` en `tools/build_offsets.py` antes de escribir el fichero.

---

## 6. Decompilación

```
Vineflower  ->  516/518 clases
CFR         ->    2/518 clases   (ehy, hcu)
```

Vineflower lanza `NullPointerException` en `ehy` y `hcu`
(`Statement.getVarDefinitions()` sobre un `stat` nulo) y escribe el stub
`// $VF: Couldn't be decompiled`. CFR 0.152 decompila las dos sin problema, con
las cadenas ya plegadas, así que `src/` no tiene ningún fichero stub.

---

## 7. Organización de módulos

`mapping/modules.tsv` es el mapa de la capa de trampa:

| columna | contenido |
|---|---|
| `class` | clase ofuscada (`cc/astralis/ekb`) |
| `category` | categoría con la que se registra (`bfm.COMBAT`, `MOVEMENT`, `WORLD`, `PLAYER`, `VISUAL`, `EXPLOIT`, `CLIENT`) |
| `confidence` | `high` / `medium` / `low` |
| `inferred` | función deducida del nombre de sus ajustes y de su superficie de llamadas |
| `evidence` | qué ajustes o llamadas sostienen la deducción |
| `settings` | nombres de ajuste recuperados, ya descifrados |

91 clases heredan de la base `guu`; 84 las construye el gestor `dfw` (78 en su
array de registro y 6 en una segunda lista). Los nombres de módulo del cliente no
viajan como literales: se arman en `<clinit>` desde las mismas tablas cifradas,
así que la identificación se hace por evidencia (ajustes + tipos de Minecraft que
toca cada clase), no por una cadena que diga "KillAura".

De las 91, 74 quedan identificadas (52 `high`, 20 `medium`, 2 `low`); las 17
restantes no declaran ajustes propios ni tocan ningún tipo de Minecraft, así que
se quedan como `?` en vez de inventarles nombre. El desglose por categoría y la
tabla completa están en `docs/modules.md`, y los renombrados se pueden importar
en Recaf con `mapping/modules.proguard.txt`.

---

## 8. Reproducir

```bash
python tools/astralis_deobf.py work/java work/deobf.map work/report.txt
java -Dskips=work/skips.tsv -cp "build/openastralis-tools.jar;tools/lib/*" \
     AstralisDeobf work/java work/java_fold work/deobf.map work/sites.tsv
java -cp "build/openastralis-tools.jar;tools/lib/*" \
     Remap work/java_fold.jar work/java_deobf.jar mapping/modules.proguard.txt
java -jar tools/vineflower.jar work/java_deobf work/src
java -jar tools/cfr.jar work/java_deobf/cc/astralis/ehy.class --outputdir work/src
java -jar tools/cfr.jar work/java_deobf/cc/astralis/hcu.class --outputdir work/src
python tools/redact.py work/src
python tools/build_offsets.py work/deobf.map work/sites.tsv mapping/offsets.json
```

---

## 9. Renombrar: qué queda probado y qué no

`tools/Remap.java` aplica `mapping/modules.proguard.txt` a los class files con
ASM `ClassRemapper`, de modo que las referencias entre clases se reescriben
junto con las declaraciones: `src/cc/astralis/KillAura.java` y sus 73 hermanos
llevan su nombre real de módulo y el resto del árbol los nombra igual.

Las otras 444 clases se quedan con su nombre de dos letras. Los class files no
llevan mapa de ProGuard, la imagen nativa solo conserva los tipos del cliente
bajo `pub/astralis/client/A`, `A6`, `AA`… y el volcado de fuentes con nombres que
circula al lado de esta build **no es el mismo programa**: 38 de los 74 nombres
de módulo no existen en él (`ESP`, `Tracers`, `Chams`, `Freecam`, `NoFall`,
`PacketMine`, `Session`…), y en las clases que sí aparecen la firma de miembros no
coincide — `ekb` declara 70 campos y 21 métodos reales, su candidato en ese árbol
declara 59 y 20. Emparejar por estructura sobre ese árbol acierta 10 de 74
nombres ya conocidos, así que no se usa para nombrar: preferimos 74 nombres
probados a 449 inventados.

---

## 10. Qué obfuscador es

**Veredicto: Zelix Klassmaster para la capa Java, con una capa de thinning
nativo propio (`opalV2`) encima. No es JNIC.**

La firma de ZKM es estructural — ZKM no deja cadenas que lo nombren — y las
cuatro evidencias concuerdan:

| evidencia | medida | por qué es ZKM |
|---|---|---|
| cifrado de cadenas | DES/CBC/PKCS5 en 284 clases, DES/CBC/NoPadding en 202, IV = 8 ceros, clave por clase `A ^ K` guardada en un campo `static long` | el esquema de ZKM (`stringencryptionlevel` con DES, clave derivada de dos `long` en `<clinit>`) |
| despacho de cadenas y enteros | 3.897 sitios `invokedynamic (IJ)` en 143 clases con `BootstrapMethods`; el bootstrap construye un `MutableCallSite` y se auto-reemplaza por `MethodHandles.constant` tras la primera llamada | ZKM ≥ 5 usa `invokedynamic` + `MutableCallSite` para su cifrado de cadenas |
| renombrado | 449 de 518 clases con nombre de 2-3 letras (17 de 2, 430 de 3) | la longitud de nombre por defecto de ZKM |
| ofuscación de flujo | esplices de chequeo de nulo alrededor de regiones, pares `var1000x` muertos que sobreviven en la salida descompilada | la ofuscación de flujo de ZKM inserta predicados opacos que CFR no puede limpiar del todo |

Un escáner de constant pool sobre los 518 `.class` no encuentra `ZKM`, `zelix`
ni `SourceDebug` en ninguno — ZKM no firma su salida, así que la identificación
es por estructura, que es como se identifica ZKM siempre.

**Por qué no JNIC**, con el changelog y la documentación de jnic.dev como
referencia:

1. JNIC 3.1.1+ genera el nombre del loader al azar "para prevenir
   conflictos". Aquí el loader es fijo: `dev/opalV2/Loader`.
2. JNIC 3.5+ cifra cadenas en nativo con ChaCha20. Aquí el cifrado de cadenas
   es Java puro con DES de `javax.crypto` (ChaCha no aparece en ninguno de los
   518 ficheros).
3. JNIC traduce métodos enteros y "no queda rastro del método original en el
   `.class`". Aquí 514 de 518 clases son Java puro con todo su bytecode; solo
   11 métodos en 4 clases son `native`.
4. Ningún marcador `jnic`/`JNIC` en ningún fichero.

La capa `native` que sí existe es `opalV2` y ya estaba inventariada en
`ASTRALIS_MALWARE_ANALYSIS.md`: `dev/opalV2/Loader` extrae
`/Loader/<plataforma>/windows.dll` a `%TEMP%`, la carga con `System.load`, y
cada clase protegida llama a `Loader.registerNativesForClass(int, Class)` en su
`<clinit>` (4 clases, 11 métodos: `dqq.ahf`, `evd.dnu`, `fz` con 6 natives de
cripto, `hdl` con los callbacks del socket). La DLL lleva una VM de bytecode y
define una clase oculta `dev/opalV2/hidden/Hidden0` por JNI. Es un protector de
métodos nativos del mismo estilo que JNIC, pero el propio binario dice
llamarse `opalV2`.

---

## 11. Limpieza del residuo de ZKM en `src/`

Con las 3.897 llamadas plegadas, los operandos que el ofuscador apilaba para
el `invokedynamic` quedaron como tiendas muertas que CFR imprime alrededor del
código vivo (`short var10001 = 9026; long var10002 = 5589…L ^ ax;`).
`tools/strip_zkm_residue.py` las borra bajo dos condiciones que la hacen segura
sin AST: la variable no se lee nunca dentro de su método (comprobación por
ámbito, porque CFR recicla `var10001` entre métodos) y todo su lado derecho es
sin efectos (solo literales, identificadores simples, casts y operadores
aritméticos: sin puntos, sin llamadas, sin `new`, sin cadenas). Corre hasta
punto fijo porque quitar una tienda que leía otra muerta libera a ésta:

```
python tools/strip_zkm_residue.py src   # repetir hasta que quite 0
```

Resultado: **7.474 líneas muertas** en 319 de los 518 ficheros. Los splices de
`ClientSetup.abu()`, el runtime de descifrado de cadenas y las 55 llamadas sin
plegar quedan intactos — el pase solo toca tiendas puras a locales no leídas.


## 12. Nombres inferidos para las clases renombradas

Los 449 ficheros de `src/cc/astralis/` conservan el nombre corto de ZKM salvo
los 74 módulos ya probados. El resto se puede nombrar con evidencia propia:
cada clase del cliente lleva plegadas sus propias cadenas de UI, y las
familias estructurales dan el rol. `tools/infer_names.py` vuelca la tabla de
evidencia (superclase, interfaces, `class_*` de Minecraft referenciados,
literales) y emite un borrador con cuatro reglas:

- singletons y pantallas curadas: el nombre sale de sus cadenas distintivas
  ("Alt Manager", "Enter UID", "Reinitializing all fonts") — confianza high;
- pantallas (`extends class_437`) y modos de predicción (`extends fwu`):
  literal de display + sufijo de rol (`DropdownScreen`, `PredictionMode`);
- comandos (`extends fso`): el verbo, el literal corto no-runtime
  (`vclip` → `VclipCommand`);
- modos de movimiento (`extends hcr`): literal de display prefijado con el
  módulo que los registra (`Speed` + `Watchdog` → `SpeedWatchdog`).

Los literales que pertenecen al runtime de descifrado (`DES/CBC`,
`PKCS5Padding`, `ISO-8859-1`), a mensajes de excepción ("must not be null") o
que son blobs cifrados se descartan como fuente de nombres. Las etiquetas de
ajustes de los 17 módulos sin resolver de `mapping/modules.tsv` no cuentan
como nombre de módulo: los hijos de `guu` sin nombre probado no se tocan.

`tools/apply_names.py` aplica el borrador: renombra ficheros, declaraciones y
todas las referencias por palabra completa (excepto accesos a miembros
`x.<nombre>`, que nunca son clases). Verificado: 0 referencias residuales.

Resultado: **103 clases con nombre inferido** (23 high + 80 medium), todas con
la evidencia registrada en `mapping/inferred.tsv` y el mapa ProGuard en
`mapping/inferred.proguard.txt`. Quedan **275 ficheros con nombre corto**: no
llevan ningún literal identificativo propio (utilidades internas, mixins,
helpers de render) y nombrarlos sería inventar. La columna `evidence` de
`inferred.tsv` permite revisar cada decisión.


