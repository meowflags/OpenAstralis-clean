package cc.astralis;


import java.lang.invoke.MethodHandles;


public class Reach extends guu {
   public final bes gdv;
   public final gbp dnp;
   public final bes ffi;
   private static final long a = 64769754323032L;


   public Reach() {
      long a = Reach.a ^ 125458427721467L;
      super(bfm.COMBAT);
      a.gdv = new bes("Reach", 3.0F, 3.0F, 6.0F, 0.05F);
      a.dnp = new gbp("Modify Block Reach", false);
      a.ffi = (bes)new bes("Block Reach", 3.0F, 3.0F, 6.0F, 0.05F).bih(() -> a.dnp.dnp());
      a.bfi(new ffn[]{a.gdv, a.dnp, a.ffi});
   }

   @gdz
   public void dz(fxx e) {
      a.efe(a.gdv.dnp().toString());
   }

}
