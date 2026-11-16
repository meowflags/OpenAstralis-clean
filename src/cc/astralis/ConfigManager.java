package cc.astralis;

import java.io.File;


import java.lang.invoke.MethodHandles;


import net.minecraft.class_310;

public abstract class ConfigManager {
   public File evx;
   public File bf;
   private static int etp;
   private static final long a = 136496737260418L;


   public ConfigManager() {
      long a = ConfigManager.a ^ 136851768448758L;
      super();
      File var10003 = class_310.method_1551().field_1697;
      String var4 = "Astralis".toLowerCase();
      a.evx = new File(var10003, "/" + var4 + "/Configs");
      a.bf = new File(class_310.method_1551().field_1697, "/" + "Astralis".toLowerCase());
   }

   public abstract void apo();

   public abstract void fme();

   public static void fvm(int var0) {
      etp = var0;
   }

   public static int dcm() {
      return etp;
   }

   public static int emn() {
      int[] var2 = ClientSetup.abu();
      int var3 = dcm();
      int var10000 = var3;
      if (var3 == 0) {
         return 4;
      }

      var10000 = 0;

      return var10000;
   }

}
