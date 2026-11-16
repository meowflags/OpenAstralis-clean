package cc.astralis;

import imgui.type.ImFloat;


import java.lang.invoke.MethodHandles;


import net.minecraft.class_1309;
import net.minecraft.class_746;

public class Criticals extends guu {
   private final adu dzu;
   private final bes evg;
   private double egn;
   private int hjl;
   private static final long a = 64724251734711L;


   public Criticals() {
      long a = Criticals.a ^ 80977404320595L;
      super(bfm.COMBAT);
      String[] var6 = new String[3];
      var6[0] = "Watchdog 2";
      var6[1] = "Legit";
      var6[2] = "Vanilla";
      a.dzu = new adu("Mode", "Watchdog 2", var6);
      a.evg = new bes("Critical On Ticks", 3.0F, 1.0F, 10.0F, 1.0F);
      a.egn = 0.0;
      a.hjl = 0;
      a.bfi(new ffn[]{a.dzu, a.evg.bih(() -> {
         long ax = Criticals.a ^ 31193653851423L;
         return a.dzu.emb("Watchdog 2");
      })});
   }

   @gdz
   public void acq(eih event) {
      int[] ax;
      KillAura axx;
      int var9;
      a.efe(a.dzu.dnp());
      axx = ClientSetup.gqy().aws().diy(KillAura.class);
      int[] var10000 = ClientSetup.abu();
      a.bvc();
      ax = var10000;
      String var6 = a.dzu.dnp();
      byte var7 = -1;
      var9 = var6.hashCode();
      label121:
      if (ax != null) {
         switch (var9) {
            case 73298841:
               var9 = var6.equals("Legit");
               if (ax == null) {
                  break label121;
               }

               if (var9 == 0) {
                  break;
               }

               var7 = 0;
               if (ax != null) {
                  break;
               }
            case 1898048255:
               var9 = var6.equals("Watchdog 2");
               if (ax == null) {
                  break label121;
               }

               if (var9 != 0) {
                  var7 = 1;
               }
         }

         var9 = var7;
      }

      label126: {
         label127: {
            if (ax != null) {
               switch (var9) {
                  case 0:
                     var10 = axx;
                     if (ax == null) {
                        break label127;
                     }

                     var9 = axx.dsv();
                     break;
                  case 1:
                     break label126;
                  default:
                     return;
               }
            }

            if (var9 == 0) {
               return;
            }

            var10 = axx;
         }

         if (var10.gvw == null) {
            return;
         }

         class_746 var11 = chi.field_1724;
         if (ax != null) {
            if (!chi.field_1724.method_24828()) {
               return;
            }

            var11 = chi.field_1724;
         }

         var11.method_6043();
         if (ax != null) {
            return;
         }
      }

      KillAura var12 = axx;
      if (ax != null) {
         if (!axx.dsv()) {
            return;
         }

         var12 = axx;
      }

      Object var13 = var12.gvw;
      if (ax != null) {
         if (var12.gvw == null) {
            return;
         }

         var13 = a.evg.dnp();
      }

      int axxxx = ((ImFloat)var13).intValue();
      a.hjl = (a.hjl + 1) % (axxxx + 1);
      var9 = a.hjl;
      if (ax != null) {
         if (a.hjl >= axxxx) {
            return;
         }

         double var17;
         var9 = (var17 = bav.hai() - a.egn) == 0.0 ? 0 : (var17 < 0.0 ? -1 : 1);
      }

      if (var9 == 0) {
         a.dad(false);
      }

      a.egn = bav.hai();
   }

   private void bvc() {
      long a = Criticals.a ^ 194095783829L;
      int[] var10000 = ClientSetup.abu();
      class_1309 ax = ClientSetup.gqy().aws().diy(KillAura.class).gvw;
      int[] axx = var10000;
      if (ax != null) {
         class_746 var5 = chi.field_1724;
         if (!chi.field_1724.field_6252) {
            return;
         }

         var5 = chi.field_1724;

         var5.method_7277(ax);
      }
   }

}
