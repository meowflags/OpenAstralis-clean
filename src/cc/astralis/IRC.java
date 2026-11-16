package cc.astralis;


import java.lang.invoke.MethodHandles;


import net.minecraft.class_338;
import net.minecraft.class_5250;

public class IRC extends guu {
   private static final long a = 80402280888536L;


   public IRC() {
      super(bfm.CLIENT);
   }

   @gdz
   public void duh(ajt event) {
      class_338 var10000 = chi.field_1705.method_1743();
      class_5250 var4 = bpa.alb("IRC", ClientSetup.gqy().deo().getRGB(), ClientSetup.gqy().cxj().getRGB());
      String var5 = a.cue();
      var10000.method_1812(var4.method_27693(" » " + var5));
   }

}
