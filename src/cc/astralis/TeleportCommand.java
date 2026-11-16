package cc.astralis;


import java.lang.invoke.MethodHandles;


import java.util.UUID;


import net.minecraft.class_156;
import net.minecraft.class_1657;

public class TeleportCommand extends fso {
   private static final long a = 105656070692894L;


   public TeleportCommand() {
      long a = TeleportCommand.a ^ 86875414428372L;
      String[] var10001 = new String[2];
      var10001[0] = "teleport";
      var10001[1] = "tp";
      super(var10001, "Teleports you to a player or coordinates");
   }

   // $VF: Handled exception range with multiple entry points by splitting it
   // $VF: Duplicated exception handlers to handle obfuscated exceptions
   @Override
   public void aov(String[] args, String message) {
      int[] var10000 = ClientSetup.abu();
      String[] axx = a.split(" ");
      int[] axxx = var10000;
      if (axx.length >= 2) {
         label64: {
            UUID axxxx = dlc.chi.method_31320().method_31407(axx[1]);
            UUID var18 = axxxx;
            if (axxxx == null) {
               break label64;
            }

            var18 = axxxx;

            if (var18 != class_156.field_25140) {
               class_1657 axxxxx = dlc.chi.field_1687.method_18470(axxxx);
               if (axxxxx != null) {
                  dlc.chi.field_1724.method_33574(axxxxx.method_73189());
                  String var19 = axx[1];
                  bpa.dhu("Teleported you to player " + var19);
               } else {
                  String var20 = axx[1];
                  bpa.dhu("Player not found: " + var20);
               }

               return;
            }
         }

         String[] var21 = axx;
         if (axx.length < 4) {
            bpa.dhu("Wrong Usage .tp <x> <y> <z>");
            return;
         }

         try {
            dlc.chi.field_1724.method_5814(Double.parseDouble(axx[1]), Double.parseDouble(axx[2]), Double.parseDouble(axx[3]));
            var21 = axx;
         } catch (NumberFormatException var16) {
            bpa.dhu("Invalid coordinates.");
            return;
         }

         try {
            double var24 = Double.parseDouble(var21[1]);
            double var31 = Double.parseDouble(axx[2]);
            double axxxxx = Double.parseDouble(axx[3]);
            double axxxxxx = var31;
            double axxxxxxx = var24;
            bpa.dhu("Teleported to coordinates: " + axxxxxxx + ", " + axxxxxx + ", " + axxxxx);
         } catch (NumberFormatException var15) {
            bpa.dhu("Invalid coordinates.");
         }

         return;
      }

      bpa.dhu("Wrong Usage .tp <x> <y> <z> | .tp <player>");
   }

}
