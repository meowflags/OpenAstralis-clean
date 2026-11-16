package cc.astralis;


import java.lang.invoke.MethodHandles;


import net.minecraft.class_310;
import net.minecraft.class_746;

public class VclipCommand extends fso {
   private static int[] fry;
   private static final long a = 58715239136647L;


   public VclipCommand() {
      long a = VclipCommand.a ^ 105160891441473L;
      String[] var10001 = new String[2];
      var10001[0] = "vclip";
      var10001[1] = "vc";
      super(var10001, "Teleports you vertically by the amount you said.");
   }

   @Override
   public void aov(String[] args, String message) {
      int[] var10000 = ClientSetup.abu();
      String[] axx = a.split(" ");
      int[] axxx = var10000;
      String[] var12 = axx;
      if (axx.length < 2) {
         bpa.dhu("Wrong Usage .vclip <amount>");
         return;
      }

      var12 = axx;

      String axxxx = var12[1];

      double axxxxx;
      try {
         axxxxx = Double.parseDouble(axxxx);
      } catch (NumberFormatException var11) {
         bpa.dhu("Invalid number: " + axxxx);
         return;
      }

      if (Math.abs(axxxxx) > 10.0) {
         bpa.dhu("§cAmount too large. Max ±10 blocks.");
      } else {
         class_746 axxxxxx = class_310.method_1551().field_1724;
         class_746 var13 = axxxxxx;
         if (axxxxxx == null) {
            bpa.dhu("§cPlayer not found.");
            return;
         }

         var13 = axxxxxx;

         var13.method_30634(axxxxxx.method_23317(), axxxxxx.method_23318() + axxxxx, axxxxxx.method_23321());
         bpa.dhu("§aVclipped " + axxxxx + " blocks.");
      }
   }

   public static void aut(int[] var0) {
      fry = var0;
   }

   public static int[] akx() {
      return fry;
   }

}
