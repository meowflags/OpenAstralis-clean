package cc.astralis;


import java.lang.invoke.MethodHandles;


import java.util.ArrayList;
import java.util.Collections;

import java.util.List;


import net.minecraft.class_1707;
import net.minecraft.class_1713;
import net.minecraft.class_1735;
import net.minecraft.class_310;
import net.minecraft.class_437;
import net.minecraft.class_476;

public class ChestStealer extends guu {
   private final bes auy;
   private final gbp avy;
   private final gbp eh;
   private final dxl cam;
   private long ebb;
   private static final long a = 47939717910427L;


   private static final long p;

   public ChestStealer() {
      long a = ChestStealer.a ^ 119405682871492L;
      super(bfm.PLAYER);
      a.auy = new bes("Delay", 100.0F, 0.0F, 500.0F, 1.0F);
      a.avy = new gbp("Auto Close", true);
      a.eh = new gbp("Check title", true);
      a.cam = (dxl)new dxl("Title to check for", "Chest").bih(a.eh::dnp);
      a.bfi(new ffn[]{a.auy, a.avy, a.eh, a.cam});
   }

   @gdz
   public void dwo(bsm event) {
      long ax = ChestStealer.a ^ 128213283915996L;
      int[] axx = ClientSetup.abu();
      class_310 var10000 = chi;
      if (chi.field_1724 == null) {
         return;
      }

      var10000 = chi;

      if (var10000.field_1761 == null) {
         return;
      }

      var10000 = chi;

      if (var10000.field_1687 == null) {
         return;
      }

      var10000 = chi;

      class_437 axxx = var10000.field_1755;
      class_437 var18 = axxx;
      if (!(axxx instanceof class_476)) {
         return;
      }

      var18 = axxx;

      class_476 axxxx = (class_476)var18;
      a = (class_1707)axxxx.method_17577();
      var19 = a.eh.dnp();
      label146:
      if (var19 != 0) {
         String axxxxx = axxxx.method_25440().getString();
         var19 = axxxxx.toLowerCase().contains(a.cam.dnp().toLowerCase());

         if (var19 == 0) {
            return;
         }
      }

      var19 = a.field_7761.size() - (int)p;

      int axxxxxx = var19;
      boolean axxxxxxx = true;
      int axxxxxxxx = axxxxxx;

      while (true) {
         label136:
         if (axxxxxxxx < a.field_7761.size()) {
            var20 = a.field_7761;

            label133: {
               byte var21 = ((class_1735)a.field_7761.get(axxxxxxxx)).method_7677().method_7960();
               if (var21 == 0) {
                  break label133;
               }

               var21 = 0;

               axxxxxxx = (boolean)var21;
               break label136;
            }

            axxxxxxxx++;
            continue;
         }

         var20 = chi.field_1724.field_7512.field_7761;
         break;
      }

      int axxxxxxxxx;
      cxs axxxxxxxxxx = cwp.dwm(var20);
      List<class_1735> axxxxxxxxxxx = axxxxxxxxxx.dsa();
      List<class_1735> axxxxxxxxxxxx = new ArrayList<>(chi.field_1724.field_7512.field_7761.stream().filter(axxxxxxxxxxxxx -> {
         long ax = ChestStealer.a ^ 101289144067153L;
         int[] var4x = ClientSetup.abu();
         class_1735 var10000x = axxxxxxxxxxxxx;
         if (axxxxxxxxxxxxx.field_7871 == chi.field_1724.method_31548()) {
            return false;
         }

         var10000x = axxxxxxxxxxxxx;

         boolean var5x = var10000x.method_7681();
         if (!var5x) {
            return false;
         }

         var5x = a.contains(axxxxxxxxxxxxx);

         return var4x == null ? var5x : !var5x;
      }).toList());
      boolean axxxxxxxxxxxxx = axxxxxxxxxxxx.isEmpty();
      axxxxxxxxx = a.auy.dnp().intValue();
      var22 = axxxxxxxxxxxxx;
      label121:
      if (axxxxxxxxxxxxx == 0) {
         var22 = axxxxxxx;

         if (axxxxxxx == 0) {
            if (System.currentTimeMillis() - a.ebb < axxxxxxxxx) {
               return;
            }

            a.ebb = System.currentTimeMillis();
            Collections.shuffle(axxxxxxxxxxxx);
            class_1735 axxxxxxxxxxxxxx = axxxxxxxxxxxx.remove(0);
            chi.field_1761.method_2906(chi.field_1724.field_7512.field_7763, axxxxxxxxxxxxxx.field_7874, 0, class_1713.field_7794, chi.field_1724);
            return;
         }
      }

      var22 = axxxxxxxxxxxxx;

      label109:
      if (var22 == 0) {
         var22 = axxxxxxx;

         if (axxxxxxx == 0) {
            return;
         }
      }

      var22 = a.avy.dnp();

      if (var22 == 0) {
         return;
      }

      long var23;
      var22 = (var23 = System.currentTimeMillis() - a.ebb - axxxxxxxxx) == 0L ? 0 : (var23 < 0L ? -1 : 1);

      if (var22 >= 0) {
         a.ebb = System.currentTimeMillis();
         chi.field_1724.method_7346();
      }
   }

   static {
      p = 2514683010842886180L;
   }

}
