package cc.astralis;


import java.lang.invoke.MethodHandles;


public class ToggleCommand extends fso {
   private static final long a = 72859863775204L;


   public ToggleCommand() {
      long a = ToggleCommand.a ^ 6307343864627L;
      String[] var10001 = new String[2];
      var10001[0] = "toggle";
      var10001[1] = "t";
      super(var10001, "Toggles Modules (.toggle <module>)");
   }

   @Override
   public void aov(String[] args, String message) {
      int[] var10000 = ClientSetup.abu();
      String[] axx = a.split(" ");
      int[] axxx = var10000;
      if (a.length >= 1) {
         label27: {
            guu axxxx = ClientSetup.gqy().aws().gvx(axx[1]);
            guu var9 = axxxx;
            if (axxxx == null) {
               break label27;
            }

            axxxx.gxo();
            var9 = axxxx;

            String var10 = var9.clp();
            bpa.dhu("Toggled " + var10 + " module.");
            return;
         }

         bpa.dhu("Module not found.");
         return;
      }

      bpa.dhu("Wrong Usage .t <Module>");
   }

}
