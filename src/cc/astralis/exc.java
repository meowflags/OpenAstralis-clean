package cc.astralis;

import com.google.gson.annotations.Expose;
import com.google.gson.annotations.SerializedName;


import java.lang.invoke.MethodHandles;


public class exc {
   @Expose
   @SerializedName("items")
   private bac[] ejy;
   private static final long a = 69840807849739L;


   private boolean dnv() {
      long a = exc.a ^ 14959521927782L;
      boolean ax = false;
      int[] var10000 = ClientSetup.abu();
      boolean axx = false;
      bac[] var6 = a.ejy;
      int var7 = var6.length;
      int[] axxx = var10000;
      int var8 = 0;

      while (true) {
         if (var8 < var7) {
            bac axxxx = var6[var8];
            var10 = axxxx.gpl.equals("product_minecraft");

            label70: {
               if (var10) {
                  ax = true;
                  break label70;
               }

               var10 = axxxx.gpl.equals("game_minecraft");

               if (!var10) {
                  break label70;
               }

               var10 = true;

               axx = var10;
            }

            var8++;
            continue;
         }

         var10 = ax;
         break;
      }

      if (!var10) {
         return false;
      }

      var10 = axx;

      return axxx == null ? var10 : var10;
   }

}
