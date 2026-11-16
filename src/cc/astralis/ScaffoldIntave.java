package cc.astralis;

import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public class ScaffoldIntave extends hcr {
   private static final long a = 49262927652748L;
   private static final String d;

   public ScaffoldIntave(guu parentClass) {
      long ax = ScaffoldIntave.a ^ 15534510141591L;
      super(a, d);
   }

   @gdz
   public void dcm(eih event) {
      long ax = ScaffoldIntave.a ^ 35534526465324L;
      if (chi.field_1724.method_24828()) {
         float axx = 1.1F;
         chi.field_1724
            .method_18800(
               chi.field_1724.method_18798().field_1352 * 1.1F, chi.field_1724.method_18798().field_1351, chi.field_1724.method_18798().field_1350 * 1.1F
            );
      }
   }

   static {
      long var0 = a ^ 129887344522176L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var4 = var2.doFinal("Intave".getBytes("ISO-8859-1"));
      String var5 = a(var4).intern();
      d = var5;
   }

}
