package cc.astralis;

import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public class WatchdogYport extends hcr {
   private static cdr[] cy;
   private static final long a = 38287608407527L;
   private static final String d;

   public WatchdogYport(guu parentClass) {
      long ax = WatchdogYport.a ^ 134915690929610L;
      super(a, d);
   }

   @gdz
   public void gsq(elx event) {
      long ax = WatchdogYport.a ^ 53262772139718L;
      int[] var4 = ClientSetup.abu();
      double var5;
      int var10000 = (var5 = chi.field_1724.field_6017 - 0.07) == 0.0 ? 0 : (var5 < 0.0 ? -1 : 1);
      if (var10000 > 0) {
         evd.eeo();
      }

      var10000 = chi.field_1724.method_24828();

      if (var10000 != 0) {
         a.ftl(0.003);
      }

      var10000 = chi.field_1724.method_24828();

      label38: {
         if (var10000 != 0) {
            break label38;
         }

         double var6;
         var10000 = (var6 = chi.field_1724.method_18798().field_1351 - -0.07546000146865844) == 0.0 ? 0 : (var6 < 0.0 ? -1 : 1);

         if (var10000 != 0) {
            return;
         }
      }

      evd.fdo(a, evd.cqz(0.3296F, 0.3689F, 0.4252F));
   }

   public static void cbj(cdr[] var0) {
      cy = var0;
   }

   public static cdr[] ddr() {
      return cy;
   }

   static {
      long var0 = a ^ 54464598110517L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var4 = var2.doFinal("Watchdog Yport".getBytes("ISO-8859-1"));
      String var5 = a(var4).intern();
      d = var5;
      if (ddr() != null) {
         cbj(new cdr[3]);
      }
   }

}
