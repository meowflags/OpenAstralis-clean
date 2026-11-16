package cc.astralis;

import imgui.type.ImFloat;


import java.lang.invoke.MethodHandles;


public class Vanilla extends hcr {
   private final bes dhj;
   private static final long a = 42057011972117L;


   public Vanilla(guu parentClass) {
      long ax = Vanilla.a ^ 82106530215101L;
      super(a, "Vanilla");
      a.dhj = new bes("Speed", 1.0F, 0.0F, 10.0F, 0.1F);
      a.ebu(a.dhj);
   }

   @gdz
   public void cao(eih event) {
      double var6;
      label29: {
         label31: {
            long ax = Vanilla.a ^ 22810712218456L;
            int[] var4 = ClientSetup.abu();
            boolean var10000 = chi.field_1690.field_1903.method_1434();
            if (var10000) {
               var6 = a.dhj.dnp().floatValue() * 0.6;
               break label29;
            }

            var5 = chi.field_1690.field_1832;

            var10000 = chi.field_1690.field_1832.method_1434();

            if (!var10000) {
               var6 = 0.0;
               break label29;
            }

            var5 = a.dhj.dnp();
         }

         var6 = -((ImFloat)var5).floatValue() * 0.6;
      }

      bav.fym(var6);
      evd.dek(a.dhj.dnp().floatValue());
   }

}
