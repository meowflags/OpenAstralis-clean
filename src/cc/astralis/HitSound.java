package cc.astralis;

import astralis.mixin.accessor.IdentifierAccessor;


import java.lang.invoke.MethodHandles;


import net.minecraft.class_1109;
import net.minecraft.class_1113;
import net.minecraft.class_2960;
import net.minecraft.class_310;
import net.minecraft.class_3414;
import net.minecraft.class_7923;

public class HitSound extends guu {
   private final adu bjz;
   private static final long a = 45272832844673L;


   public HitSound() {
      long a = HitSound.a ^ 72392632810428L;
      super(bfm.VISUAL);
      String[] var4 = new String[3];
      var4[0] = "Skeet";
      var4[1] = "Never Lose";
      var4[2] = "Dark loves them";
      a.bjz = new adu("Hit Sound", "Skeet", var4);
      a.beb(a.bjz);
   }

   @gdz
   public void ana(eov event) {
      long ax = HitSound.a ^ 1574698828899L;
      int[] var10000 = ClientSetup.abu();
      class_3414 axx = (class_3414)class_7923.field_41172.method_63535(a.bqv());
      int[] axxx = var10000;
      class_3414 var7 = axx;
      if (axx == null) {
         System.out.println("Sound Event is null.");
         return;
      }

      var7 = axx;

      class_1113 axxxx = class_1109.method_4757(var7, 1.0F, 1.0F);
      class_310.method_1551().method_1483().method_4873(axxxx);
   }

   public class_2960 bqv() {
      long a;
      int var6;
      a = HitSound.a ^ 14397752065821L;
      int[] var10000 = ClientSetup.abu();
      String var4 = a.bjz.dnp();
      int[] ax = var10000;
      byte var5 = -1;
      var6 = var4.hashCode();
      label59:
      switch (var6) {
         case 79940188:
            var6 = var4.equals("Skeet");

            if (var6 == 0) {
               break;
            }

            var5 = 0;
            break;
         case 1919939689:
            var6 = var4.equals("Never Lose");

            if (var6 == 0) {
               break;
            }

            var5 = 1;
            break;
         case 1560244837:
            var6 = var4.equals("Dark loves them");

            if (var6 != 0) {
               var5 = 2;
            }
      }

      var6 = var5;

      class_2960 var8;
      switch (var6) {
         case 0:
            var8 = IdentifierAccessor.createIdentifier("astralis", "effects.skeet");
            break;
         case 1:
            var8 = IdentifierAccessor.createIdentifier("astralis", "effects.neverlose");
            break;
         case 2:
            var8 = IdentifierAccessor.createIdentifier("astralis", "effects.dark");
            break;
         default:
            String var21 = a.bjz.dnp();
            throw new IllegalStateException("Unexpected value: " + var21);
      }

      return var8;
   }

}
