package cc.astralis;


import java.lang.invoke.MethodHandles;


import java.util.Iterator;


public class HelpCommand extends fso {
   private static final long a = 96591268866014L;


   public HelpCommand() {
      long a = HelpCommand.a ^ 5162268546907L;
      String[] var10001 = new String[2];
      var10001[0] = "help";
      var10001[1] = "h";
      super(var10001, "Shows Information And Usages About Other Commands");
   }

   @Override
   public void aov(String[] args, String message) {
      long ax = HelpCommand.a ^ 100216406351115L;
      int[] var10000 = ClientSetup.abu();
      Iterator var6 = ClientSetup.gqy().bzq().czl().iterator();
      int[] axx = var10000;

      while (var6.hasNext()) {
         fso axxx = (fso)var6.next();
         String var8 = axxx.ax()[0];
         bpa.dhu("Expresion: " + var8);
         String var9 = axxx.et();
         bpa.dhu("Description: " + var9);
      }
   }

}
