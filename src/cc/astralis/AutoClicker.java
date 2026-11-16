package cc.astralis;

import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public class AutoClicker extends guu {
   private final gbp czg;
   private static final long a = 134639318277804L;
   private static final String g;

   public AutoClicker() {
      long a = AutoClicker.a ^ 75779968184376L;
      super(bfm.COMBAT);
      a.czg = new gbp(g, false);
      a.beb(a.czg);
   }

   @gdz
   public void afz(gwj event) {
      label20: {
         int[] var4 = ClientSetup.abu();
         boolean var10000 = a.czg.dnp();
         if (!var10000) {
            break label20;
         }

         var10000 = chi.field_1724.method_24828();

         if (!var10000) {
            return;
         }
      }

      a.gmm(true);
   }

   static {
      long var0 = a ^ 50636300982662L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var4 = var2.doFinal("Ground Only".getBytes("ISO-8859-1"));
      String var5 = d(var4).intern();
      g = var5;
   }

}
