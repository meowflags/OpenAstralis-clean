package cc.astralis;


import java.lang.invoke.MethodHandles;


import java.util.LinkedList;

import java.util.Queue;


import net.minecraft.class_2596;

public class BlinkController extends cec {
   private final Queue<class_2596<?>> cos = new LinkedList<>();
   private boolean ezs = false;
   private static final long a = 34332603686142L;


   public void ckv() {
      long a = BlinkController.a ^ 73234592072445L;
      int[] var3 = ClientSetup.abu();
      BlinkController var10000 = a;
      if (a.ezs) {
         return;
      }

      bpa.bez("§b[blink] started");
      a.cos.clear();
      a.ezs = true;
      var10000 = a;

      var10000.bbv();
   }

   public void fxn() {
      long a = BlinkController.a ^ 138624776599400L;
      int[] var3 = ClientSetup.abu();
      BlinkController var10000 = a;
      if (!a.ezs) {
         return;
      }

      bpa.bez("§b[blink] stopped");
      a.ezs = false;
      var10000 = a;

      var10000.fvv();
   }

   @gdz
   public void ckt(amo event) {
      if (a.ezs && a.cud() != gpy.RECEIVE && chi.field_1687 != null) {
         a.gmm(true);
         a.cos.add(a.bed());
      }
   }

   @Override
   public void bbv() {
      long a = BlinkController.a ^ 99524031963431L;
      int[] var3 = ClientSetup.abu();
      BlinkController var10000 = a;
      if (!a.ezs) {
         return;
      }

      var10000 = a;

      var10000.bbv();
   }

   @Override
   public void fvv() {
      long a = BlinkController.a ^ 96261630393899L;
      int[] var10000 = ClientSetup.abu();
      super.fvv();
      int[] var3 = var10000;

      while (!a.cos.isEmpty()) {
         gix.dsd(a.cos.poll());
      }
   }

   public boolean bsw() {
      return a.ezs;
   }

}
