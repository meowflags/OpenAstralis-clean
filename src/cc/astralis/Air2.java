package cc.astralis;

import astralis.mixin.accessor.EntityVelocityUpdateS2CPacketAccessor;


import java.lang.invoke.MethodHandles;


import net.minecraft.class_2596;
import net.minecraft.class_2743;

public class Air2 extends hcr {
   private final bes fab;
   private static final long a = 22820559065338L;


   public Air2(guu parentClass) {
      long ax = Air2.a ^ 46348342486263L;
      super(a, "Air 2");
      a.fab = new bes("Horizontal Velocity", 0.0F, 0.0F, 100.0F, 1.0F);
      a.ebu(a.fab);
   }

   @gdz
   public void egg(amo event) {
      long ax = Air2.a ^ 114098860776429L;
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
      int var9 = axxxxx.getEntityId();
      if (var9 != chi.field_1724.method_5628()) {
         return;
      }

      var9 = chi.field_1724.method_24828();

      if (var9 != 0) {
         label75: {
            boolean var10 = ((eky)ClientSetup.gqy().aws().diy(eky.class)).dsv();
            if (!var10) {
               break label75;
            }

            var10 = evd.dbj();

            if (var10) {
               return;
            }
         }

         axxxxx.setVelocity(
            ajv.ett(axxxxx.getVelocity())
               .eab(axxxxx.getVelocity().field_1352 * (a.fab.dnp().intValue() / 100.0))
               .cxp(axxxxx.getVelocity().field_1350 * (a.fab.dnp().intValue() / 100.0))
               .gwt()
         );
         return;
      }

      var9 = ((eky)ClientSetup.gqy().aws().diy(eky.class)).dsv();

      label64: {
         label63: {
            if (var9 == 0) {
               break label63;
            }

            var9 = evd.dbj();

            if (var9 != 0) {
               break label64;
            }
         }

         a.gmm(true);
         return;
      }

      axxxxx.setVelocity(ajv.ett(axxxxx.getVelocity()).aou(0.0).gwt());
   }

}
