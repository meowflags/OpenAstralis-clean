package cc.astralis;

import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_2851;

public class DisablerMiniblox extends hcr {
   private static final long a = 45538465792383L;
   private static final String d;

   public DisablerMiniblox(guu module) {
      super(a, d);
   }

   @gdz
   public void fpb(fxx event) {
      chi.method_1562().method_52787(new class_2851(chi.field_1724.field_3913.field_54155));
   }

   static {
      long var0 = a ^ 7403426925579L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var4 = var2.doFinal("Miniblox".getBytes("ISO-8859-1"));
      String var5 = a(var4).intern();
      d = var5;
   }

}
