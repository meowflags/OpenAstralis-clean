package cc.astralis;

import astralis.mixin.accessor.AccessorClientPlayerInteractionManager;


import java.lang.invoke.MethodHandles;


import net.minecraft.class_310;
import net.minecraft.class_636;

public class SpeedMine extends guu {
   private final adu fhl;
   private final bes gay;
   private final gbp cct;
   private final bes aca;
   private boolean dii;
   private static final long a = 25423068547531L;


   public SpeedMine() {
      long a = SpeedMine.a ^ 133023791272449L;
      super(bfm.WORLD);
      String[] var10 = new String[2];
      var10[0] = "Packet";
      var10[1] = "Timer";
      a.fhl = new adu("Mode", "Packet", var10);
      a.gay = new bes("Speed", 1.25F, 1.0F, 5.0F, 0.05F);
      a.cct = new gbp("Mining Cooldown", true);
      a.aca = (bes)new bes("Cooldown", 0.0F, 0.0F, 5.0F, 1.0F).bih(a.cct::dnp);
      a.dii = false;
      a.bfi(new ffn[]{a.fhl, a.gay, a.cct, a.aca});
   }

   @gdz
   public void bmj(fxx event) {
      int[] axx = ClientSetup.abu();
      class_310 var10000 = chi;
      if (chi.field_1761 == null) {
         return;
      }

      var10000 = chi;

      if (var10000.field_1724 == null) {
         return;
      }

      var10000 = chi;

      AccessorClientPlayerInteractionManager var9 = var10000.field_1687;
      if (var10000.field_1687 == null) {
         return;
      }

      a.efe(a.fhl.dnp() + " " + a.gay.dnp().floatValue());
      var9 = a.cct.dnp();

      var9 = (Boolean)var9;
      label140:
      if (var9) {
         class_636 var6 = chi.field_1761;
         var9 = var6;

         if (var6 instanceof AccessorClientPlayerInteractionManager axxx) {
            axxx.setBreakingCooldown(a.aca.dnp().intValue());
         }
      }

      var9 = a.fhl.dnp();

      String var7 = (String)var9;
      byte var8 = -1;
      var11 = var7.hashCode();
      label133:
      switch (var11) {
         case -1911998296:
            var11 = var7.equals("Packet");

            if (var11 == 0) {
               break;
            }

            var8 = 0;
            break;
         case 80811813:
            var11 = var7.equals("Timer");

            if (var11 != 0) {
               var8 = 1;
            }
      }

      var11 = var8;

      label159: {
         switch (var11) {
            case 0:
               var11 = chi.field_1761.method_2923();
               break;
            case 1:
               break label159;
            default:
               return;
         }

         label160: {
            if (var11 == 0) {
               return;
            }

            var9 = (AccessorClientPlayerInteractionManager)chi.field_1761;

            float var17;
            var11 = (var17 = var9.getCurrentBreakingProgress() - 1.0F / a.gay.dnp().floatValue()) == 0.0F ? 0 : (var17 < 0.0F ? -1 : 1);

            if (var11 < 0) {
               return;
            }

            var9 = (AccessorClientPlayerInteractionManager)chi.field_1761;
         }

         var9.setCurrentBreakingProgress(1.0F);
         return;
      }

      label162: {
         boolean var13 = chi.field_1761.method_2923();
         if (var13) {
            aal = a.gay.dnp().floatValue();
            a.dii = true;
            return;
         }

         var14 = a;

         var13 = a.dii;

         if (!var13) {
            return;
         }

         aal = 1.0F;
         var14 = a;
      }

      var14.dii = false;
   }

}
