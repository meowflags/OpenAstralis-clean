package cc.astralis;

import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_2596;
import net.minecraft.class_2848;
import net.minecraft.class_2848.class_2849;

public class DisablerSprint extends hcr {
   private static final long a = 72359297652570L;
   private static final String d;

   public DisablerSprint(guu module) {
      long ax = DisablerSprint.a ^ 57551362323921L;
      super(a, d);
   }

   @gdz
   public void gfz(amo event) {
      long ax = DisablerSprint.a ^ 98989627095647L;
      int[] var10000 = ClientSetup.abu();
      class_2596 var6 = a.bed();
      int[] axx = var10000;
      class_2596 var7 = var6;
      if (!(var6 instanceof class_2848)) {
         return;
      }

      var7 = var6;

      label26: {
         class_2848 axxx = (class_2848)var7;
         class_2849 var8 = axxx.method_12365();
         class_2849 var10001 = class_2849.field_12981;
         if (var8 == class_2849.field_12981) {
            break label26;
         }

         var8 = axxx.method_12365();
         var10001 = class_2849.field_12985;

         if (var8 != var10001) {
            return;
         }
      }

      a.gmm(true);
   }

   static {
      long var0 = a ^ 24169805648685L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var4 = var2.doFinal("Sprint".getBytes("ISO-8859-1"));
      String var5 = a(var4).intern();
      d = var5;
   }

}
