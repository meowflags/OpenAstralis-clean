package cc.astralis;

import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1268;
import net.minecraft.class_2338;
import net.minecraft.class_2350;
import net.minecraft.class_243;
import net.minecraft.class_2885;
import net.minecraft.class_3965;

public class DisablerVerusFly extends hcr {
   private static final long a = 4135758628103L;
   private static final String d;

   public DisablerVerusFly(guu module) {
      long ax = DisablerVerusFly.a ^ 83341362404917L;
      super(a, d);
   }

   @gdz
   public void gip(eih event) {
      gix.avn(
         ax -> new class_2885(
            class_1268.field_5808, new class_3965(new class_243(-1.0, -0.5, -1.0), class_2350.field_11033, new class_2338(-1, -1, -1), false), 0
         )
      );
   }

   static {
      long var0 = a ^ 133012798106623L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var4 = var2.doFinal("Verus Fly".getBytes("ISO-8859-1"));
      String var5 = a(var4).intern();
      d = var5;
   }

}
