package cc.astralis;

import astralis.mixin.accessor.EntityVelocityUpdateS2CPacketAccessor;


import java.lang.invoke.MethodHandles;


import net.minecraft.class_2596;
import net.minecraft.class_2743;

public class cfj extends hcr {
   private final bes bwu;
   private static final long a = 124560963000567L;


   public cfj(guu parentClass) {
      long ax = cfj.a ^ 69355607627878L;
      super(a, "Air");
      a.bwu = new bes("Horizontal Velocity", 0.0F, 0.0F, 100.0F, 1.0F);
      a.ebu(a.bwu);
   }

   @gdz
   public void cnd(amo event) {
      long ax = cfj.a ^ 18859610646576L;
      int[] axx = ClientSetup.abu();
      amo var10000 = a;
      if (a.cud() != gpy.RECEIVE) {
         return;
      }

      var10000 = a;

      class_2596 axxx = var10000.bed();
      class_2596 var8 = axxx;
      if (!(axxx instanceof class_2743)) {
         return;
      }

      var8 = axxx;

      class_2743 axxxx = (class_2743)var8;
      EntityVelocityUpdateS2CPacketAccessor axxxxx = (EntityVelocityUpdateS2CPacketAccessor)axxxx;
      int var9 = axxxxx.getEntityId();
      if (var9 != chi.field_1724.method_5628()) {
         return;
      }

      var9 = chi.field_1724.method_24828();

      if (var9 != 0) {
         axxxxx.setVelocity(
            ajv.ett(axxxxx.getVelocity())
               .eab(axxxxx.getVelocity().field_1352 * (a.bwu.dnp().intValue() / 100.0))
               .cxp(axxxxx.getVelocity().field_1350 * (a.bwu.dnp().intValue() / 100.0))
               .gwt()
         );
         return;
      }

      a.gmm(true);
   }

}
