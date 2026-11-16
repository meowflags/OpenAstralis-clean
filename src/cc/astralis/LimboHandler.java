package cc.astralis;


import java.lang.invoke.MethodHandles;


import net.minecraft.class_2596;
import net.minecraft.class_7439;

public class LimboHandler extends cec {
   private static final long a = 67448729663455L;


   @gdz
   public void bcm(amo packetEvent) {
      int[] var10000 = ClientSetup.abu();
      class_2596 var6 = a.bed();
      int[] axx = var10000;
      class_2596 var7 = var6;
      if (!(var6 instanceof class_7439)) {
         return;
      }

      var7 = var6;

      class_7439 axxx = (class_7439)var7;
      String var8 = axxx.comp_763().getString();
      if (!var8.equalsIgnoreCase("An exception occurred in your connection, so you have been routed to limbo!")) {
         return;
      }

      long var9 = System.currentTimeMillis();
      var8 = "Limbo Detected at" + var9;

      bpa.dhu(var8);
   }

}
