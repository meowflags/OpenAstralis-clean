package cc.astralis;

import java.io.File;


import java.lang.invoke.MethodHandles;


import java.util.HashMap;


public class drd implements dlc {
   public final File ail;
   public HashMap<String, flh> ddp;
   private static final long a = 43493858903677L;


   public drd() {
      long a = drd.a ^ 7331617082099L;
      super();
      File var10003 = chi.field_1697;
      String var3 = "Astralis".toLowerCase();
      a.ail = new File(var10003, "/" + var3 + "/Configs");
      a.ddp = new HashMap<>();
   }

   public void adk() {
      long a = drd.a ^ 79905176227196L;
      int[] var10000 = ClientSetup.abu();
      File[] ax = a.ail.listFiles();
      int[] axx = var10000;
      File[] var10 = ax;
      if (ax == null) {
         return;
      }

      var10 = ax;

      File[] var5 = var10;
      int var6 = var5.length;
      int var7 = 0;

      while (var7 < var6) {
         File axxx = var5[var7];
         label40:
         if (axxx.isFile()) {
            String var11 = axxx.getName();
            if (!var11.endsWith(".astralis")) {
               break label40;
            }

            String var12 = axxx.getName();
            int var13 = axxx.getName().length();
            var11 = var12.substring(0, var13 - ".astralis".length());

            String axxxx = var11;
            a.ddp.put(axxxx, new flh(axxxx));
         }

         var7++;

      }
   }

   public void ecy() {
      long a;
      drd var4;
      label34: {
         a = drd.a ^ 60769721817397L;
         int[] var3 = ClientSetup.abu();
         boolean var10000 = a.ail.exists();
         if (!var10000) {
            a.ail.mkdirs();
         }

         a.adk();
         var4 = a;

         var10000 = a.ddp.containsKey("default");

         if (!var10000) {
            a.faw();
            return;
         }

         var4 = a;
      }

      var4.esg("default");
   }

   public void faw() {
      long a = drd.a ^ 100210367624802L;
      a.flb("default");
   }

   public void esg(String configName) {
      long ax = drd.a ^ 67231101388452L;
      int[] var10000 = ClientSetup.abu();
      flh axx = a.ddp.get(a);
      int[] axxx = var10000;
      flh var6 = axx;

      bpa.dhu("Loaded Config " + a);
      var6 = axx;

      var6.fme();
   }

   public void flb(String configName) {
      long ax = drd.a ^ 88624493588217L;
      int[] var10000 = ClientSetup.abu();
      flh axx = a.ddp.get(a);
      int[] axxx = var10000;
      flh var6 = axx;

      var6 = axx;

      var6.apo();
   }

   public void bgb(String configName) {
      long ax = drd.a ^ 66735366116018L;
      int[] var10000 = ClientSetup.abu();
      flh axx = a.ddp.get(a);
      int[] axxx = var10000;
      File axxxx = new File(a.ail, a + ".astralis");
      boolean var7 = axxxx.exists();
      if (!var7) {
         return;
      }

      var7 = axxxx.delete();

      if (var7) {
         a.ddp.remove(a);
      }
   }

}
