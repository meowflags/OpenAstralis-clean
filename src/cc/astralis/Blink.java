package cc.astralis;


import java.lang.invoke.MethodHandles;


import net.minecraft.class_2828;

public class Blink extends guu {
   private final adu fbp;
   private double gic;
   private double dab;
   private double bih;
   private boolean fjd;
   private int cju;
   private static final long a = 102137888449377L;


   private static final long p;

   public Blink() {
      long a = Blink.a ^ 79530025290916L;
      super(bfm.PLAYER);
      String[] var4 = new String[2];
      var4[0] = "Blink";
      var4[1] = "Stop";
      a.fbp = new adu("Mode", "Blink", var4);
      a.bfi(new ffn[]{a.fbp});
   }

   @Override
   public void auj() {
      long a = Blink.a ^ 96254037516966L;
      int[] var10000 = ClientSetup.abu();
      super.auj();
      int[] var3 = var10000;
      if (chi.field_1724 != null && chi.field_1724.method_24828()) {
         a.dab = chi.field_1724.method_23317();
         a.gic = chi.field_1724.method_23318();
         a.bih = chi.field_1724.method_23321();
      }

      a.cju = 0;
      a.fjd = false;
   }

   @gdz
   public void div(fxx event) {
      long ax = Blink.a ^ 13405490388760L;
      int[] var4 = ClientSetup.abu();
      boolean var10000 = a.fbp.emb("Stop");
      if (!var10000) {
         return;
      }

      var10000 = bav.bfi();

      if (!var10000) {
         return;
      }

      var10000 = chi.field_1724.method_24828();

      if (!var10000) {
         a.gmm(true);
      }
   }

   @gdz
   public void dzn(amo event) {
      long ax = Blink.a ^ 52056546233485L;
      int[] axx = ClientSetup.abu();
      String var10000 = a.fbp.dnp();
      boolean var6 = var10000.equals("Blink");
      label93: {
         if (var6) {
            var7 = a;

            if (a.cud() == gpy.RECEIVE) {
               return;
            }
         }

         var7 = a;
      }

      var6 = var7.bed() instanceof class_2828;

      if (!var6) {
         return;
      }

      var6 = bav.bfi();

      boolean axxx = var6;
      int var8 = axxx;
      if (axxx != 0) {
         label100: {
            double var13;
            int var9 = (var13 = chi.field_1724.field_6017 - 5.0) == 0.0 ? 0 : (var13 < 0.0 ? -1 : 1);
            if (var9 < 0) {
               a.gmm(true);
               a.fjd = true;
               return;
            }

            var10 = a;

            var9 = a.fjd;

            if (var9 == 0) {
               return;
            }

            evd.eeo();
            chi.field_1724.method_5814(a.dab, a.gic, a.bih);
            chi.field_1724.field_6017 = 0.0;
            var10 = a;
         }

         var10.fjd = false;
         bpa.dhu("Saved from void!");
         return;
      }

      var8 = chi.field_1724.field_6012 % (int)p;

      if (var8 != 0) {
         return;
      }

      var8 = chi.field_1724.method_24828();

      if (var8 != 0) {
         a.dab = chi.field_1724.method_23317();
         a.gic = chi.field_1724.method_23318();
         a.bih = chi.field_1724.method_23321();
         a.fjd = false;
      }
   }

   static {
      p = -7915170155779325942L;
   }

}
