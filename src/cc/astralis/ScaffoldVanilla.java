package cc.astralis;

import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public class ScaffoldVanilla extends hcr {
   private static final long a = 64743884829677L;
   private static final String d;

   public ScaffoldVanilla(guu parentClass) {
      long ax = ScaffoldVanilla.a ^ 27771764700331L;
      super(a, d);
   }

   @gdz
   public void hal(eih event) {
      long ax = ScaffoldVanilla.a ^ 50089305077417L;
      int[] var4 = ClientSetup.abu();
      boolean var10000 = chi.field_1690.field_1903.method_1434();
      if (!var10000) {
         return;
      }

      var10000 = ((efx)a.clv()).gez.dnp();

      if (!var10000) {
         ;
      }
   }

   static {
      long var0 = a ^ 64292198032839L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var4 = var2.doFinal("Vanilla".getBytes("ISO-8859-1"));
      String var5 = a(var4).intern();
      d = var5;
   }

}
