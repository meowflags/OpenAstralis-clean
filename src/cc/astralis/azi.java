package cc.astralis;

import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_2708;

public class azi extends guu {
   private static final long a = 36028615825768L;
   private static final String g;

   public azi() {
      super(bfm.PLAYER);
   }

   @gdz
   public void ewb(amo event) {
      if (a.bed() instanceof class_2708) {
         bpa.dhu(g);
      }
   }

   static {
      long var0 = a ^ 44468970555547L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var4 = var2.doFinal("Flag detected!".getBytes("ISO-8859-1"));
      String var5 = d(var4).intern();
      g = var5;
   }

}
