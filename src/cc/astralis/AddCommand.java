package cc.astralis;


import java.lang.invoke.MethodHandles;


public class AddCommand extends fso {
   private static final long a = 126729170895275L;


   public AddCommand() {
      long a = AddCommand.a ^ 12088196285052L;
      String[] var10001 = new String[2];
      var10001[0] = "friend";
      var10001[1] = "f";
      super(var10001, "Whitelists ppl from certain modules (.friend <add or remove> <name>");
   }

   @Override
   public void aov(String[] args, String message) {
      int[] var10000 = ClientSetup.abu();
      String[] axx = a.split(" ");
      avo axxx = ClientSetup.gqy().cgu();
      int[] axxxx = var10000;
      String[] var10 = axx;
      if (axx.length < 2) {
         bpa.dhu("Wrong Usage .friend <add or remove> <name>");
         return;
      }

      var10 = axx;

      String var8 = var10[1];
      byte var9 = -1;
      var11 = var8.hashCode();
      label57:
      switch (var11) {
         case 96417:
            var11 = var8.equals("add");

            if (var11 == 0) {
               break;
            }

            var9 = 0;
            break;
         case -934610812:
            var11 = var8.equals("remove");

            if (var11 != 0) {
               var9 = 1;
            }
      }

      var11 = var9;

      switch (var11) {
         case 0:
            axxx.gxx(axx[2]);
            String var12 = axx[2];
            bpa.dhu("Added " + var12 + " As a Friend");
            break;
         case 1:
            axxx.cnd(axx[2]);
            String var13 = axx[2];
            bpa.dhu("Removed " + var13 + " From Friends List");
      }
   }

}
