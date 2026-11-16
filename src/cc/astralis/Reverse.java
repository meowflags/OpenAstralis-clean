package cc.astralis;

import astralis.mixin.accessor.EntityVelocityUpdateS2CPacketAccessor;


import java.lang.invoke.MethodHandles;


import net.minecraft.class_2596;
import net.minecraft.class_2743;

public class Reverse extends hcr {
   private final bes eef;
   private static final long a = 35378739810342L;


   public Reverse(guu parentClass) {
      long ax = Reverse.a ^ 17591423717958L;
      super(a, "Reverse");
      a.eef = new bes("Horizontal Velocity", 0.0F, 0.0F, 100.0F, 1.0F);
      a.ebu(a.eef);
   }

   @gdz
   public void fhl(amo event) {
      long ax = Reverse.a ^ 115177875220319L;
      int[] axx = ClientSetup.abu();
      amo var10000 = a;
      if (a.cud() != gpy.RECEIVE) {
         return;
      }

      var10000 = a;

      class_2596 axxx = var10000.bed();
      if (!(axxx instanceof class_2743)) {
         return;
      }


      EntityVelocityUpdateS2CPacketAccessor axxxxx = (EntityVelocityUpdateS2CPacketAccessor)a.bed();
      EntityVelocityUpdateS2CPacketAccessor var9 = axxxxx;
      if (axxxxx.getEntityId() != chi.field_1724.method_5628()) {
         return;
      }

      var9 = axxxxx;

      var9.setVelocity(
         ajv.ett(axxxxx.getVelocity())
            .eab(-axxxxx.getVelocity().field_1352 * (a.eef.dnp().intValue() / 100.0))
            .cxp(-axxxxx.getVelocity().field_1350 * (a.eef.dnp().intValue() / 100.0))
            .gwt()
      );
   }

}
