package cc.astralis;


import java.lang.invoke.MethodHandles;


import net.minecraft.class_243;

public class PredictionMode extends fwu {
   private final gbg eid;
   private static final double ate = 1.0;
   private static final double dka = 1.0;
   private static final double fvw = 1.0;
   private int fzh;
   private static final int fqo;
   private static final long a = 133974203903443L;


   public PredictionMode() {
      long a = PredictionMode.a ^ 88707157759900L;
      super("Prediction");
      a.fzh = 0;
      a.eid = new gbg();
   }

   @Override
   public void ayy(eih event) {
   }

   private String ey(class_243 a) {
      return String.format("(%.3f, %.3f, %.3f)", a.field_1352, a.field_1351, a.field_1350);
   }

   public void brj() {
      a.eid.awk();
      a.fzh = 0;
   }

}
