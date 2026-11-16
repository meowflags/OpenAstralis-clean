package cc.astralis;


import net.minecraft.class_1657;

public class csy extends fwu {
   private static final long a = 103844079311154L;
   private static final String f;
   private static final long g;

   public csy() {
      long a = csy.a ^ 3713894518144L;
      super(f);
   }

   @Override
   public void ayy(eih event) {
      int[] var10000 = ClientSetup.abu();
      class_1657 axx = a.bv().fyt;
      int[] axxx = var10000;
      if (axx != null) {
         label35: {
            int var6 = a.bv().hjp;
            if (var6 < (int)g) {
               return;
            }

            var7 = a;

            double var8;
            var6 = (var8 = a.bv().fhs - 0.23) == 0.0 ? 0 : (var8 < 0.0 ? -1 : 1);

            if (var6 < 0) {
               return;
            }

            var7 = a;
         }

         var7.grm();
      }
   }

   static {
      f = "No Slow";
      g = -6876738898597249013L;
   }

}
