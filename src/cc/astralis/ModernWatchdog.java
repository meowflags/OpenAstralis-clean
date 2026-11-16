package cc.astralis;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.LinkedBlockingQueue;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_10264;
import net.minecraft.class_10265;
import net.minecraft.class_1268;
import net.minecraft.class_1297;
import net.minecraft.class_2596;
import net.minecraft.class_2602;
import net.minecraft.class_2616;
import net.minecraft.class_2622;
import net.minecraft.class_2626;
import net.minecraft.class_2637;
import net.minecraft.class_2663;
import net.minecraft.class_2664;
import net.minecraft.class_2670;
import net.minecraft.class_2673;
import net.minecraft.class_2684;
import net.minecraft.class_2692;
import net.minecraft.class_2707;
import net.minecraft.class_2708;
import net.minecraft.class_2726;
import net.minecraft.class_2734;
import net.minecraft.class_2739;
import net.minecraft.class_2740;
import net.minecraft.class_2743;
import net.minecraft.class_2744;
import net.minecraft.class_2749;
import net.minecraft.class_2752;
import net.minecraft.class_2777;
import net.minecraft.class_2781;
import net.minecraft.class_2783;
import net.minecraft.class_2788;
import net.minecraft.class_2824;
import net.minecraft.class_2848;
import net.minecraft.class_2868;
import net.minecraft.class_2923;
import net.minecraft.class_2924;
import net.minecraft.class_3966;
import net.minecraft.class_5890;
import net.minecraft.class_5891;
import net.minecraft.class_634;
import net.minecraft.class_6373;
import net.minecraft.class_6682;
import net.minecraft.class_742;
import net.minecraft.class_8143;
import net.minecraft.class_8913;
import net.minecraft.class_8914;
import net.minecraft.class_9151;
import net.minecraft.class_9178;
import net.minecraft.class_2848.class_2849;

public class ModernWatchdog extends hcr {
   public bes azb;
   private final bes bvl;
   public gbp gsh;
   public gbp bln;
   public gbp bqr;
   public gbp bul;
   public gbp ebg;
   public gbp bir;
   public gbp hjg;
   public gbp bka;
   public gbp cir;
   private final cbm gmz;
   private int ay;
   private int gyt;
   private int ags;
   private boolean ffc;
   public boolean bfs;
   private boolean fgh;
   private boolean fbg;
   private boolean edp;
   private boolean hdd;
   private LinkedBlockingQueue<class_2596<class_2602>> chj;
   private static final long a = 107504267842123L;
   private static final String[] d;
   private static final String[] e;

   private static final long[] g;
   private static final Integer[] h;
   private static final Map i;

   public ModernWatchdog(guu parent) {
      long ax = ModernWatchdog.a ^ 134708080273423L;
      super(a, "Modern Watchdog");
      a.azb = new bes("Delay Ticks", 1.0F, 0.0F, 100.0F, 1.0F);
      a.bvl = new bes("World Change Timeout", 5000.0F, 0.0F, 10000.0F, 1.0F);
      a.gsh = new gbp("Delay All Packets", true);
      a.bln = new gbp("Cancel Explosion", false);
      a.bqr = new gbp("Ignore Explosion", false);
      a.bul = new gbp("Jump Reset", false);
      a.ebg = new gbp("Air Velocity", false);
      a.bir = new gbp("Blink", false);
      a.hjg = new gbp("Remove Attack Delay (experimental)", false);
      a.bka = new gbp("Attack Reduce (experimental)", false);
      a.cir = new gbp("Switch Attack (experimental)", false);
      a.gmz = new cbm();
      a.ffc = false;
      a.bfs = false;
      a.fgh = false;
      a.fbg = false;
      a.edp = false;
      a.hdd = false;
      a.chj = new LinkedBlockingQueue<>();
      ffn[] var4 = new ffn[]{a.azb, a.bvl, a.gsh, a.bln, a.bqr, a.bul, null, null, null, null, null};
      var4[6] = a.ebg;
      var4[7] = a.bir;
      var4[8] = a.hjg;
      var4[9] = a.bka;
      var4[10] = a.cir;
      a.dxe(var4);
   }

   @gdz
   public void ask(etk event) {
      long ax = ModernWatchdog.a ^ 103391158917223L;
      int[] var4 = ClientSetup.abu();
      int var10000 = a.fjj();
      if (var10000 != 0) {
         return;
      }

      var10000 = a.fbg;

      label41: {
         if (var10000 == 0) {
            return;
         }

         var5 = a;

         var10000 = a.ags;

         if (var10000 != 0) {
            return;
         }

         a.eeq = a.fbg;
         var5 = a;
      }

      var5.fbg = false;
   }

   private void ejj() {
      long a = ModernWatchdog.a ^ 704281774714L;
      int[] ax = ClientSetup.abu();

      while (true) {
         label31:
         if (!a.chj.isEmpty()) {
            try {
               class_2596<class_2602> axx = a.chj.poll();
               axx.method_65081(chi.method_1562());
            } catch (Exception var5) {
               var5.printStackTrace();
               continue;
               break label31;
            }

            continue;
            break;
         }

         ModernWatchdog var10000 = a;
         if (a.bir.dnp()) {
            ClientSetup.gqy().ccv().gne(BlinkController.class).fxn();
         }

         var10000 = a;

         var10000.bfs = false;
         break;
      }
   }

   @gdz
   public void glj(dfa event) {
      long ax = ModernWatchdog.a ^ 26557068412942L;
      int[] var4 = ClientSetup.abu();
      boolean var10000 = a.fjj();
      if (var10000) {
         return;
      }

      var10000 = a.ffc;

      if (var10000) {
         a.avm(1.0F);
         a.brl(0.0F);
      }
   }

   @gdz
   public void dpn(ajd event) {
      long ax = ModernWatchdog.a ^ 128676225715280L;
      int[] var4 = ClientSetup.abu();
      int var10000 = a.fjj();
      if (var10000 != 0) {
         return;
      }

      var10000 = a.bfs;

      if (var10000 == 0) {
         return;
      }

      a.ay++;
      var10000 = a.bul.dnp();

      label75: {
         int var10001;
         label63: {
            label62:
            if (var10000 != 0) {
               var10000 = chi.field_1724.method_24828();

               if (var10000 != 0) {
                  var10000 = a.ay;
                  var10001 = 1;

                  if (a.ay > 1) {
                     a.fbg = true;
                     a.bfs = false;
                     a.ay = 0;
                     a.ejj();
                     return;
                  }
               }
            }

            var5 = a;

            var10000 = a.ay;

            var10001 = a.azb.dnp().intValue();
         }

         if (var10000 <= var10001) {
            return;
         }

         a.bfs = false;
         a.ay = 0;
         var5 = a;
      }

      var5.ejj();
   }

   @gdz
   public void dby(dgk event) {
      a.gmz.glr();
   }

   @gdz
   public void erf(fxx event) {
      long ax = ModernWatchdog.a ^ 62312368707793L;
      int[] axx = ClientSetup.abu();
      int var10000 = a.fjj();
      if (var10000 != 0) {
         return;
      }

      var10000 = a.gyt;

      label128: {
         if (var10000 > 0) {
            boolean axxx = a.edp;
            ModernWatchdog var9 = a;
            label93:
            if (!a.hdd) {
               boolean var10 = axxx;
               if (!axxx) {
                  break label93;
               }

               var10 = false;

               class_1297 axxxx;
               label114: {
                  bfc.fpt(var10);
                  axxxx = bfc.exm().method_17782();
                  var11 = axxxx;
                  label113:
                  if (axxxx == null) {
                     axxxx = ClientSetup.gqy().aws().diy(ekb.class).gvw;
                     var11 = axxxx;

                     if (axxxx != null) {
                        label107: {
                           label106: {
                              class_3966 axxxxx = bfc.exm();
                              class_3966 var12 = axxxxx;
                              if (axxxxx == null) {
                                 break label106;
                              }

                              var12 = axxxxx;

                              if (var12.method_17782() != null) {
                                 var10 = true;
                                 break label107;
                              }
                           }

                           var10 = false;
                        }

                        boolean axxxxxx = var10;
                        var10 = axxxxxx;

                        if (!axxxxxx) {
                           axxxx = null;
                        }
                     }
                  }

                  var11 = axxxx;

                  var10 = var11 instanceof class_742;
               }

               if (!var10) {
                  break label93;
               }

               var10 = a.cir.dnp();

               if (var10) {
                  class_634 var15 = chi.method_1562();
                  int var10003 = chi.field_1724.method_31548().method_67532() + 1;
                  var15.method_52787(new class_2868(var10003 % 9));
                  chi.method_1562().method_52787(new class_2868(chi.field_1724.method_31548().method_67532()));
               }

               chi.field_1724.method_5728(false);
               chi.field_1724.method_18799(chi.field_1724.method_18798().method_18805(0.6, 1.0, 0.6));
               chi.method_1562().method_52787(class_2824.method_34206(axxxx, chi.field_1724.method_5715()));
               chi.field_1724.method_6104(class_1268.field_5808);
            }

            var9 = a;

            var9.gyt--;
            return;
         }

         var16 = a;

         var10000 = a.ffc;

         if (var10000 == 0) {
            return;
         }

         var16 = a;
      }

      var16.ffc = false;
   }

   @gdz
   public void gha(amo event) {
      long ax = ModernWatchdog.a ^ 19173678000187L;
      int[] axx = ClientSetup.abu();
      if (!a.fjj()) {
         amo var14;
         label656: {
            class_2596<?> axxx = a.bed();
            boolean var10000 = axxx instanceof class_2824;
            if (var10000) {
               class_2824 axxxx = (class_2824)axxx;
               axxxx.method_34209(new eal(a));
            }

            var14 = a;

            var10000 = a.bed() instanceof class_2848;

            if (var10000) {
               var14 = a;

               class_2848 axxxx;
               label643:
               if ((axxxx = (class_2848)a.bed()).method_36173() == chi.field_1724.method_5628()) {
                  class_2849 var15 = axxxx.method_12365();
                  class_2849 var10001 = class_2849.field_12981;
                  if (var15 == class_2849.field_12981) {
                     a.edp = true;
                     break label643;
                  }

                  var15 = axxxx.method_12365();
                  var10001 = class_2849.field_12985;

                  if (var15 == var10001) {
                     a.edp = false;
                  }
               }
            }

            var14 = a;
         }

         if (var14.cud() != gpy.RECEIVE) {
            return;
         }

         var14 = a;

         boolean var16 = var14.fmc();
         if (var16) {
            return;
         }

         var16 = a.bfs;

         label626: {
            label659: {
               label660: {
                  if (!var16) {
                     break label660;
                  }

                  var16 = a.gsh.dnp();

                  if (!var16) {
                     var17 = a.bed() instanceof class_2684;

                     if (var17 != 0) {
                        break label659;
                     }

                     var17 = a.bed() instanceof class_10264;

                     if (var17 != 0) {
                        break label659;
                     }

                     class_2596 axxxx = a.bed();
                     var17 = axxxx instanceof class_2743;
                     if (var17 != 0) {
                        class_2743 axxxxx = (class_2743)axxxx;
                        var17 = axxxxx.method_11818();

                        if (var17 != chi.field_1724.method_5628()) {
                           break label659;
                        }
                     }

                     var17 = a.bed() instanceof class_2663;


                     if (var17 != 0) {
                        break label659;
                     }

                     var17 = a.bed() instanceof class_2923;

                     if (var17 != 0) {
                        break label659;
                     }

                     var17 = a.bed() instanceof class_2744;

                     if (var17 != 0) {
                        break label659;
                     }

                     var17 = a.bed() instanceof class_2783;

                     if (var17 != 0) {
                        break label659;
                     }

                     var17 = a.bed() instanceof class_2739;

                     if (var17 != 0) {
                        break label659;
                     }

                     var17 = a.bed() instanceof class_8143;

                     if (var17 != 0) {
                        break label659;
                     }

                     var17 = a.bed() instanceof class_2740;

                     if (var17 != 0) {
                        break label659;
                     }

                     var17 = a.bed() instanceof class_2752;

                     if (var17 != 0) {
                        break label659;
                     }

                     var17 = a.bed() instanceof class_2781;

                     if (var17 != 0) {
                        break label659;
                     }

                     var17 = a.bed() instanceof class_2616;

                     if (var17 != 0) {
                        break label659;
                     }

                     var17 = a.bed() instanceof class_2670;

                     if (var17 != 0) {
                        break label659;
                     }

                     var17 = a.bed() instanceof class_9151;

                     if (var17 != 0) {
                        break label659;
                     }

                     var17 = a.bed() instanceof class_2626;

                     if (var17 != 0) {
                        break label659;
                     }

                     var17 = a.bed() instanceof class_2622;

                     if (var17 != 0) {
                        break label659;
                     }

                     var17 = a.bed() instanceof class_2777;

                     if (var17 != 0) {
                        break label659;
                     }

                     var17 = a.bed() instanceof class_2924;

                     if (var17 != 0) {
                        break label659;
                     }

                     var17 = a.bed() instanceof class_8913;

                     if (var17 != 0) {
                        break label659;
                     }

                     var17 = a.bed() instanceof class_6682;

                     if (var17 != 0) {
                        break label659;
                     }

                     var17 = a.bed() instanceof class_8914;

                     if (var17 != 0) {
                        break label659;
                     }

                     var17 = a.bed() instanceof class_2673;

                     if (var17 != 0) {
                        break label659;
                     }

                     var17 = a.bed() instanceof class_2692;

                     if (var17 != 0) {
                        break label659;
                     }

                     var17 = a.bed() instanceof class_2788;

                     if (var17 != 0) {
                        break label659;
                     }

                     var17 = a.bed() instanceof class_2734;

                     if (var17 != 0) {
                        break label659;
                     }

                     var17 = a.bed() instanceof class_10265;

                     if (var17 != 0) {
                        break label659;
                     }

                     var17 = a.bed() instanceof class_2707;

                     if (var17 != 0) {
                        break label659;
                     }

                     var17 = a.bed() instanceof class_2749;

                     if (var17 != 0) {
                        break label659;
                     }

                     var17 = a.bed() instanceof class_2664;

                     if (var17 != 0) {
                        break label659;
                     }

                     var17 = a.bed() instanceof class_2726;

                     if (var17 != 0) {
                        break label659;
                     }

                     var17 = a.bed() instanceof class_9178;

                     if (var17 != 0) {
                        break label659;
                     }

                     var17 = a.bed() instanceof class_5891;

                     if (var17 != 0) {
                        break label659;
                     }

                     var17 = a.bed() instanceof class_5890;

                     if (var17 != 0) {
                        break label659;
                     }

                     var17 = a.bed() instanceof class_2637;

                     if (var17 != 0) {
                        break label659;
                     }
                  }

                  var16 = a.gsh.dnp();

                  label669: {
                     label615:
                     if (!var16) {
                        boolean var18 = a.bed() instanceof class_6373;

                        if (!var18) {
                           boolean var19 = a.bed() instanceof class_2664;

                           if (!var19) {
                              class_2596 var9 = a.bed();
                              var17 = var9 instanceof class_2743;

                              if (var17 == 0) {
                                 break label615;
                              }

                              class_2743 axxxxxx = (class_2743)var9;
                              var17 = axxxxxx.method_11818();

                              if (var17 != chi.field_1724.method_5628()) {
                                 break label615;
                              }
                           }
                        }
                     }

                     a.gmm(true);
                     a.chj.add((class_2596<class_2602>)a.bed());

                     var17 = a.bed() instanceof class_2708;
                  }


                  if (var17 == 0) {
                     break label659;
                  }

                  a.ejj();
                  a.ags = 0;
                  a.ay = 0;
                  a.bfs = false;
                  a.fbg = false;
                  break label659;
               }

               class_2596 var13 = a.bed();
               var17 = var13 instanceof class_2743;

               if (var17 != 0) {
                  class_2743 axxxxxxx = (class_2743)var13;
                  var17 = axxxxxxx.method_11818();

                  label478:
                  if (var17 == chi.field_1724.method_5628()) {
                     var17 = a.fgh;
                     label475:
                     if (a.fgh) {
                        a.fgh = false;
                        var17 = a.bln.dnp();
                        if (var17 != 0) {
                           a.gmm(true);
                           return;
                        }

                        var17 = a.bqr.dnp();


                        if (var17 != 0) {
                           return;
                        }
                     }

                     var17 = a.bka.dnp();

                     if (var17 != 0) {
                        a.ffc = true;
                        a.gyt = 2;
                     }

                     double var23;
                     var17 = (var23 = a.azb.dnp().intValue() - 0.0) == 0.0 ? 0 : (var23 < 0.0 ? -1 : 1);

                     if (var17 == 0) {
                        var17 = chi.field_1724.method_24828();

                        if (var17 == 0) {
                           break label478;
                        }

                        a.fbg = true;
                        break label478;
                     }

                     var17 = a.ags;


                     if (var17 <= 0) {
                        boolean var20 = a.bir.dnp();
                        if (var20) {
                           ClientSetup.gqy().ccv().gne(BlinkController.class).ckv();
                        }

                        a.ay = 0;
                        a.bfs = true;
                        a.chj.add(axxxxxxx);

                        a.gmm(true);
                     }
                  }
               }
            }

            var17 = a.bed() instanceof class_2664;
         }

         label667: {
            if (var17 == 0) {
               return;
            }

            var21 = a;

            var17 = a.bln.dnp();

            if (var17 != 0) {
               a.gmm(true);
            }

            var21 = a;
         }

         var21.fgh = true;
      }
   }

   private boolean fjj() {
      long a = ModernWatchdog.a ^ 9335513935095L;
      int[] var3 = ClientSetup.abu();
      boolean var10000 = a.gmz.fsc(a.bvl.dnp().longValue());
      var10000 = !var10000;

      return var10000;
   }

   static {
      long var11 = a ^ 112541294680121L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[12];
      int var18 = 0;
      String var17 = "»v\u0017Éñ5\u0090\u0091±aëø\u0007¸\u008cÕ{£\u0003\u0005µ÷\u00192\u0010l\u008b_e\t~DßÂ¹ô~\u001ewtDõÊËlS£=çÒf\u0098°>\u0001,\u0010ê²Ð\"è\u001dål¿Êø\n<×Â\u0080\u0018\nëH5ì<ô_\tÌ\u0083ç ³f\"á¨Åä¥ßñ!0\u008fØ'\u008b\u007fÁ\u0010Ò\u00013ÒÌïÓt-\u0016d\u00adô.\u007f°\u0088(`G\u0083\u0086X\u009d/\u009aï\u008fµ»\u00833.ÜzÜ\u0099`4Åæ VÉ\u0001\u0010þ\u009a8ÔÏúYQµt\np1¸\u0083ÐçÃ¾Ä6L\u0095«Ù\u00880²(I\u0011\u0000ñ0³)\u009düGò\u0096Ñ5á¥xXF5ÿ0\u0012\u009b\u0002¼06ü\"»:\\t6Àñ\u0096-\u001a0\u0019ál\u0016\u0000G¦á\u001d@á\u0085Ì\u0081.õ\u0019w:Å×\u0018\u0010uö»Ë=\u0095\"Â\u00ad7÷Ê|\u0015¢\u009a\u0017\u0001 |²Õ°6j@þø\bR\u008dtù9\u0014Ñó\u001e\u008clteÊ(\n\u009c\u0005\u0087\u0018£åÖû\u008b\u0080».Þ}\u0000µ\u0092\u0015\u0005Ï·\u0014äfÒáÉ4\u00ady\">\u0007h1jïÈy¸þ2åP~ d\u0097ÝþºÒ\u001f\u0081Îm¨næ~±Lµ\u0001.ªßö\u00adf¯\u0084s\u0085Ñ-p\u001e0äüUÚ`\u0083\u00144Ì\u008d\u0083V\u0082\u000eé\u0098TwH\u000eÆZY÷x\u0083û\u0090m÷\u0097-\u001e¡ã\u0016¤\u0013·\u0001{\u0099Ì_F¿¨8";
      int var19 = "»v\u0017Éñ5\u0090\u0091±aëø\u0007¸\u008cÕ{£\u0003\u0005µ÷\u00192\u0010l\u008b_e\t~DßÂ¹ô~\u001ewtDõÊËlS£=çÒf\u0098°>\u0001,\u0010ê²Ð\"è\u001dål¿Êø\n<×Â\u0080\u0018\nëH5ì<ô_\tÌ\u0083ç ³f\"á¨Åä¥ßñ!0\u008fØ'\u008b\u007fÁ\u0010Ò\u00013ÒÌïÓt-\u0016d\u00adô.\u007f°\u0088(`G\u0083\u0086X\u009d/\u009aï\u008fµ»\u00833.ÜzÜ\u0099`4Åæ VÉ\u0001\u0010þ\u009a8ÔÏúYQµt\np1¸\u0083ÐçÃ¾Ä6L\u0095«Ù\u00880²(I\u0011\u0000ñ0³)\u009düGò\u0096Ñ5á¥xXF5ÿ0\u0012\u009b\u0002¼06ü\"»:\\t6Àñ\u0096-\u001a0\u0019ál\u0016\u0000G¦á\u001d@á\u0085Ì\u0081.õ\u0019w:Å×\u0018\u0010uö»Ë=\u0095\"Â\u00ad7÷Ê|\u0015¢\u009a\u0017\u0001 |²Õ°6j@þø\bR\u008dtù9\u0014Ñó\u001e\u008clteÊ(\n\u009c\u0005\u0087\u0018£åÖû\u008b\u0080».Þ}\u0000µ\u0092\u0015\u0005Ï·\u0014äfÒáÉ4\u00ady\">\u0007h1jïÈy¸þ2åP~ d\u0097ÝþºÒ\u001f\u0081Îm¨næ~±Lµ\u0001.ªßö\u00adf¯\u0084s\u0085Ñ-p\u001e0äüUÚ`\u0083\u00144Ì\u008d\u0083V\u0082\u000eé\u0098TwH\u000eÆZY÷x\u0083û\u0090m÷\u0097-\u001e¡ã\u0016¤\u0013·\u0001{\u0099Ì_F¿¨8"
         .length();
      char var16 = '8';
      int var24 = -1;

      label54:
      while (true) {
         String var25 = var17.substring(++var24, var24 + var16);
         int var10001 = -1;

         while (true) {
            byte[] var21 = var13.doFinal(var25.getBytes("ISO-8859-1"));
            String var36 = a(var21).intern();
            switch (var10001) {
               case 0:
                  var20[var18++] = var36;
                  if ((var24 += var16) >= var19) {
                     d = var20;
                     e = new String[12];
                     i = new HashMap(13);
                     Cipher var0;
                     var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var6 = new long[8];
                     int var3 = 0;
                     String var4 = "\u0086ß\u0019m\u008bK`\u0091OÀ¤Áç°ð\u001eÎn©äzª9\u008anâóù\u00929I\u0000A\u000fl \u0087\u008d°*Â\u009b\u0087Ã=Âú:";
                     int var5 = "\u0086ß\u0019m\u008bK`\u0091OÀ¤Áç°ð\u001eÎn©äzª9\u008anâóù\u00929I\u0000A\u000fl \u0087\u008d°*Â\u009b\u0087Ã=Âú:".length();
                     byte var2 = 0;

                     label36:
                     while (true) {
                        var10001 = var2;
                        var2 += 8;
                        byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
                        long[] var28 = var6;
                        var10001 = var3++;
                        long var40 = (var7[0] & 255L) << 56
                           | (var7[1] & 255L) << 48
                           | (var7[2] & 255L) << 40
                           | (var7[3] & 255L) << 32
                           | (var7[4] & 255L) << 24
                           | (var7[5] & 255L) << 16
                           | (var7[6] & 255L) << 8
                           | var7[7] & 255L;
                        byte var43 = -1;

                        while (true) {
                           long var8 = var40;
                           byte[] var10 = var0.doFinal(
                              new byte[]{
                                 (byte)(var8 >>> 56),
                                 (byte)(var8 >>> 48),
                                 (byte)(var8 >>> 40),
                                 (byte)(var8 >>> 32),
                                 (byte)(var8 >>> 24),
                                 (byte)(var8 >>> 16),
                                 (byte)(var8 >>> 8),
                                 (byte)var8
                              }
                           );
                           long var45 = (var10[0] & 255L) << 56
                              | (var10[1] & 255L) << 48
                              | (var10[2] & 255L) << 40
                              | (var10[3] & 255L) << 32
                              | (var10[4] & 255L) << 24
                              | (var10[5] & 255L) << 16
                              | (var10[6] & 255L) << 8
                              | var10[7] & 255L;
                           switch (var43) {
                              case 0:
                                 var28[var10001] = var45;
                                 if (var2 >= var5) {
                                    g = var6;
                                    h = new Integer[8];
                                    return;
                                 }
                                 break;
                              default:
                                 var28[var10001] = var45;
                                 if (var2 < var5) {
                                    continue label36;
                                 }

                                 var4 = "á|°GÒ\u0099Ê\u0097\\\u008d[\u0093ï\u000b;\u0019";
                                 var5 = "á|°GÒ\u0099Ê\u0097\\\u008d[\u0093ï\u000b;\u0019".length();
                                 var2 = 0;
                           }

                           byte var34 = var2;
                           var2 += 8;
                           var7 = var4.substring(var34, var2).getBytes("ISO-8859-1");
                           var28 = var6;
                           var10001 = var3++;
                           var40 = (var7[0] & 255L) << 56
                              | (var7[1] & 255L) << 48
                              | (var7[2] & 255L) << 40
                              | (var7[3] & 255L) << 32
                              | (var7[4] & 255L) << 24
                              | (var7[5] & 255L) << 16
                              | (var7[6] & 255L) << 8
                              | var7[7] & 255L;
                           var43 = 0;
                        }
                     }
                  }

                  var16 = var17.charAt(var24);
                  break;
               default:
                  var20[var18++] = var36;
                  if ((var24 += var16) < var19) {
                     var16 = var17.charAt(var24);
                     continue label54;
                  }

                  var17 = "\u0092~X\u0015\u0014·ÔeÔ¿\u0083&\u001e\u0089à'-I7Âv>æ 0§÷E\u007fI\u0013¥\u0082«Zöÿ\u0007\u001c\u0007{ï¯÷fÍ\u000eò\u0019ÖþÕ\u0098\u000b\u008aÙ^DyK\u000b\u0006]tÑ\u009e>\u0081!TÒ\u0090î";
                  var19 = "\u0092~X\u0015\u0014·ÔeÔ¿\u0083&\u001e\u0089à'-I7Âv>æ 0§÷E\u007fI\u0013¥\u0082«Zöÿ\u0007\u001c\u0007{ï¯÷fÍ\u000eò\u0019ÖþÕ\u0098\u000b\u008aÙ^DyK\u000b\u0006]tÑ\u009e>\u0081!TÒ\u0090î"
                     .length();
                  var16 = 24;
                  var24 = -1;
            }

            var25 = var17.substring(++var24, var24 + var16);
            var10001 = 0;
         }
      }
   }

   private static int b(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 10393;
      if (h[var3] == null) {
         byte[] var4 = new byte[]{
            (byte)(var1 >>> 56),
            (byte)(var1 >>> 48),
            (byte)(var1 >>> 40),
            (byte)(var1 >>> 32),
            (byte)(var1 >>> 24),
            (byte)(var1 >>> 16),
            (byte)(var1 >>> 8),
            (byte)var1
         };
         long var5 = g[var3];
         byte[] var7 = new byte[]{
            (byte)(var5 >>> 56),
            (byte)(var5 >>> 48),
            (byte)(var5 >>> 40),
            (byte)(var5 >>> 32),
            (byte)(var5 >>> 24),
            (byte)(var5 >>> 16),
            (byte)(var5 >>> 8),
            (byte)var5
         };
         Long var8 = Thread.currentThread().threadId();
         Object[] var9 = (Object[])i.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               i.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("cc/astralis/ModernWatchdog", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         h[var3] = var15;
      }

      return h[var3];
   }

   private static int b(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = b(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static CallSite b(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("b".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("cc/astralis/ModernWatchdog" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }
}
