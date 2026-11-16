package cc.astralis;

import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_2350.class_2351;

public class VerusGlide extends hcr {
   private static final long a = 136001713370342L;
   private static final String d;

   public VerusGlide(guu parentClass) {
      long ax = VerusGlide.a ^ 61050776386077L;
      super(a, d);
   }

   @gdz
   public void bge(eih event) {
      long ax = VerusGlide.a ^ 61375830018600L;
      chi.field_1724.method_18799(chi.field_1724.method_18798().method_38499(class_2351.field_11052, -0.078400001525878));
      if (!chi.field_1724.method_24828()) {
         evd.dek(0.37);
      }
   }

   static {
      long var0 = a ^ 90118911320998L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var4 = var2.doFinal("Verus Glide".getBytes("ISO-8859-1"));
      String var5 = a(var4).intern();
      d = var5;
   }

}
