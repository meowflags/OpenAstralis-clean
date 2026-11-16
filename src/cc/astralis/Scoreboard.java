package cc.astralis;

import java.awt.Color;


import java.lang.invoke.MethodHandles;


public class Scoreboard extends guu {
   public final gbp hex;
   public final gbp grq;
   public final gbp fkl;
   public final acn bpn;
   public final acn bxw;
   public final acn ghl;
   private czo aev;
   private static final long a = 116879302526307L;


   private static final long p;

   public Scoreboard() {
      long a = Scoreboard.a ^ 109933033485574L;
      super(bfm.VISUAL);
      a.hex = new gbp("No Score Board", false);
      a.grq = new gbp("No Score", true);
      a.fkl = new gbp("Change Color", false);
      a.bpn = (acn)new acn("Head Color", Color.white).bih(a.fkl::dnp);
      a.bxw = (acn)new acn("Body Color", Color.white).bih(a.fkl::dnp);
      a.ghl = (acn)new acn("Score Color", Color.red).bih(a.fkl::dnp);
      ffn[] var10001 = new ffn[(int)p];
      var10001[0] = a.hex;
      var10001[1] = a.grq;
      var10001[2] = a.fkl;
      var10001[3] = a.bpn;
      var10001[4] = a.bxw;
      var10001[5] = a.ghl;
      a.bfi(var10001);
   }

   @gdz
   public void dgc(eel event) {
      if (a.aev != null) {
         ;
      }
   }

   public void beb(czo bounds) {
      a.aev = a;
   }

   static {
      p = -3863199087046164474L;
   }

}
