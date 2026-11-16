package cc.astralis;


import java.lang.invoke.MethodHandles;


import net.minecraft.class_1309;

public class LongJump extends guu {
   private final bes ecb;
   private final gbp eiq;
   private double drl;
   private static final long a = 133520696927792L;


   public LongJump() {
      long a = LongJump.a ^ 48180071409599L;
      super(bfm.MOVEMENT);
      a.ecb = new bes("Range", 0.6F, 0.0F, 5.0F, 0.1F);
      a.eiq = new gbp("Only with Space", false);
      a.bfi(new ffn[]{a.ecb, a.eiq});
   }

   @gdz(4)
   public void ege(dfa event) {
      long ax = LongJump.a ^ 121636383184461L;
      int[] var10000 = ClientSetup.abu();
      a.efe(String.valueOf(a.ecb.dnp().floatValue()));
      int[] axx = var10000;
      class_1309 axxx = ClientSetup.gqy().aws().diy(KillAura.class).gvw;
      var24 = ClientSetup.gqy().aws().diy(Speed.class).dsv();
      label75:
      if (!var24) {
         var24 = ClientSetup.gqy().aws().diy(ElytraFly.class).dsv();

         if (!var24) {
            var24 = ClientSetup.gqy().aws().diy(bni.class).dsv();

            if (!var24) {
               return;
            }
         }
      }

      var24 = chi.field_1724.method_6057(axxx);

      label80: {
         if (!var24) {
            return;
         }

         var10000 = (int[])a;

         var24 = a.eiq.dnp();

         if (var24 && !chi.field_1690.field_1903.method_1434()) {
            return;
         }

         var10000 = (int[])ClientSetup.gqy().aws().diy(KillAura.class);
      }

      class_1309 axxxx = ((KillAura)var10000).gvw;
      a.drl++;
      double axxxxx = a.ecb.dnp().floatValue() * Math.cos(a.drl);
      double axxxxxx = a.ecb.dnp().floatValue() * Math.sin(a.drl);
      double axxxxxxx = axxxx.method_73189().method_10216() + axxxxx - chi.field_1724.method_23317();
      double axxxxxxxx = axxxx.method_73189().method_10215() + axxxxxx - chi.field_1724.method_23321();
      double axxxxxxxxx = Math.sqrt(axxxxxxx * axxxxxxx + axxxxxxxx * axxxxxxxx);
      double var26 = axxxxxxxxx;
      double var10001 = 0.01;
      if (!(axxxxxxxxx > 0.01)) {
         return;
      }

      axxxxxxx /= axxxxxxxxx;
      var26 = axxxxxxxx;
      var10001 = axxxxxxxxx;

      axxxxxxxx = var26 / var10001;
      double axxxxxxxxxx = Math.toRadians(-chi.field_1724.method_36454());
      double axxxxxxxxxxx = axxxxxxx * Math.cos(axxxxxxxxxx) - axxxxxxxx * Math.sin(axxxxxxxxxx);
      double axxxxxxxxxxxx = axxxxxxx * Math.sin(axxxxxxxxxx) + axxxxxxxx * Math.cos(axxxxxxxxxx);
      a.brl((float)axxxxxxxxxxx);
      a.avm((float)axxxxxxxxxxxx);
   }

   @gdz
   public void dba(bsm event) {
      long ax = LongJump.a ^ 39193386835517L;
      int[] var10000 = ClientSetup.abu();
      class_1309 axx = ClientSetup.gqy().aws().diy(KillAura.class).gvw;
      int[] axxx = var10000;

      bqf.aag(a.bus(), axx, a.ecb.dnp().floatValue());
   }

}
