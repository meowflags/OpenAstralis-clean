package cc.astralis;

import java.awt.Color;


import java.lang.invoke.MethodHandles;


public class ReloadShader extends guu {
   public final gbp cgf;
   public final acn fkq;
   private boolean gne;
   private static final long a = 49417177202899L;


   public ReloadShader() {
      long a = ReloadShader.a ^ 135685088738024L;
      super(bfm.VISUAL);
      a.cgf = new gbp("Reload Shader", false);
      a.fkq = new acn("Color", Color.RED);
      a.gne = false;
      a.bfi(new ffn[]{a.fkq, a.cgf});
   }

   @gdz
   public void duk(fxx event) {
      int[] var4;
      boolean var10000;
      var4 = ClientSetup.abu();
      var10000 = a.cgf.dnp();
      label48:
      if (var4 != null) {
         if (var10000) {
            var10000 = a.gne;
            if (var4 == null) {
               break label48;
            }

            if (!a.gne) {
               chi.method_1521();
               a.gne = true;
            }
         }

         var10000 = a.cgf.dnp();
      }

      label51: {
         if (var4 != null) {
            if (var10000) {
               return;
            }

            var5 = a;
            if (var4 == null) {
               break label51;
            }

            var10000 = a.gne;
         }

         if (!var10000) {
            return;
         }

         var5 = a;
      }

      var5.gne = false;
   }

}
