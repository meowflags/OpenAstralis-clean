package cc.astralis;

import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public class Ground extends hcr {
   private static final long a = 38949540138134L;
   private static final String d;

   public Ground(guu parentClass) {
      super(a, d);
   }

   @gdz
   public void fcy(eih event) {
      a.dad(true);
   }

   static {
      long var0 = a ^ 6754152437658L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var4 = var2.doFinal("Ground".getBytes("ISO-8859-1"));
      String var5 = a(var4).intern();
      d = var5;
   }

}
