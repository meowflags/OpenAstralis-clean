package cc.astralis;

import java.util.concurrent.ThreadLocalRandom;

public class crg implements dlc {
   private static final long a = 8789110281146L;

   public static float gj(float min, float max) {
      int[] var4 = ClientSetup.abu();
      float var10000 = a;
      if (a == 0.0F) {

         if (a == 0.0F) {
            return 0.0F;
         }
      }

      var10000 = ThreadLocalRandom.current().nextFloat(a, a + 1.0F);

      return var10000;
   }
}
