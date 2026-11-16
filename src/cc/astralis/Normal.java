package cc.astralis;

import astralis.mixin.accessor.EntityVelocityUpdateS2CPacketAccessor;


import java.lang.invoke.MethodHandles;


import net.minecraft.class_243;
import net.minecraft.class_2596;
import net.minecraft.class_2743;

public class Normal extends hcr {
   private final bes djc;
   private final bes cs;
   private static final long a = 61139257105513L;


   public Normal(guu parentClass) {
      long ax = Normal.a ^ 5718948125966L;
      super(a, "Normal");
      a.djc = new bes("Horizontal Velocity", 0.0F, 0.0F, 100.0F, 1.0F);
      a.cs = new bes("Vertical Velocity", 0.0F, 0.0F, 100.0F, 1.0F);
      a.dxe(new ffn[]{a.djc, a.cs});
   }

   @gdz
   public void bol(amo event) {
      long ax = Normal.a ^ 76617317991516L;
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
      EntityVelocityUpdateS2CPacketAccessor var10 = axxxxx;
      if (axxxxx.getEntityId() != chi.field_1724.method_5628()) {
         return;
      }

      var10 = axxxxx;

      class_243 axxxxxx = var10.getVelocity();
      axxxxx.setVelocity(
         ajv.ett(axxxxx.getVelocity())
            .eab(axxxxxx.field_1352 * (a.djc.dnp().intValue() / 100.0))
            .cxp(axxxxxx.field_1350 * (a.djc.dnp().intValue() / 100.0))
            .aou(axxxxxx.field_1351 * (a.cs.dnp().intValue() / 100.0))
            .gwt()
      );
   }

}
