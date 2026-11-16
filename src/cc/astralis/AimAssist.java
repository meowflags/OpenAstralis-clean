package cc.astralis;


import java.lang.invoke.MethodHandles;


import java.util.ArrayList;
import java.util.Comparator;

import java.util.List;

import java.util.stream.Collectors;


import net.minecraft.class_1268;
import net.minecraft.class_1674;
import net.minecraft.class_238;

public class AimAssist extends guu {
   private final bes fsn;
   private final gbp fmo;
   private final bes cts;
   private final bes gsl;
   private final bes ceb;
   public class_1674 bvh;
   public List<class_1674> gif;
   private final cbm cuf;
   private static final long a = 44590357192287L;


   public AimAssist() {
      long a = AimAssist.a ^ 106561042914098L;
      super(bfm.COMBAT);
      a.fsn = new bes("Range", 5.0F, 1.0F, 6.0F, 0.1F);
      a.fmo = new gbp("1.8 Swing Order", false);
      a.cts = new bes("Hit Cool Down", 200.0F, 0.0F, 1000.0F, 1.0F);
      a.gsl = new bes("Min Rotation Speed", 100.0F, 0.0F, 180.0F, 1.0F);
      a.ceb = new bes("Max Rotation Speed", 100.0F, 0.0F, 180.0F, 1.0F);
      a.gif = new ArrayList<>();
      a.cuf = new cbm();
      a.bfi(new ffn[]{a.fsn, a.fmo, a.cts, a.gsl, a.ceb});
   }

   @gdz
   public void dpl(fxx event) {
      long ax = AimAssist.a ^ 42189072159581L;
      a.efe(a.fsn.dnp().toString());
      int[] var10000 = ClientSetup.abu();
      a.gif = chi.field_1687
         .method_8390(class_1674.class, new class_238(chi.field_1724.method_24515()).method_1014(a.fsn.dnp().floatValue()), axx -> true)
         .stream()
         .filter(axx -> {
            long ax = AimAssist.a ^ 134402361620836L;
            return axx.method_24921() != chi.field_1724;
         })
         .sorted(Comparator.comparingDouble(axx -> chi.field_1724.method_5739(axx)))
         .collect(Collectors.toList());
      int[] axx = var10000;
      List var7 = a.gif;
      if (a.gif.isEmpty()) {
         a.bvh = null;
      }

      var7 = a.gif;

      for (class_1674 axxx : var7) {
         label75: {
            float var10;
            int var8 = (var10 = chi.field_1724.method_5739(axxx) - a.fsn.dnp().floatValue()) == 0.0F ? 0 : (var10 < 0.0F ? -1 : 1);
            if (var8 > 0) {
               break label75;
            }

            var8 = a.cuf.fsc(a.cts.dnp().longValue());

            if (var8 == 0) {
               break label75;
            }

            a.bvh = axxx;
            dqq.cms(dgq.dxs(a.bvh), a.gsl.dnp().floatValue(), a.ceb.dnp().floatValue());
            var8 = a.fmo.dnp();

            label76: {
               if (var8 != 0) {
                  chi.field_1724.method_6104(class_1268.field_5808);
               }

               chi.field_1761.method_2918(chi.field_1724, a.bvh);
               var9 = a;

               var8 = a.fmo.dnp();

               if (var8 == 0) {
                  chi.field_1724.method_6104(class_1268.field_5808);
               }

               var9 = a;
            }

            var9.cuf.glr();
         }

      }
   }

}
