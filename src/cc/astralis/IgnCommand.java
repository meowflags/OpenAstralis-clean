package cc.astralis;


import java.lang.invoke.MethodHandles;


public class IgnCommand extends fso {
   private static final long a = 46681459363062L;


   public IgnCommand() {
      long a = IgnCommand.a ^ 97405649313660L;
      String[] var10001 = new String[3];
      var10001[0] = "ign";
      var10001[1] = "name";
      var10001[2] = "n";
      super(var10001, "Shows you your current name and copies it to youre clip board (.ign)");
   }

   @Override
   public void aov(String[] args, String message) {
      dlc.chi.field_1774.method_1455(dlc.chi.method_1548().method_1676());
      String var10000 = dlc.chi.method_1548().method_1676();
      bpa.dhu("Your name is: " + var10000);
   }

}
