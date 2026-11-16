package cc.astralis;


import java.lang.invoke.MethodHandles;


public final class duz {
   private final int alg;
   private final int agj;
   private final int bom;
   private final int gpv;
   private final int dx;
   private final fua ecm;
   private static final long a = 93342062827759L;


   private duz(ara a) {
      a.alg = a.fna;
      a.agj = a.ehj;
      a.bom = a.ear;
      a.gpv = a.bub;
      a.dx = a.djw;
      a.ecm = a.ahu;
      a.gxw();
   }

   private void gxw() {
      long a;
      label72: {
         a = duz.a ^ 43949873290713L;
         int[] var3 = ClientSetup.abu();
         int var10000 = a.alg;
         if (a.alg <= 0) {
            break label72;
         }

         var10000 = a.agj;

         if (var10000 <= 0) {
            break label72;
         }

         var10000 = a.bom;

         if (var10000 < 1) {
            throw new IllegalArgumentException("samples must be >= 1");
         }

         var10000 = a.gpv;

         label73: {
            if (var10000 < 0) {
               throw new IllegalArgumentException("stencilBits must be >= 0");
            }

            var4 = a;

            var10000 = a.dx;

            if (var10000 < 0) {
               throw new IllegalArgumentException("framebufferId must be >= 0");
            }

            var4 = a;
         }

         if (var4.ecm == null) {
            throw new IllegalArgumentException("framebufferFormat must not be null");
         }

         return;
      }

      throw new IllegalArgumentException("width/height must be > 0");
   }

   public static ara eqv(int width, int height) {
      return new ara(a, a);
   }

   public int gqz() {
      return a.alg;
   }

   public int bqx() {
      return a.agj;
   }

   public int cjo() {
      return a.bom;
   }

   public int cjq() {
      return a.gpv;
   }

   public int bmo() {
      return a.dx;
   }

   public fua frs() {
      return a.ecm;
   }

}
