package cc.astralis;

import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public class SpeedVulcanLow extends hcr {
   private static final long a = 103793640742919L;
   private static final String d;

   public SpeedVulcanLow(guu parentClass) {
      long ax = SpeedVulcanLow.a ^ 136958183965382L;
      super(a, d);
   }

   @gdz
   public void hiz(eih event) {
      long ax = SpeedVulcanLow.a ^ 18696782012962L;
      int[] var4 = ClientSetup.abu();
      int var10000 = evd.dbj();
      if (var10000 == 0) {
         return;
      }

      chi.field_1690.field_1903.method_23481(true);
      var10000 = chi.field_1724.method_24828();

      if (var10000 != 0) {
         evd.dyv();
      }

      var10000 = hjr;

      byte var10001 = 2;
      if (var10000 <= 2) {
         evd.dek(evd.chd());
      }

      var10000 = hjr;
      var10001 = 3;

      label62: {
         if (var10000 <= var10001) {
            return;
         }

         var5 = chi.field_1724;

         var10000 = chi.field_1724.field_6012;
         var10001 = 5;

         if (var10000 % var10001 != 0) {
            return;
         }

         bav.fym(-5.0);
         var5 = chi.field_1724;
      }

      var5.method_18800(
         chi.field_1724.method_18798().field_1352 * 0.9, chi.field_1724.method_18798().field_1351, chi.field_1724.method_18798().field_1350 * 0.9
      );
   }

   static {
      long var0 = a ^ 105855775972226L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var4 = var2.doFinal("Vulcan Low".getBytes("ISO-8859-1"));
      String var5 = a(var4).intern();
      d = var5;
   }

}
