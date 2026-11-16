package cc.astralis;

import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_2813;
import net.minecraft.class_304;
import net.minecraft.class_437;

public class GuiMoveModernWatchdog2 extends hcr {
   private final dke emo;
   private boolean dig;
   private int eih;
   private static final long a = 69171471560327L;
   private static final String d;
   private static final long e;

   public GuiMoveModernWatchdog2(guu parentClass) {
      long ax = GuiMoveModernWatchdog2.a ^ 50737453524129L;
      super(a, d);
      a.dig = false;
      a.eih = 0;
      a.emo = (dke)a;
   }

   @gdz
   public void bsb(fxx e) {
      long ax = GuiMoveModernWatchdog2.a ^ 20836539778740L;
      int[] var10000 = ClientSetup.abu();
      class_437 axx = chi.field_1755;
      int[] axxx = var10000;
      if (axx != null) {
         int var6 = a.emo.ech();
         if (var6 == 0) {
            return;
         }

         var6 = a.dig;

         label71:
         if (var6 != 0) {
            a.eih++;
            var6 = a.eih;

            if (a.eih >= (int)e) {
               a.dig = false;
               a.eih = 0;
            }
         }

         var6 = a.dig;

         if (var6 != 0) {
            chi.field_1690.field_1894.method_23481(false);
            chi.field_1690.field_1881.method_23481(false);
            chi.field_1690.field_1913.method_23481(false);
            chi.field_1690.field_1849.method_23481(false);
            chi.field_1690.field_1903.method_23481(false);
            chi.field_1690.field_1867.method_23481(false);
            return;
         }

         class_304.method_1424();
         var6 = a.emo.gfw.dnp();

         if (var6 == 0) {
            chi.field_1690.field_1903.method_23481(false);
         }

         var6 = a.emo.dfl.dnp();

         if (var6 == 0) {
            chi.field_1690.field_1832.method_23481(false);
         }

         var6 = a.emo.fvw.dnp();

         if (var6 == 0) {
            chi.field_1690.field_1867.method_23481(false);
            chi.field_1724.method_5728(false);
         }
      }
   }

   @gdz
   public void bhu(amo e) {
      long ax = GuiMoveModernWatchdog2.a ^ 74194531236949L;
      if (a.cud() != gpy.RECEIVE && chi.field_1687 != null) {
         if (a.bed() instanceof class_2813) {
            a.dig = true;
            a.eih = 0;
         }
      }
   }

   static {
      long var5 = a ^ 109508607295687L;
      Cipher var7;
      Cipher var10000 = var7 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var5 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var8 = 1; var8 < 8; var8++) {
         var10003[var8] = (byte)(var5 << var8 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var9 = var7.doFinal("Modern Watchdog 2".getBytes("ISO-8859-1"));
      String var12 = a(var9).intern();
      d = var12;
      Cipher var0;
      var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var5 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var5 << var1 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var2 = 1084080307604905003L;
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
      e = var14;
   }

}
