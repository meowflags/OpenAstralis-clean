package cc.astralis;


import java.lang.invoke.MethodHandles;


import net.minecraft.class_310;
import net.minecraft.class_746;

public class HclipCommand extends fso {
   private static final long a = 20841868153162L;


   public HclipCommand() {
      long a = HclipCommand.a ^ 116151994332183L;
      String[] var10001 = new String[2];
      var10001[0] = "hclip";
      var10001[1] = "hc";
      super(var10001, "Teleports you horizontally forward/backward.");
   }

   @Override
   public void aov(String[] args, String message) {
      int[] var10000 = ClientSetup.abu();
      String[] axx = a.split(" ");
      int[] axxx = var10000;
      String[] var17 = axx;
      if (axx.length < 2) {
         bpa.dhu("Wrong Usage .hclip <amount>");
         return;
      }

      var17 = axx;

      String axxxx = var17[1];

      double axxxxx;
      try {
         axxxxx = Double.parseDouble(axxxx);
      } catch (NumberFormatException var16) {
         bpa.dhu("Invalid number: " + axxxx);
         return;
      }

      if (Math.abs(axxxxx) > 10.0) {
         bpa.dhu("§cAmount too large. Max ±10 blocks.");
      } else {
         class_746 axxxxxx = class_310.method_1551().field_1724;
         class_746 var18 = axxxxxx;
         if (axxxxxx == null) {
            bpa.dhu("§cPlayer not found.");
            return;
         }

         var18 = axxxxxx;

         float axxxxxxx = var18.method_36454() * (float) Math.PI / 180.0F;
         double axxxxxxxx = -Math.sin(axxxxxxx) * axxxxx;
         double axxxxxxxxx = Math.cos(axxxxxxx) * axxxxx;
         axxxxxx.method_30634(axxxxxx.method_23317() + axxxxxxxx, axxxxxx.method_23318(), axxxxxx.method_23321() + axxxxxxxxx);
         bpa.dhu("§aHclipped " + axxxxx + " blocks.");
      }
   }

}
