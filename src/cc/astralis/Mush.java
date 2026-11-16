package cc.astralis;

import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public class Mush extends hcr {
   private boolean ccv;
   private static final long a = 61340192965581L;
   private static final String d;

   public Mush(guu parentClass) {
      long ax = Mush.a ^ 105535290354664L;
      super(a, d);
      a.ccv = false;
   }

   @gdz
   public void dyh(eih event) {
      Mush var5;
      label30: {
         long ax = Mush.a ^ 12925780196666L;
         int[] var4 = ClientSetup.abu();
         int var10000 = chi.field_1724.field_6235;
         if (chi.field_1724.field_6235 == 0) {
            a.ccv = false;
            return;
         }

         var5 = a;

         var10000 = a.ccv;

         if (var10000 != 0) {
            return;
         }

         bav.fym(bav.hai() - 0.5);
         var5 = a;
      }

      var5.ccv = true;
   }

   static {
      long var0 = a ^ 124037183308388L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var4 = var2.doFinal("Mush".getBytes("ISO-8859-1"));
      String var5 = a(var4).intern();
      d = var5;
   }

}
