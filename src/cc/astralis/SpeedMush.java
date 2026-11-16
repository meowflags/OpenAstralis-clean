package cc.astralis;

import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_746;

public class SpeedMush extends hcr {
   private static final long a = 48039453267156L;
   private static final String d;

   public SpeedMush(guu parentClass) {
      long ax = SpeedMush.a ^ 46160508601584L;
      super(a, d);
   }

   @gdz
   public void gbs(eih event) {
      label20: {
         long ax = SpeedMush.a ^ 15767045346433L;
         int[] var4 = ClientSetup.abu();
         class_746 var10000 = chi.field_1724;
         if (!chi.field_1724.method_24828()) {
            break label20;
         }

         var10000 = chi.field_1724;

         var10000.method_6043();
         return;
      }

      evd.dyv();
   }

   static {
      long var0 = a ^ 64541650615982L;
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
