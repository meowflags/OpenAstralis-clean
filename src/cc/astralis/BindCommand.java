package cc.astralis;

import java.awt.event.KeyEvent;


import java.lang.invoke.MethodHandles;


public class BindCommand extends fso {
   private static final long a = 24923610395159L;


   public BindCommand() {
      long a = BindCommand.a ^ 124624865858924L;
      String[] var10001 = new String[3];
      var10001[0] = "bind";
      var10001[1] = "b";
      var10001[2] = "keyboard";
      super(var10001, "Binds Modules (.bind <module> <bind>)");
   }

   @Override
   public void aov(String[] args, String message) {
      int[] var10000 = ClientSetup.abu();
      String[] axx = a.split(" ");
      int[] axxx = var10000;
      String[] var14 = axx;
      if (axx.length < 2) {
         bpa.dhu("Wrong Usage .bind <module> <bind>");
         return;
      }

      var14 = axx;

      String axxxx;
      label85: {
         axxxx = var14[1].toLowerCase();
         int var15 = axxxx.equalsIgnoreCase("list");
         if (var15 != 0) {
            for (guu axxxxx : ClientSetup.gqy().aws().dmc()) {
               label69: {
                  label89: {
                     String axxxxxx = KeyEvent.getKeyText(axxxxx.glr());
                     int var19 = axxxxx.glr();
                     if (var19 == 0) {
                        break label69;
                     }

                     var20 = axxxxxx;
                     var26 = "Unknown";

                     var19 = axxxxxx.startsWith("Unknown");

                     if (var19 != 0) {
                        break label69;
                     }

                     var20 = axxxxx.clp();
                     var26 = axxxxxx;
                  }

                  bpa.dhu(var20 + " is bound to " + var26);
               }

            }

            return;
         }

         var16 = axx;

         var15 = axx.length;

         if (var15 < 3) {
            bpa.dhu("Wrong Usage .bind <module> <bind>");
            return;
         }

         var16 = axx;
      }

      String axxxxx = var16[2];
      guu axxxxxxx = ClientSetup.gqy().aws().gvx(axxxx);
      if (axxxxxxx != null) {
         int axxxxxxxx = KeybindNames.gmz(axxxxx);
         axxxxxxx.hge(axxxxxxxx);
         String var18 = axxxxxxx.clp();
         String var24 = axxxxx.toUpperCase();
         bpa.dhu("Bound " + var18 + " to " + var24);
         return;
      }

      bpa.dhu("Non-Existing Module " + axxxx);
   }

}
