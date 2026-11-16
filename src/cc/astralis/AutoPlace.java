package cc.astralis;


import java.lang.invoke.MethodHandles;


import java.util.ArrayList;


import net.minecraft.class_1268;
import net.minecraft.class_2338;
import net.minecraft.class_2350;
import net.minecraft.class_243;
import net.minecraft.class_3965;

public class AutoPlace extends guu {
   private final ArrayList<class_2338> foa;
   private final bes ccs;
   private final gbp gie;
   private final gbp eo;
   private int fzr;
   private int fuo;
   private boolean hhz;
   private int bvz;
   private class_2350 fvj;
   private static final long a = 51537810685214L;


   public AutoPlace() {
      long a = AutoPlace.a ^ 79203954915332L;
      super(bfm.WORLD);
      a.foa = new ArrayList<>();
      a.ccs = new bes("Place Delay", 2.0F, 1.0F, 10.0F, 1.0F);
      a.gie = new gbp("Swing Hand", true);
      a.eo = new gbp("Rotations", true);
      a.fzr = 0;
      a.fuo = 0;
      a.hhz = false;
      a.bvz = -1;
      a.bfi(new ffn[]{a.ccs, a.gie, a.eo});
   }

   @gdz
   public void ben(eih event) {
      long ax = AutoPlace.a ^ 133660526672925L;
      int[] var4 = ClientSetup.abu();
      int var10000 = a.hhz;
      if (!a.hhz) {
         a.bap();
         a.bvz = amg.bdh(true).aqk();
         return;
      }

      var10000 = a.fzr;

      label46: {
         int var10001 = a.foa.size();
         if (var10000 >= var10001) {
            a.gxo();
            return;
         }

         var5 = a;

         var10000 = a.fuo;
         var10001 = a.ccs.dnp().intValue();

         if (var10000 >= var10001) {
            a.gro();
            a.fuo = 0;
            return;
         }

         var5 = a;
      }

      var5.fuo++;
   }

   @gdz
   public void evs(fxx event) {
      long ax = AutoPlace.a ^ 118343743491827L;
      int[] axx = ClientSetup.abu();
      int var10000 = a.eo.dnp();
      if (var10000 == 0) {
         return;
      }

      var10000 = a.hhz;

      label42: {
         if (var10000 == 0) {
            return;
         }

         var7 = a;

         var10000 = a.fzr;

         if (var10000 >= a.foa.size()) {
            return;
         }

         var7 = a.foa.get(a.fzr);
      }

      class_2338 axxx = (class_2338)var7;
      float[] axxxx = a.bco(axxx);
      dqq.cms(axxxx, 180.0F, 180.0F);
   }

   private void bap() {
      long a = AutoPlace.a ^ 73251340191398L;
      class_2350[] var4 = class_2350.values();
      int[] var10000 = ClientSetup.abu();
      int var5 = var4.length;
      int[] ax = var10000;
      int var6 = 0;

      while (var6 < var5) {
         class_2350 axx = var4[var6];
         class_2338 axxx = chi.field_1724.method_24515().method_10074().method_10093(axx);
         a.foa.clear();
         a.foa.add(axxx);
         a.foa.add(axxx.method_10069(1, 0, 0));
         a.foa.add(axxx.method_10069(2, 0, 0));
         a.foa.add(axxx.method_10069(0, 1, 0));
         a.foa.add(axxx.method_10069(0, 2, 0));
         a.hhz = true;
         var6++;
      }
   }

   private void gro() {
      int[] a;
      class_2338 ax;
      label72: {
         AutoPlace var12;
         label75: {
            long axx = AutoPlace.a ^ 60295047689754L;
            int[] var10000 = ClientSetup.abu();
            ax = a.foa.get(a.fzr);
            a = var10000;
            int var11 = chi.field_1724.method_31548().method_67532();
            if (a != null) {
               if (var11 != a.bvz) {
                  chi.field_1724.method_31548().method_61496(a.bvz);
                  return;
               }

               var12 = a;
               if (a == null) {
                  break label75;
               }

               var11 = a.eo.dnp();
            }

            if (var11 == 0) {
               break label72;
            }

            var12 = a;
         }

         float[] axxx = var12.bco(ax);
         dqq.cms(axxx, 180.0F, 180.0F);
      }

      class_243 axxx = new class_243(ax.method_10263() + 0.5, ax.method_10264() + 0.5, ax.method_10260() + 0.5);
      class_2350[] var6 = class_2350.values();
      int var7 = var6.length;
      int var8 = 0;

      AutoPlace var14;
      label77: {
         while (true) {
            if (var8 < var7) {
               label55: {
                  class_2350 axxxx = var6[var8];
                  if (a != null) {
                     var13 = axxxx;
                     if (a == null) {
                        break;
                     }

                     if (axxxx == a.fvj && a != null) {
                        break label55;
                     }

                     chi.field_1761.method_2896(chi.field_1724, class_1268.field_5808, new class_3965(axxx, axxxx.method_10153(), ax, false));
                  }

                  a.fvj = axxxx;
               }

               var8++;
               if (a != null) {
                  continue;
               }
            }

            var14 = a;
            if (a == null) {
               break label77;
            }

            var13 = a.gie.dnp();
            break;
         }

         if ((Boolean)var13) {
            chi.field_1724.method_6104(class_1268.field_5808);
         }

         var14 = a;
      }

      var14.fzr++;
   }

   private float[] bco(class_2338 a) {
      double ax = a.method_10263() + 0.5 - chi.field_1724.method_23317();
      double axx = a.method_10264() + 0.5 - (chi.field_1724.method_23318() + chi.field_1724.method_18381(chi.field_1724.method_18376()));
      double axxx = a.method_10260() + 0.5 - chi.field_1724.method_23321();
      double axxxx = Math.sqrt(ax * ax + axxx * axxx);
      float axxxxx = (float)Math.toDegrees(Math.atan2(axxx, ax)) - 90.0F;
      float axxxxxx = (float)(-Math.toDegrees(Math.atan2(axx, axxxx)));
      return new float[]{axxxxx, axxxxxx};
   }

   @Override
   public void auj() {
      a.fzr = 0;
      a.fuo = 0;
      a.hhz = false;
      a.bvz = -1;
      super.auj();
   }

   @Override
   public void frg() {
      a.fzr = 0;
      a.fuo = 0;
      a.hhz = false;
      a.bvz = -1;
      super.frg();
   }

}
