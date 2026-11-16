package cc.astralis;

import imgui.type.ImFloat;


import java.lang.invoke.MethodHandles;


public class Vulcan2 extends hcr {
   private final bes ffd;
   private int dwb;
   private static final long a = 3239485686900L;


   public Vulcan2(guu parentClass) {
      long ax = Vulcan2.a ^ 55474295404597L;
      super(a, "Vulcan");
      a.ffd = new bes("Motion", 10.0F, 0.0F, 10.0F, 1.0F);
      a.ebu(a.ffd);
   }

   @Override
   public void cbw() {
      bav.fym(chi.field_1724.method_18798().method_10214());
      super.cbw();
   }

   @gdz
   public void ezq(eih event) {
      long ax = Vulcan2.a ^ 134976721231560L;
      int[] var4 = ClientSetup.abu();
      int var10000 = chi.field_1724.method_24828();
      if (var10000 != 0) {
         a.dwb = 0;
      }

      double var6;
      var10000 = (var6 = chi.field_1724.field_6017 - chi.field_1724.method_18798().field_1351 - 3.0) == 0.0 ? 0 : (var6 < 0.0 ? -1 : 1);

      if (var10000 <= 0) {
         return;
      }

      var10000 = ((fhd)ClientSetup.gqy().aws().diy(fhd.class)).dsv();

      if (var10000 != 0) {
         return;
      }

      a.dwb++;
      var10000 = a.dwb;

      label65: {
         byte var10001 = 1;
         if (var10000 > 1) {
            a.dad(true);
         }

         var5 = a;

         var10000 = a.dwb;
         var10001 = 2;

         if (var10000 <= var10001) {
            return;
         }

         var5 = a.ffd.dnp();
      }

      bav.fym(-((ImFloat)var5).floatValue());
   }

}
