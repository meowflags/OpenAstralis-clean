package cc.astralis;

import astralis.mixin.accessor.LivingEntityAccessor;


import java.lang.invoke.MethodHandles;


import net.minecraft.class_746;

public class FastPlace extends guu {
   private final bes bse;
   public final gbp hhp;
   private static final long a = 131382339895956L;


   public FastPlace() {
      long a = FastPlace.a ^ 77959408160932L;
      super(bfm.PLAYER);
      a.bse = new bes("Delay", 0.0F, 0.0F, 4.0F, 1.0F);
      a.hhp = new gbp("Not while Scaffold", true);
      a.bfi(new ffn[]{a.bse, a.hhp});
   }

   @gdz
   public void fed(fxx e) {
      int[] var4 = ClientSetup.abu();
      class_746 var10000 = chi.field_1724;
      if (chi.field_1724 == null) {
         return;
      }

      var10000 = chi.field_1724;

      boolean var5 = var10000.method_24828();
      if (!var5) {
         return;
      }

      var5 = a.hhp.dnp();

      label30: {
         if (!var5) {
            break label30;
         }

         var5 = ClientSetup.gqy().aws().diy(GodBridge.class).dsv();

         if (var5) {
            return;
         }
      }

      ((LivingEntityAccessor)chi.field_1724).setJumpingCooldown(a.bse.dnp().intValue());
   }

}
