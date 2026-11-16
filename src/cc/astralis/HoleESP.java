package cc.astralis;

import it.unimi.dsi.fastutil.objects.ObjectListIterator;
import java.awt.Color;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_2338;
import net.minecraft.class_238;

public class HoleESP extends guu {
   private final acn drm;
   private static final long a = 30956334273749L;
   private static final String g;
   private static final long h;

   public HoleESP() {
      long a = HoleESP.a ^ 128939683278417L;
      super(bfm.VISUAL);
      a.drm = new acn(g, Color.red);
      a.bfi(new ffn[]{a.drm});
   }

   @Override
   public void auj() {
      cc.astralis.fki.gdu(true);
      super.auj();
   }

   @Override
   public void frg() {
      cc.astralis.fki.gdu(false);
      super.frg();
   }

   @gdz
   public void ha(bsm event) {
      int[] var10000 = ClientSetup.abu();
      cc.astralis.fki.asf();
      ObjectListIterator var5 = cc.astralis.fki.fvc().iterator();
      int[] axx = var10000;

      while (var5.hasNext()) {
         class_2338 axxx = (class_2338)var5.next();
         bqf.hjf(a.bus(), new class_238(axxx), a.drm.dnp(), (int)h);
      }
   }

   static {
      long var5 = a ^ 109439461585538L;
      Cipher var7;
      Cipher var10000 = var7 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var5 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var8 = 1; var8 < 8; var8++) {
         var10003[var8] = (byte)(var5 << var8 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var9 = var7.doFinal("Color".getBytes("ISO-8859-1"));
      String var12 = d(var9).intern();
      g = var12;
      Cipher var0;
      var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var5 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var5 << var1 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var2 = 6940278182408598990L;
      byte[] var4 = var0.doFinal(
         new byte[]{
            (byte)(var2 >>> 56),
            (byte)(var2 >>> 48),
            (byte)(var2 >>> 40),
            (byte)(var2 >>> 32),
            (byte)(var2 >>> 24),
            (byte)(var2 >>> 16),
            (byte)(var2 >>> 8),
            (byte)var2
         }
      );
      long var14 = (var4[0] & 255L) << 56
         | (var4[1] & 255L) << 48
         | (var4[2] & 255L) << 40
         | (var4[3] & 255L) << 32
         | (var4[4] & 255L) << 24
         | (var4[5] & 255L) << 16
         | (var4[6] & 255L) << 8
         | var4[7] & 255L;
      h = var14;
   }

}
