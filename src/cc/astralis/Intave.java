package cc.astralis;

import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_304;

public class Intave extends hcr {
   private final dke hca;
   private static final long a = 120195731291067L;
   private static final String d;

   public Intave(guu parentClass) {
      long ax = Intave.a ^ 35339175066809L;
      super(a, d);
      a.hca = (dke)a;
   }

   @gdz
   public void fj(fxx e) {
      long ax = Intave.a ^ 95421527547819L;
      if (chi.field_1755 != null && a.hca.ech()) {
         class_304.method_1424();
         chi.field_1690.field_1832.method_23481(true);
         chi.field_1690.field_1903.method_23481(false);
      }
   }

   static {
      long var0 = a ^ 33265075263493L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var4 = var2.doFinal("Intave".getBytes("ISO-8859-1"));
      String var5 = a(var4).intern();
      d = var5;
   }

}
