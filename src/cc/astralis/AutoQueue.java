package cc.astralis;


import java.lang.invoke.MethodHandles;


import net.minecraft.class_2596;
import net.minecraft.class_7439;

public class AutoQueue extends guu {
   private final gbp ghu;
   private final gbp gov;
   private final adu all;
   private static final long a = 119870586904640L;


   private static final long p;

   public AutoQueue() {
      long a = AutoQueue.a ^ 29811826906499L;
      super(bfm.PLAYER);
      a.ghu = new gbp("Auto Set Language", true);
      a.gov = new gbp("Auto Play", true);
      String[] var8 = new String[(int)p];
      var8[0] = "Skywars Normal";
      var8[1] = "Skywars Insane";
      var8[2] = "Bedwars Solo";
      var8[3] = "Bedwars Duo";
      var8[4] = "Bedwars Trio";
      var8[5] = "Bedwars Squad";
      a.all = new adu("Auto Play Mode", "Skywars Normal", var8);
      a.bfi(new ffn[]{a.ghu, a.gov, a.all.bih(a.gov::dnp)});
   }

   @gdz
   public void bdq(fmj event) {
      long ax = AutoQueue.a ^ 44942172487315L;
      int[] var4 = ClientSetup.abu();
      if (!a.ghu.dnp()) {
         return;
      }

      bpa.dhu("set language");
      chi.field_1724.field_3944.method_45729("/language english");
   }

   @gdz
   public void bha(amo packetEvent) {
      long ax = AutoQueue.a ^ 132500186647771L;
      int[] axx = ClientSetup.abu();
      if (a.gov.dnp()) {
         class_2596 axxx = a.bed();
         class_2596 var10000 = axxx;
         if (!(axxx instanceof class_7439)) {
            return;
         }

         var10000 = axxx;

         class_7439 axxxx = (class_7439)var10000;
         var10 = axxxx.comp_763().getString();
         label131:
         if (!var10.equalsIgnoreCase("You have been eliminated!")) {
            var10 = axxxx.comp_763().getString();

            if (!var10.equalsIgnoreCase("You died! Want to play again? Click here! ")) {
               return;
            }
         }

         var10 = a.all.dnp();

         String var7 = var10;
         byte var8 = -1;
         var11 = var7.hashCode();
         label97:
         switch (var11) {
            case 765058203:
               var11 = var7.equals("Skywars Normal");

               if (var11 == 0) {
                  break;
               }

               var8 = 0;
               break;
            case 621007582:
               var11 = var7.equals("Skywars Insane");

               if (var11 == 0) {
                  break;
               }

               var8 = 1;
               break;
            case -1014563277:
               var11 = var7.equals("Bedwars Solo");

               if (var11 == 0) {
                  break;
               }

               var8 = 2;
               break;
            case -864026070:
               var11 = var7.equals("Bedwars Duo");

               if (var11 == 0) {
                  break;
               }

               var8 = 3;
               break;
            case -1014530696:
               var11 = var7.equals("Bedwars Trio");

               if (var11 == 0) {
                  break;
               }

               var8 = 4;
               break;
            case -1386622618:
               var11 = var7.equals("Bedwars Squad");

               if (var11 != 0) {
                  var8 = 5;
               }
         }

         var11 = var8;
         String axxxxx = switch (var11) {
            case 0 -> {
               yield "/play solo_normal";
            }
            case 1 -> {
               yield "/play solo_insane";
            }
            case 2 -> {
               yield "/play bedwars_eight_one";
            }
            case 3 -> {
               yield "/play bedwars_eight_two";
            }
            case 4 -> {
               yield "/play bedwars_four_three";
            }
            case 5 -> {
               yield "/play bedwars_four_four";
            }
            default -> null;
         };
         if (axxxxx != null) {
            chi.field_1724.field_3944.method_45729(axxxxx);
         }
      }
   }

   static {
      p = -8344485092298588154L;
   }

}
