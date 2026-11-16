package cc.astralis;

import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public class SpeedStrafe extends hcr {
   private static final long a = 118250574689049L;
   private static final String d;

   public SpeedStrafe(guu parentClass) {
      long ax = SpeedStrafe.a ^ 5431671476323L;
      super(a, d);
   }

   @gdz
   public void elb(eih event) {
      long ax = SpeedStrafe.a ^ 130542777920019L;
      int[] var4 = ClientSetup.abu();
      if (chi.field_1724.method_24828()) {
         chi.field_1724.method_6043();
      }

      evd.dek(evd.fzm());
   }

   static {
      long var0 = a ^ 113898224885038L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var4 = var2.doFinal("Strafe".getBytes("ISO-8859-1"));
      String var5 = a(var4).intern();
      d = var5;
   }

}
