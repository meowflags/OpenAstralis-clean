package cc.astralis;


import java.lang.invoke.MethodHandles;


import net.minecraft.class_124;
import net.minecraft.class_2561;
import net.minecraft.class_2583;
import net.minecraft.class_310;
import net.minecraft.class_5250;
import net.minecraft.class_746;

public class bpa implements dlc {
   private static String[] dyf;
   private static final long a = 328666661901L;


   public static void dhu(Object message) {
      long ax = bpa.a ^ 7578634929766L;
      int[] var3 = ClientSetup.abu();
      class_310 var10000 = chi;
      if (chi.field_1724 == null) {
         return;
      }

      var10000 = chi;

      if (var10000.field_1687 == null) {
         return;
      }

      var10000 = chi;

      class_746 var4 = var10000.field_1724;
      class_5250 var5 = alb("Astralis", ClientSetup.gqy().deo().getRGB(), ClientSetup.gqy().cxj().getRGB());
      String var6 = String.valueOf(a);
      var4.method_7353(var5.method_27693(" » " + var6), false);
   }

   public static void bez(Object message) {
      long ax = bpa.a ^ 34193282613605L;
      int[] var3 = ClientSetup.abu();
      Object var10000 = ClientSetup.gqy().aws().diy(dxc.class);
      if (!((dxc)var10000).dsv()) {
         return;
      }

      var10000 = a;

      dhu(var10000);
   }

   public static class_5250 alb(String message, int firstColor, int secondColor) {
      long ax = bpa.a ^ 56950682075184L;
      int[] var10000 = ClientSetup.abu();
      class_5250 axx = class_2561.method_43473();
      axx.method_27693(class_124.field_1063 + "[");
      int axxx = 0;
      int[] axxxx = var10000;

      while (true) {
         if (axxx < a.length()) {
            float axxxxx = (float)(a.length() - 1 - axxx) / (a.length() - 1);
            class_2583 axxxxxx = class_2583.field_24360.method_36139(dec.bw(a, a, axxxxx));
            axx.method_10852(class_2561.method_43470(String.valueOf(a.charAt(axxx))).method_10862(axxxxxx));
            axxx++;

            continue;
         }

         axx.method_27693(class_124.field_1063 + "]");
         break;
      }

      return axx;
   }

   public static void dsj(String[] var0) {
      dyf = var0;
   }

   public static String[] fbq() {
      return dyf;
   }

}
