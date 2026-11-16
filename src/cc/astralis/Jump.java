package cc.astralis;


import java.lang.invoke.MethodHandles;


public class Jump extends hcr {
   private final bes dnc;
   private static final long a = 16676015915699L;


   private static final long g;

   public Jump(guu parent) {
      long ax = Jump.a ^ 10583851485511L;
      super(a, "Jump");
      a.dnc = new bes("Delay", 100.0F, 0.0F, 100.0F, 1.0F);
      a.ebu(a.dnc);
   }

   @gdz
   public void enn(etk event) {
      long ax = Jump.a ^ 106137395875918L;
      int[] var4 = ClientSetup.abu();
      int var10000 = chi.field_1724.field_6235;
      if (chi.field_1724.field_6235 <= 0) {
         return;
      }

      double var6;
      var10000 = (var6 = Math.random() * 100.0 - a.dnc.dnp().intValue()) == 0.0 ? 0 : (var6 < 0.0 ? -1 : 1);

      boolean var10001;
      label42: {
         if (var10000 >= 0) {
            return;
         }

         var5 = a;
         var10001 = true;

         a.bxg = true;
         var10000 = chi.field_1724.field_6235;

         if (var10000 != (int)g) {
            return;
         }

         var5 = a;
         var10001 = true;
      }

      var5.eeq = var10001;
   }

   static {
      g = 7327344305830363145L;
   }

}
