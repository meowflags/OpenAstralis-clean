package cc.astralis;


import java.lang.invoke.MethodHandles;


import net.minecraft.class_259;

public class AirWalk extends hcr {
   private final gbp ebk;
   private static final long a = 24916090908697L;


   public AirWalk(guu parentClass) {
      long ax = AirWalk.a ^ 29483936448830L;
      super(a, "Air Walk");
      a.ebk = new gbp("Spoof Ground", false);
      a.ebu(a.ebk);
   }

   @gdz
   public void AutoBlockMode(eih event) {
      long ax = AirWalk.a ^ 34466420767420L;
      if (a.ebk.dnp()) {
         a.dad(true);
      }
   }

   @gdz
   public void cmc(haj event) {
      long ax = AirWalk.a ^ 107588598790728L;
      int[] var4 = ClientSetup.abu();
      haj var10000 = a;
      if (a.dqu().method_10264() >= chi.field_1724.method_31478()) {
         return;
      }

      var10000 = a;

      var10000.cow(class_259.method_1077());
   }

}
