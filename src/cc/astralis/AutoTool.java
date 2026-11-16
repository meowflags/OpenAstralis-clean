package cc.astralis;

import astralis.mixin.accessor.MinecraftClientSessionAccessor;


import java.lang.invoke.MethodHandles;


import net.minecraft.class_1747;
import net.minecraft.class_1792;
import net.minecraft.class_1799;

public class AutoTool extends guu {
   private final bes egk;
   private final gbp gbv;
   private final gbp edg;
   private final bes ddq;
   private static final long a = 62297369538405L;


   private static final long p;

   public AutoTool() {
      long a = AutoTool.a ^ 28665590207063L;
      super(bfm.PLAYER);
      a.egk = new bes("Delay", 1.0F, 0.0F, 4.0F, 1.0F);
      a.gbv = new gbp("Blocks only", true);
      a.edg = new gbp("Auto Swap", true);
      a.ddq = new bes("Swap Amount", 1.0F, 1.0F, 64.0F, 1.0F);
      a.bfi(new ffn[]{a.egk, a.gbv, a.edg, a.ddq});
   }

   @gdz
   public void egi(fnt e) {
      int[] ax;
      int var10000;
      long axx = AutoTool.a ^ 82993914403264L;
      ax = ClientSetup.abu();
      var10000 = a.gbv.dnp();
      label105:
      if (ax != null) {
         if (var10000 != 0) {
            var10000 = bav.cdc();
            if (ax == null) {
               break label105;
            }

            if (var10000 == 0) {
               return;
            }
         }

         var10000 = ((MinecraftClientSessionAccessor)chi).getItemUseCooldown();
      }

      if (ax != null) {
         if (var10000 > a.egk.dnp().intValue()) {
            ((MinecraftClientSessionAccessor)chi).setItemUseCooldown(a.egk.dnp().intValue());
         }

         var10000 = a.edg.dnp();
      }

      label109: {
         if (ax != null) {
            if (var10000 == 0) {
               return;
            }

            var9 = chi;
            if (ax == null) {
               break label109;
            }

            var10000 = chi.field_1690.field_1904.method_1434();
         }

         if (var10000 == 0) {
            return;
         }

         var9 = chi;
      }

      class_1799 axxx = var9.field_1724.method_6047();
      class_1792 axxxx = axxx.method_7909();
      class_1792 var10 = axxxx;
      if (ax != null) {
         if (!(axxxx instanceof class_1747)) {
            return;
         }

         var10 = axxxx;
      }

      class_1747 axxxxx = (class_1747)var10;
      var10000 = amg.ayj(axxxxx.method_7711());
      if (ax != null) {
         if (var10000 == 0) {
            return;
         }

         var10000 = axxx.method_7947();
      }

      if (ax != null) {
         if (var10000 > a.ddq.dnp().intValue()) {
            return;
         }

         var10000 = a.ebm();
      }

      int axxxxxx = var10000;
      var10000 = axxxxxx;
      int var10001 = -1;
      if (ax != null) {
         if (axxxxxx == -1) {
            return;
         }

         var10000 = axxxxxx;
         var10001 = chi.field_1724.method_31548().method_67532();
      }

      if (var10000 != var10001) {
         chi.field_1724.method_31548().method_61496(axxxxxx);
      }
   }

   private int ebm() {
      long a = AutoTool.a ^ 3086261607906L;
      int[] var10000 = ClientSetup.abu();
      int ax = -1;
      int[] axx = var10000;
      int axxx = 0;
      int axxxx = 0;

      while (true) {
         if (axxxx < (int)p) {
            class_1799 axxxxx = chi.field_1724.method_31548().method_5438(axxxx);
            class_1792 var9 = axxxxx.method_7909();
            label34:
            var10 = var9 instanceof class_1747;

            if (var10 != 0) {
               class_1747 axxxxxx = (class_1747)var9;

               label41:
               if (amg.ayj(axxxxxx.method_7711())) {
                  int var11 = axxxxx.method_7947();
                  if (var11 <= axxx) {
                     break label41;
                  }

                  axxx = axxxxx.method_7947();
                  var11 = axxxx;

                  ax = var11;
               }
            }

            axxxx++;

            continue;
         }

         var10 = ax;
         break;
      }

      return var10;
   }

   static {
      p = 1668889768554921993L;
   }

}
