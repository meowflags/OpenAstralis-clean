package cc.astralis;


import java.lang.invoke.MethodHandles;


import net.minecraft.class_2708;

public class avy extends guu {
   private final adu dpp;
   private static final long a = 77402320457268L;


   public avy() {
      long a = avy.a ^ 18020828179469L;
      super(bfm.PLAYER);
      String[] var4 = new String[2];
      var4[0] = "Cancel";
      var4[1] = "Adjust";
      a.dpp = new adu("Mode", "Cancel", var4);
      a.bfi(new ffn[]{a.dpp});
   }

   @gdz
   public void aza(fxx event) {
      a.efe(a.dpp.dnp());
   }

   @gdz
   public void bhc(amo event) {
      int[] axx = ClientSetup.abu();
      amo var10000 = a;
      if (a.cud() != gpy.RECEIVE) {
         return;
      }

      var10000 = a;

      Object var7 = var10000.bed();
      if (!(var7 instanceof class_2708)) {
         return;
      }

      var7 = a.dpp.dnp();

      String var5 = (String)var7;
      byte var6 = -1;
      var8 = var5.hashCode();
      label45:
      switch (var8) {
         case 2011110042:
            var8 = var5.equals("Cancel");

            if (var8 == 0) {
               break;
            }

            var6 = 0;
            break;
         case 1956520879:
            var8 = var5.equals("Adjust");

            if (var8 != 0) {
               var6 = 1;
            }
      }

      var8 = var6;

      switch (var8) {
         case 0:
            a.gmm(true);
         case 1:
      }
   }

}
