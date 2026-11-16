package cc.astralis;


import java.lang.invoke.MethodHandles;


public class HidCommand extends fso {
   private static final long a = 69632267355404L;


   public HidCommand() {
      long a = HidCommand.a ^ 133351423437701L;
      String[] var10001 = new String[2];
      var10001[0] = "hide";
      var10001[1] = "h";
      super(var10001, "Hide Modules (.hide <module>)");
   }

   @Override
   public void aov(String[] args, String message) {
      int[] axx = ClientSetup.abu();
      if (a.length >= 2) {
         guu axxx = ClientSetup.gqy().aws().gvx(a[1]);
         if (axxx != null) {
            boolean axxxx;
            label59: {
               int var9 = a.length;
               if (var9 >= 3) {
                  axxxx = Boolean.parseBoolean(a[2].toLowerCase());
                  break label59;
               }

               var9 = axxx.aov();

               var9 = var9 == 0 ? 1 : 0;

               axxxx = (boolean)var9;
            }

            axxx.atd(axxxx);
            String var11;
            if (axxxx != 0) {
               var11 = "Hid ";
            } else {
               var11 = "Unhid ";
            }

            String var16 = axxx.clp();
            bpa.dhu(var11 + var16 + " module.");
            return;
         }

         String var8 = a[1];
         bpa.dhu("Module not found: " + var8);

         return;
      }

      bpa.dhu("Wrong Usage: .hide <module>");
   }

}
