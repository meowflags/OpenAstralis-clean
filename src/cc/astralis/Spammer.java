package cc.astralis;


import java.lang.invoke.MethodHandles;


import net.minecraft.class_310;

public class Spammer extends guu {
   private final gbp czg;
   private final bes fmm;
   private final cbm czu;
   private static final long a = 36855071418622L;


   public Spammer() {
      long a = Spammer.a ^ 111514077699263L;
      super(bfm.PLAYER);
      a.czg = new gbp("Flush Automatically", true);
      a.fmm = (bes)new bes("Flush Interval (ms)", 500.0F, 100.0F, 2000.0F, 50.0F).bih(a.czg::dnp);
      a.czu = new cbm();
      a.bfi(new ffn[]{a.czg, a.fmm});
   }

   @gdz
   public void doj(fnt event) {
      int[] axx = ClientSetup.abu();
      class_310 var10000 = chi;
      if (chi.field_1724 == null) {
         return;
      }

      var10000 = chi;

      if (var10000.field_1687 != null) {
         boolean var6 = ClientSetup.gqy().ccv().gne(BlinkController.class).bsw();
         if (!var6) {
            return;
         }

         var6 = a.czg.dnp();

         if (!var6) {
            return;
         }

         var6 = a.czu.fsc(a.fmm.dnp().longValue());

         if (var6) {
            BlinkController axxx = ClientSetup.gqy().ccv().gne(BlinkController.class);
            axxx.fxn();
            axxx.ckv();
            a.czu.glr();
         }
      }
   }

   @Override
   public void auj() {
      a.czu.glr();
      ClientSetup.gqy().ccv().gne(BlinkController.class).ckv();
      super.auj();
   }

   @Override
   public void frg() {
      ClientSetup.gqy().ccv().gne(BlinkController.class).fxn();
      super.frg();
   }

}
