package cc.astralis;


import java.lang.invoke.MethodHandles;


import net.minecraft.class_1268;
import net.minecraft.class_2350;
import net.minecraft.class_243;
import net.minecraft.class_2596;
import net.minecraft.class_2743;
import net.minecraft.class_2885;
import net.minecraft.class_3965;
import net.minecraft.class_746;
import net.minecraft.class_2350.class_2351;

public class Grim2 extends hcr {
   private final bes cxn;
   private int gup;
   private class_243 dfh;
   private static final long a = 138036468491799L;

   private static final String[] e;

   public Grim2(guu parentClass) {
      long ax = Grim2.a ^ 132709139024888L;
      super(a, "Grim");
      a.cxn = new bes("Grim Value", 3.0F, 1.0F, 10.0F, 1.0F);
      a.ebu(a.cxn);
   }

   @gdz
   public void crx(elx event) {
      long ax = Grim2.a ^ 13112155185429L;
      int[] var4 = ClientSetup.abu();
      Grim2 var10000 = a;
      if (a.gup <= 0) {
         return;
      }

      a.gmm(true);
      var10000 = a;

      var10000.gup--;
   }

   @gdz
   public void ebe(dgp event) {
      long ax = Grim2.a ^ 78648039571892L;
      int[] var4 = ClientSetup.abu();
      if (a.cud() == gpy.PRE) {
         Grim2 var10000 = a;
         if (a.gup > 0) {
            a.gmm(true);
            var10000 = a;
            if (a.dfh != null) {
               return;
            }

            var10000 = a;

            var10000.dfh = cqc();
            return;
         }

         var10000 = a;

         class_243 var6 = var10000.dfh;
         if (var10000.dfh == null) {
            return;
         }

         var6 = a.dfh;

         fjt(var6);
         a.dfh = null;
      }
   }

   @gdz
   public void cjr(fnt event) {
      long ax = Grim2.a ^ 74207288872295L;
      if (a.gup > 0) {
         gix.eex(
            new class_2885(
               class_1268.field_5808,
               new class_3965(
                  chi.field_1724.method_73189().method_38499(class_2351.field_11052, chi.field_1724.method_31478()),
                  class_2350.field_11036,
                  chi.field_1724.method_24515().method_10074(),
                  false
               ),
               0
            )
         );
      }
   }

   @gdz
   public void gmi(amo e) {
      long ax = Grim2.a ^ 1666057820819L;
      int[] var10000 = ClientSetup.abu();
      class_2596 var6 = a.bed();
      int[] axx = var10000;
      class_2596 var7 = var6;
      if (!(var6 instanceof class_2743)) {
         return;
      }

      var7 = var6;

      class_2743 axxx = (class_2743)var7;
      if (axxx.method_11818() != chi.field_1724.method_5628()) {
         return;
      }

      a.gmm(true);

      a.gup = a.cxn.dnp().intValue();
   }

   private static class_243 cqc() {
      int[] var2 = ClientSetup.abu();
      class_746 var10000 = chi.field_1724;
      if (chi.field_1724 == null) {
         return class_243.field_1353;
      }

      var10000 = chi.field_1724;

      return var10000.method_18798();
   }

   private static void fjt(class_243 a) {
      long ax = Grim2.a ^ 35921731276761L;
      int[] var3 = ClientSetup.abu();
      class_746 var10000 = chi.field_1724;
      if (chi.field_1724 == null) {
         return;
      }

      var10000 = chi.field_1724;

      var10000.method_18799(a);
   }

   static {
      e = new String[]{null, null};
   }

}
