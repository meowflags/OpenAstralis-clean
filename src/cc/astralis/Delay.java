package cc.astralis;


import java.lang.invoke.MethodHandles;


import java.util.Iterator;

import java.util.concurrent.ConcurrentLinkedQueue;


import net.minecraft.class_2596;
import net.minecraft.class_2670;
import net.minecraft.class_2743;
import net.minecraft.class_6373;
import net.minecraft.class_746;

public class Delay extends hcr {
   private final bes bry;
   private final gbp bvm;
   private final ConcurrentLinkedQueue<g> dqh;
   private boolean bke;
   private boolean frf;
   private static final long a = 126251483459805L;


   public Delay(guu parent) {
      long ax = Delay.a ^ 100952926615412L;
      super(a, "Delay");
      a.bry = new bes("Delay Timeout", 400.0F, 0.0F, 1000.0F, 50.0F);
      a.bvm = new gbp("Release on Ground", true);
      a.dqh = new ConcurrentLinkedQueue<>();
      a.ebu(a.bry);
      a.ebu(a.bvm);
   }

   @gdz
   public void fqr(amo event) {
      long ax = Delay.a ^ 32610541417813L;
      int[] axx = ClientSetup.abu();
      amo var10000 = a;
      if (a.cud() == gpy.SEND) {
         return;
      }

      var10000 = a;

      class_2596<?> axxx = var10000.bed();
      int var7 = axxx instanceof class_2670;
      if (var7 != 0) {
         a.frf = true;
      }

      var7 = axxx instanceof class_2743;

      label100:
      if (var7 != 0) {
         class_2743 axxxx = (class_2743)axxx;
         var7 = axxxx.method_11818();

         if (var7 == chi.field_1724.method_5628()) {
            var7 = a.frf;
            if (a.frf) {
               a.frf = false;
               return;
            }

            var7 = a.ccg();


            if (var7 != 0) {
               a.bke = true;
            }
         }
      }

      var7 = a.bke;

      if (var7 == 0) {
         return;
      }

      var7 = axxx instanceof class_2743;

      label88:
      if (var7 == 0) {
         boolean var8 = axxx instanceof class_6373;

         if (!var8) {
            boolean var9 = axxx instanceof class_2670;

            if (!var9) {
               return;
            }
         }
      }

      a.dqh.add(new g(axxx, System.currentTimeMillis()));

      a.gmm(true);
   }

   @gdz
   public void dkt(fnt event) {
      long ax = Delay.a ^ 116756999987007L;
      int[] axx = ClientSetup.abu();
      int var10000 = a.dqh.isEmpty();
      if (var10000) {
         return;
      }

      var10000 = 0;

      boolean axxx = (boolean)var10000;
      Iterator var6 = a.dqh.iterator();

      while (true) {
         label93:
         if (var6.hasNext()) {
            g axxxx = (g)var6.next();
            float var10;
            var10000 = (var10 = (float)(System.currentTimeMillis() - axxxx.dgk()) - a.bry.dnp().floatValue()) == 0.0F ? 0 : (var10 < 0.0F ? -1 : 1);

            label90: {
               if (var10000 < 0) {
                  break label90;
               }

               var10000 = 1;

               axxx = (boolean)var10000;
               break label93;
            }

            continue;
         }

         var10000 = axxx;
         break;
      }

      if (var10000 != 0) {
         a.dux();
      }

      var10000 = a.bvm.dnp();

      label77: {
         label76: {
            label75:
            if (var10000 != 0) {
               var10000 = chi.field_1724.method_24828();

               if (var10000 != 0) {
                  break label76;
               }
            }

            var9 = a;

            var10000 = a.beh();

            if (var10000 != 0 && chi.field_1724 != null) {
               return;
            }
         }

         var9 = a;
      }

      var9.hco();
   }

   private void dux() {
      long a = Delay.a ^ 106828800348943L;
      int[] var10000 = ClientSetup.abu();
      g ax = a.dqh.poll();
      int[] axx = var10000;
      g var5 = ax;

      var5 = ax;

      gix.fcd(var5.gci());
   }

   private void hco() {
      long a = Delay.a ^ 93254435607507L;
      int[] var3 = ClientSetup.abu();

      while (true) {
         if (!a.dqh.isEmpty()) {
            a.dux();

            continue;
         }

         a.bke = false;
         break;
      }
   }

   private boolean ccg() {
      long a = Delay.a ^ 26762403790806L;
      int[] var3 = ClientSetup.abu();
      class_746 var10000 = chi.field_1724;
      if (chi.field_1724 == null) {
         return false;
      }

      var10000 = chi.field_1724;

      boolean var4 = var10000.method_31549().field_7479;
      if (var4) {
         return false;
      }

      var4 = true;

      return var4;
   }

   private boolean beh() {
      long a = Delay.a ^ 32818408046412L;
      int[] var10000 = ClientSetup.abu();
      Iterator var4 = a.dqh.iterator();
      int[] ax = var10000;

      while (true) {
         if (var4.hasNext()) {
            label46: {
               g axx = (g)var4.next();
               class_2596 var7 = axx.gci();
               class_2596 var8 = var7;
               var9 = var7 instanceof class_2743;

               if (!var9) {
                  break label46;
               }

               var8 = var7;

               class_2743 axxx = (class_2743)var8;
               int var10 = axxx.method_11818();

               if (var10 == chi.field_1724.method_5628()) {
                  return (boolean)1;
               }
            }

            continue;
         }

         var9 = false;
         break;
      }

      return var9;
   }

   @Override
   public void cbw() {
      a.dqh.clear();
      a.bke = false;
      a.frf = false;
      super.cbw();
   }

}
