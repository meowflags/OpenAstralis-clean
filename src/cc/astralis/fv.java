package cc.astralis;

import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public record fv() {
   private final String cao;
   private final String aws;
   private static final long a = 137871520671381L;
   private static final String b;

   public fv(String name, String path) {
      a.cao = a;
      a.aws = a;
   }

   @Override
   public String toString() {
      long a = fv.a ^ 78795263285634L;
      return a.cao + b + a.aws + ")";
   }

   static {
      long var0 = a ^ 63721774612447L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var4 = var2.doFinal(" (".getBytes("ISO-8859-1"));
      String var5 = a(var4).intern();
      b = var5;
   }

}
