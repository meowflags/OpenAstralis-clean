package cc.astralis;

import java.awt.Color;


import java.lang.invoke.MethodHandles;


import java.util.ArrayList;

import java.util.List;


public class frf extends fig {
   private final cyx dmp;
   private static final long a = 84070762282225L;


   public frf(cyx classModeProperty) {
      a.dmp = a;
      a.dtq(a);
      a.hh(130.0F);
      a.cje(15.0F);
   }

   @Override
   public void bfi(float mouseX, float mouseY) {
      long ax;
      String var10;
      label16: {
         ax = frf.a ^ 52700898939586L;
         int[] var10000 = ClientSetup.abu();
         hcr axx = a.dmp.dnp();
         int[] axxx = var10000;
         hcr var9 = axx;
         if (axx == null) {
            var10 = "None";
            break label16;
         }

         var9 = axx;

         var10 = var9.akm();
      }

      String axx = var10;
      var10 = a.dmp.fah();
      String axxx = var10 + ": " + axx;
      ety.ebb(axxx, a.hjg() + 4.0F, a.dtt() + 3.0F, Color.WHITE);
   }

   @Override
   public void apy(double mouseX, double mouseY, int button) {
      long ax;
      int[] axx;
      hcr axxx;
      String var17;
      label31: {
         ax = frf.a ^ 98653601920566L;
         int[] var10000 = ClientSetup.abu();
         axxx = a.dmp.dnp();
         axx = var10000;
         hcr var16 = axxx;
         if (axx != null) {

            var16 = axxx;
         }

         var17 = var16.akm();
      }

      String axxxx = var17;
      var17 = a.dmp.fah();
      String axxxxx = var17 + ": " + axxxx;
      if (fuv.bfm(a, a, a.hjg() + 4.0F, a.dtt() + 2.0F, ety.eq(axxxxx), ety.biu(axxxxx))) {
         List<hcr> axxxxxx = new ArrayList<>(a.dmp.ajs().values());
         int axxxxxxx = axxxxxx.indexOf(axxx);
         int axxxxxxxx = (axxxxxxx + 1) % axxxxxx.size();
         hcr axxxxxxxxx = axxxxxx.get(axxxxxxxx);
         hcr var20 = axxx;
         if (axx != null) {
            axxx.frr(false);

            var20 = axxxxxxxxx;
         }

         var20.frr(true);
         a.dmp.biz(axxxxxxxxx);
      }
   }

}
