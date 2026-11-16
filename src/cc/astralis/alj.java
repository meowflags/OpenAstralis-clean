package cc.astralis;

import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_2708;

public class alj extends cec {
   private final cbm dyi = new cbm();
   private boolean ag;
   private static final long a = 99077465604788L;
   private static final long c;

   @gdz
   public void als(amo event) {
      long ax = alj.a ^ 120591131727489L;
      int[] var4 = ClientSetup.abu();
      if (a.cud() != gpy.SEND) {
         boolean var10000 = ((eky)ClientSetup.gqy().aws().diy(eky.class)).dsv();
         if (!var10000) {
            return;
         }

         var10000 = a.bed() instanceof class_2708;

         if (var10000) {
            ((eky)ClientSetup.gqy().aws().diy(eky.class)).gxo();
            a.ag = true;
            a.dyi.glr();
         }
      }
   }

   @gdz
   public void dnn(fxx event) {
      alj var5;
      label29: {
         long ax = alj.a ^ 103351134297335L;
         int[] var4 = ClientSetup.abu();
         boolean var10000 = a.ag;
         if (!a.ag) {
            return;
         }

         var5 = a;

         var10000 = a.dyi.fsc(c);

         if (!var10000) {
            return;
         }

         var5 = a;
      }

      var5.ag = false;
   }

   @gdz
   public void feq(ctt event) {
   }

}
