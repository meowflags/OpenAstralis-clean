package cc.astralis;

import imgui.type.ImFloat;


import java.lang.invoke.MethodHandles;


public class Fly extends guu {
   private final adu ata;
   private final bes dik;
   private final bes gas;
   private final bes asq;
   private static final long a = 129433976883677L;


   public Fly() {
      long a = Fly.a ^ 100848309671885L;
      super(bfm.PLAYER);
      String[] var10 = new String[2];
      var10[0] = "Normal";
      var10[1] = "Custom";
      a.ata = new adu("Mode", "Custom", var10);
      a.dik = (bes)new bes("Timer", 1.0F, 0.0F, 10.0F, 0.1F).bih(() -> {
         long ax = Fly.a ^ 18332299192978L;
         return a.ata.emb("Normal");
      });
      a.gas = (bes)new bes("Ground Timer", 1.0F, 0.0F, 10.0F, 0.1F).bih(() -> {
         long ax = Fly.a ^ 42340444702608L;
         return a.ata.emb("Custom");
      });
      a.asq = (bes)new bes("Air Timer", 1.0F, 0.0F, 10.0F, 0.1F).bih(() -> {
         long ax = Fly.a ^ 20627071595557L;
         return a.ata.emb("Custom");
      });
      a.bfi(new ffn[]{a.ata, a.dik, a.gas, a.asq});
   }

   @Override
   public void frg() {
      cdr.aal = 1.0F;
      super.frg();
   }

   @gdz
   public void arr(fxx event) {
      int[] ax;
      int var7;
      int[] var10000 = ClientSetup.abu();
      String var5 = a.ata.dnp();
      byte var6 = -1;
      ax = var10000;
      var7 = var5.hashCode();
      label63:
      if (ax != null) {
         switch (var7) {
            case -1955878649:
               var7 = var5.equals("Normal");
               if (ax == null) {
                  break label63;
               }

               if (var7 == 0) {
                  break;
               }

               var6 = 0;
               if (ax != null) {
                  break;
               }
            case 2029746065:
               var7 = var5.equals("Custom");
               if (ax == null) {
                  break label63;
               }

               if (var7 != 0) {
                  var6 = 1;
               }
         }

         var7 = var6;
      }

      switch (var7) {
         case 0:
            cdr.aal = a.dik.dnp().floatValue();
            if (ax != null) {
               break;
            }
         case 1:
            Object var8 = chi.field_1724;
            if (ax != null) {
               if (chi.field_1724.method_24828()) {
                  cdr.aal = a.gas.dnp().floatValue();
                  if (ax != null) {
                     return;
                  }
               }

               var8 = a.asq.dnp();
            }

            cdr.aal = ((ImFloat)var8).floatValue();
      }
   }

}
