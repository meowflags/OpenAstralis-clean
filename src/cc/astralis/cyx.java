package cc.astralis;


import java.lang.invoke.MethodHandles;


import java.util.HashMap;


public class cyx extends ffn<hcr> {
   private final HashMap<String, hcr> Vulcan;
   private static String gvx;
   private static final long a = 7582954100446L;


   public cyx(String name, hcr... classes) {
      long ax = cyx.a ^ 119726206910525L;
      int[] axx = ClientSetup.abu();
      super(a, a.length > 0 ? a[0] : null);
      a.aqo = new HashMap<>();
      HashMap var10000 = a.aqo;
      guu var10004 = a.dnp().clv();
      var10000.put("None", new hcr(var10004, "None"));
      hcr[] var6 = a;
      int var7 = a.length;
      int var8 = 0;

      while (true) {
         if (var8 < var7) {
            hcr axxx = var6[var8];
            a.aqo.put(axxx.akm(), axxx);
            var8++;

            continue;
         }

         Object var10 = a.ajf().get();
         if (!var10) {
            break;
         }

         var10 = a.dnp();

         if (var10 == null) {
            break;
         }

         var10 = a.dnp();

         var10 = ((hcr)var10).clv();
         if (!((guu)var10).dsv()) {
            break;
         }

         a.dnp().hkh(true);
         var10 = a.dnp();

         ((hcr)var10).frr(true);
         break;
      }
   }

   public void biz(hcr newMode) {
      int[] var4;
      boolean var6;
      label57: {
         label56: {
            label55: {
               label60: {
                  long ax = cyx.a ^ 61801631822741L;
                  var4 = ClientSetup.abu();
                  Object var10000 = a.dnp();
                  if (var4 != null) {
                     if (var10000 != null) {
                        var5 = a.dnp();
                        if (var4 == null) {
                           break label55;
                        }

                        if (var5 != a) {
                           break label60;
                        }
                     }

                     var10000 = a.ajf().get();
                  }

                  var6 = (Boolean)var10000;
                  if (var4 == null) {
                     break label57;
                  }

                  if (var6) {
                     break label56;
                  }
               }

               var5 = a.dnp();
            }

            ((hcr)var5).hkh(false);
         }

         super.gbf(a);
         var6 = a.clv().dsv();
      }

      if (var4 != null) {
         if (!var6) {
            return;
         }

         var6 = a.ajf().get();
      }

      if (var6) {
         a.hkh(true);
      }
   }

   public boolean cmt(String name) {
      return a.dnp().akm().equalsIgnoreCase(a);
   }

   public HashMap<String, hcr> ajs() {
      return a.aqo;
   }

   public static void aev(String var0) {
      gvx = var0;
   }

   public static String fig() {
      return gvx;
   }

}
