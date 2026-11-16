package cc.astralis;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


import java.lang.invoke.MethodHandles;


import java.net.HttpURLConnection;
import java.net.MalformedURLException;
import java.net.ProtocolException;
import java.net.URL;
import java.nio.charset.StandardCharsets;


import java.util.concurrent.CompletableFuture;


import net.minecraft.class_310;

public class Session extends guu {
   private final cbm hc = new cbm();
   private static final long a = 123074770375794L;


   private static final long p;

   public Session() {
      super(bfm.EXPLOIT);
   }

   @gdz
   public void aap(fxx event) {
      long ax = Session.a ^ 137073874600331L;
      int[] axx = ClientSetup.abu();
      class_310 var10000 = chi;
      if (chi.field_1724 == null) {
         return;
      }

      var10000 = chi;

      if (var10000.field_1687 != null && a.hc.fsc(p) && chi.method_1548() != null && !chi.method_1542()) {
         a.hc.glr();
         Runnable axxx = () -> {
            long axxxx = Session.a ^ 122696742775376L;
            int[] var10000x = ClientSetup.abu();
            HttpURLConnection ax = a.fxi();
            int[] axx = var10000x;

            try (BufferedReader axxx = new BufferedReader(new InputStreamReader(ax.getInputStream(), StandardCharsets.UTF_8))) {
               StringBuilder axxxx = new StringBuilder();

               String axxxxx;
               while ((axxxxx = axxx.readLine()) != null) {
                  axxxx.append(axxxxx.trim());
               }
            } catch (IOException var10) {
            }
         };
         CompletableFuture.runAsync(axxx).exceptionally(axxxx -> null);
      }
   }

   private HttpURLConnection fxi() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic cc/astralis/Session.a J
      // 03: ldc2_w 33206681422324
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic cc/astralis/ClientSetup.abu ()[I
      // 0b: new com/google/gson/JsonObject
      // 0e: dup
      // 0f: invokespecial com/google/gson/JsonObject.<init> ()V
      // 12: astore 4
      // 14: aload 4
      // 16: sipush 30763
      // 19: ldc2_w 5919130014867045826
      // 1c: lload 1
      // 1d: lxor
      // 1e: pop2
      // 1f: pop
      // 20: ldc "accessToken"
      // 22: getstatic cc/astralis/Session.chi Lnet/minecraft/class_310;
      // 25: invokevirtual net/minecraft/class_310.method_1548 ()Lnet/minecraft/class_320;
      // 28: invokevirtual net/minecraft/class_320.method_1674 ()Ljava/lang/String;
      // 2b: invokevirtual com/google/gson/JsonObject.addProperty (Ljava/lang/String;Ljava/lang/String;)V
      // 2e: astore 3
      // 2f: aload 4
      // 31: sipush 8839
      // 34: ldc2_w 6457087345202784106
      // 37: lload 1
      // 38: lxor
      // 39: pop2
      // 3a: pop
      // 3b: ldc "selectedProfile"
      // 3d: getstatic cc/astralis/Session.chi Lnet/minecraft/class_310;
      // 40: invokevirtual net/minecraft/class_310.method_1548 ()Lnet/minecraft/class_320;
      // 43: invokevirtual net/minecraft/class_320.method_44717 ()Ljava/util/UUID;
      // 46: invokestatic java/lang/String.valueOf (Ljava/lang/Object;)Ljava/lang/String;
      // 49: invokevirtual com/google/gson/JsonObject.addProperty (Ljava/lang/String;Ljava/lang/String;)V
      // 4c: aload 4
      // 4e: sipush 12939
      // 51: ldc2_w 3609351380094973801
      // 54: lload 1
      // 55: lxor
      // 56: pop2
      // 57: pop
      // 58: ldc "serverId"
      // 5a: sipush 17060
      // 5d: ldc2_w 3577226776522622791
      // 60: lload 1
      // 61: lxor
      // 62: pop2
      // 63: pop
      // 64: ldc "31531515"
      // 66: invokevirtual com/google/gson/JsonObject.addProperty (Ljava/lang/String;Ljava/lang/String;)V
      // 69: aload 0
      // 6a: invokevirtual cc/astralis/Session.fws ()Ljava/net/HttpURLConnection;
      // 6d: astore 5
      // 6f: aload 5
      // 71: invokevirtual java/net/HttpURLConnection.getOutputStream ()Ljava/io/OutputStream;
      // 74: astore 6
      // 76: aload 4
      // 78: invokevirtual com/google/gson/JsonObject.toString ()Ljava/lang/String;
      // 7b: getstatic java/nio/charset/StandardCharsets.UTF_8 Ljava/nio/charset/Charset;
      // 7e: invokevirtual java/lang/String.getBytes (Ljava/nio/charset/Charset;)[B
      // 81: astore 7
      // 83: aload 6
      // 85: aload 7
      // 87: bipush 0
      // 88: aload 7
      // 8a: arraylength
      // 8b: invokevirtual java/io/OutputStream.write ([BII)V
      // 8e: aload 6
      // 90: aload 3
      // 91: ifnull 99
      // 94: ifnull c5
      // 97: aload 6
      // 99: invokevirtual java/io/OutputStream.close ()V
      // 9c: goto c5
      // 9f: astore 7
      // a1: aload 6
      // a3: aload 3
      // a4: ifnull b3
      // a7: ifnull c2
      // aa: goto b1
      // ad: invokestatic cc/astralis/Session.d (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // b0: athrow
      // b1: aload 6
      // b3: invokevirtual java/io/OutputStream.close ()V
      // b6: goto c2
      // b9: astore 8
      // bb: aload 7
      // bd: aload 8
      // bf: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // c2: aload 7
      // c4: athrow
      // c5: goto d4
      // c8: astore 6
      // ca: new java/lang/RuntimeException
      // cd: dup
      // ce: aload 6
      // d0: invokespecial java/lang/RuntimeException.<init> (Ljava/lang/Throwable;)V
      // d3: athrow
      // d4: aload 5
      // d6: areturn
   }

   private HttpURLConnection fws() {
      long a = Session.a ^ 104335450963725L;

      URL ax;
      try {
         ax = new URL("https://sessionserver.mojang.com/session/minecraft/join");
      } catch (MalformedURLException var8) {
         throw new RuntimeException(var8);
      }

      HttpURLConnection axx;
      try {
         axx = (HttpURLConnection)ax.openConnection();
      } catch (IOException var7) {
         throw new RuntimeException(var7);
      }

      try {
         axx.setRequestMethod("POST");
      } catch (ProtocolException var6) {
         throw new RuntimeException(var6);
      }

      axx.setRequestProperty("Content-type", "application/json");
      axx.setRequestProperty("Accept", "application/json");
      axx.setDoOutput(true);
      return axx;
   }

   static {
      p = 50L;
   }

}
