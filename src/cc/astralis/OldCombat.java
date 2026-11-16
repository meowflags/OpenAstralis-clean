package cc.astralis;


import java.lang.invoke.MethodHandles;


public class OldCombat extends guu {
   public final gbp dpg;
   public final gbp gav;
   public final gbp ccp;
   public final gbp dzj;
   public final gbp czi;
   private static final long a = 115885606831329L;


   public OldCombat() {
      long a = OldCombat.a ^ 19765308796088L;
      super(bfm.COMBAT);
      a.dpg = new gbp("Removes Attack Cooldown", true);
      a.gav = new gbp("Removes your attack on miss", true);
      a.ccp = new gbp("Weapon Only", true);
      a.dzj = new gbp("Allow Block Hit", false);
      a.czi = new gbp("Allow Air Hit", false);
      a.bfi(new ffn[]{a.dpg, a.gav, a.ccp, a.dzj, a.czi});
   }

}
