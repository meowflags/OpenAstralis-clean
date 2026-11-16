package cc.astralis;

import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public class OldMush extends hcr {
   private int dkr;
   private static final long a = 42578052491949L;
   private static final String d;

   public OldMush(guu parentClass) {
      long ax = OldMush.a ^ 126919728360227L;
      super(a, d);
   }

   @Override
   public void dil() {
      a.dkr = 0;
      super.dil();
   }

   @gdz
   public void bfh(eih event) {
      int var5;
      label25: {
         long ax = OldMush.a ^ 86070059749683L;
         int[] var10000 = ClientSetup.abu();
         evd.dek(0.5);
         int[] var4 = var10000;
         var5 = chi.field_1690.field_1903.method_1434();
         if (var5 != 0) {
            var5 = 1;
            break label25;
         }

         var5 = chi.field_1690.field_1832.method_1434();

         var5 = var5 != 0 ? -1 : 0;
      }

      bav.fym(var5);
   }

   static {
      long var0 = a ^ 73666346758421L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var4 = var2.doFinal("Old Mush".getBytes("ISO-8859-1"));
      String var5 = a(var4).intern();
      d = var5;
   }

}
