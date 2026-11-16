package cc.astralis;


import java.lang.invoke.MethodHandles;


import java.util.function.Predicate;


import net.minecraft.class_1297;
import net.minecraft.class_1657;
import net.minecraft.class_1743;
import net.minecraft.class_1799;
import net.minecraft.class_1802;
import net.minecraft.class_239;
import net.minecraft.class_3965;
import net.minecraft.class_3966;
import net.minecraft.class_239.class_240;

public class AutoShield extends guu {
   private int ghw;
   private final gbp eps;
   private final gbp dwd;
   private final gbp ald;
   private static final long a = 61507978480279L;


   private static final long p;

   public AutoShield() {
      long a = AutoShield.a ^ 68112702316805L;
      super(bfm.PLAYER);
      a.ghw = -1;
      a.eps = new gbp("Counter Shield with Axe", true);
      a.dwd = new gbp("Only While Sneaking", false);
      a.ald = new gbp("Switch Back", true);
      a.bfi(new ffn[]{a.eps, a.dwd, a.ald});
   }

   @gdz
   public void ddj(fxx event) {
      int[] ax;
      int var12;
      label218: {
         label222: {
            long axx = AutoShield.a ^ 107444289336334L;
            int[] var10000 = ClientSetup.abu();
            class_239 axxx = chi.field_1765;
            ax = var10000;
            var12 = axxx instanceof class_3965;
            if (ax != null) {
               if (var12 != 0) {
                  class_3965 axxxx = (class_3965)axxx;
                  var12 = chi.field_1687.method_8320(axxxx.method_17777()).method_26215();
                  if (ax != null) {
                     if (var12 != 0) {
                        return;
                     }

                     var12 = a.dwd.dnp();
                  }

                  label182:
                  if (ax != null) {
                     if (var12 != 0) {
                        var12 = chi.field_1724.method_5715();
                        if (ax == null) {
                           break label182;
                        }

                        if (var12 == 0) {
                           return;
                        }
                     }

                     var12 = chi.field_1690.field_1886.method_1434();
                  }

                  if (ax != null) {
                     if (var12 != 0) {
                        var12 = a.ghw;
                        if (ax == null) {
                           break label218;
                        }

                        if (a.ghw != -1) {
                           break label222;
                        }

                        a.ghw = chi.field_1724.method_31548().method_67532();
                        bav.any(axxxx.method_17777());
                        if (ax != null) {
                           break label222;
                        }
                     }

                     var12 = a.ghw;
                  }

                  if (ax == null) {
                     break label218;
                  }

                  if (var12 == -1) {
                     break label222;
                  }

                  var12 = a.ald.dnp();
                  if (ax == null) {
                     break label218;
                  }

                  if (var12 == 0) {
                     break label222;
                  }

                  a.czn();
                  if (ax != null) {
                     break label222;
                  }
               }

               var12 = a.ghw;
            }

            if (ax == null) {
               break label218;
            }

            if (var12 != -1) {
               var12 = chi.field_1690.field_1886.method_1434();
               if (ax == null) {
                  break label218;
               }

               if (var12 == 0) {
                  var12 = a.ald.dnp();
                  if (ax == null) {
                     break label218;
                  }

                  if (var12 != 0) {
                     a.czn();
                  }
               }
            }
         }

         var12 = a.eps.dnp();
      }

      if (var12 != 0) {
         class_239 var13 = chi.field_1765;
         if (ax != null) {
            if (chi.field_1765 == null) {
               return;
            }

            var13 = chi.field_1765;
         }

         if (ax != null) {
            if (var13.method_17783() != class_240.field_1331) {
               return;
            }

            var13 = chi.field_1765;
         }

         class_239 axxxxx = var13;
         class_239 var14 = axxxxx;
         if (ax != null) {
            if (!(axxxxx instanceof class_3966)) {
               return;
            }

            var14 = axxxxx;
         }

         class_3966 axxxxxx = (class_3966)var14;
         class_1297 var10 = axxxxxx.method_17782();
         class_1297 var15 = var10;
         if (ax != null) {
            if (!(var10 instanceof class_1657)) {
               return;
            }

            var15 = var10;
         }

         class_1657 axxxxxxx = (class_1657)var15;
         var12 = axxxxxxx.method_6115();
         if (ax != null) {
            if (var12 == 0) {
               return;
            }

            var12 = axxxxxxx.method_6030().method_31574(class_1802.field_8255);
         }

         if (ax != null) {
            if (var12 == 0) {
               return;
            }

            var12 = CloudConfigurations(axxxxxxxx -> axxxxxxxx.method_7909() instanceof class_1743);
         }

         label227: {
            a = var12;
            var12 = a;
            int var10001 = -1;
            if (ax != null) {
               if (a == -1) {
                  return;
               }

               var18 = chi.field_1724.method_31548();
               if (ax == null) {
                  break label227;
               }

               var12 = var18.method_67532();
               var10001 = a;
            }

            if (var12 == var10001) {
               return;
            }

            a.ghw = chi.field_1724.method_31548().method_67532();
            var18 = chi.field_1724.method_31548();
         }

         var18.method_61496(a);
      }
   }

   private static int CloudConfigurations(Predicate<class_1799> a) {
      long ax = AutoShield.a ^ 65885716100056L;
      int[] var10000 = ClientSetup.abu();
      int axx = 0;
      int[] axxx = var10000;

      while (true) {
         if (axx < (int)p) {
            class_1799 axxxx = chi.field_1724.method_31548().method_5438(axx);
            var6 = a.test(axxxx);

            if (var6 != 0) {
               return axx;
            }

            axx++;

            continue;
         }

         var6 = -1;
         break;
      }

      return var6;
   }

   private void czn() {
      chi.field_1724.method_31548().method_61496(a.ghw);
      a.ghw = -1;
   }

   static {
      p = -6350328147518423031L;
   }

}
