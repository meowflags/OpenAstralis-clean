package cc.astralis;

import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public class SpeedBlocksMC extends hcr {
   private static final long a = 73596753707258L;
   private static final String d;

   public SpeedBlocksMC(guu parentClass) {
      long ax = SpeedBlocksMC.a ^ 108860623869375L;
      super(a, d);
   }

   @gdz
   public void dqa(fxx event) {
      long ax = SpeedBlocksMC.a ^ 67314030834838L;
      int[] var4 = ClientSetup.abu();
      if (chi.field_1724.method_24828()) {
         chi.field_1724.method_6043();
      }

      evd.dek(evd.chd());
   }

   static {
      long var0 = a ^ 86233833278076L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var4 = var2.doFinal("Blocks MC".getBytes("ISO-8859-1"));
      String var5 = a(var4).intern();
      d = var5;
   }

}
