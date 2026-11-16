package cc.astralis;


import java.lang.invoke.MethodHandles;


import net.minecraft.class_2828.class_5911;

public class Watchdog3 extends hcr {
   private final gbp hdp;
   private int aag;
   private static final long a = 16415869563205L;


   private static final long g;

   public Watchdog3(guu parentClass) {
      long ax = Watchdog3.a ^ 46537812667857L;
      super(a, "Watchdog");
      a.hdp = new gbp("Timer", false);
      a.ebu(a.hdp);
   }

   @gdz
   public void ajb(eih event) {
      int[] var4;
      label65: {
         label64: {
            long ax = Watchdog3.a ^ 46768785402592L;
            var4 = ClientSetup.abu();
            if (var4 != null) {
               if (!bav.bfi()) {
                  break label64;
               }

               a.aag++;
            }

            if (var4 != null) {
               break label65;
            }
         }

         a.aag = 0;
      }

      int var10000;
      double var5;
      var10000 = (var5 = chi.field_1724.field_6017 - chi.field_1724.method_18798().field_1351 - 3.0) == 0.0 ? 0 : (var5 < 0.0 ? -1 : 1);
      label55:
      if (var4 != null) {
         if (var10000 > 0) {
            var10000 = chi.field_1724.method_31549().field_7478;
            if (var4 == null) {
               break label55;
            }

            if (var10000 == 0) {
               var10000 = a.aag;
               if (var4 == null) {
                  break label55;
               }

               if (a.aag < (int)g) {
                  if (a.hdp.dnp()) {
                     aal = 0.5F;
                  }

                  gix.dsd(new class_5911(true, false));
                  chi.field_1724.field_6017 = 0.0;
                  if (var4 != null) {
                     return;
                  }
               }
            }
         }

         var10000 = a.hdp.dnp();
      }

      if (var10000 != 0) {
         aal = 1.0F;
      }
   }

   static {
      g = 1287715544203526164L;
   }

}
