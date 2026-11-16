package cc.astralis;

import imgui.type.ImFloat;
import java.awt.Color;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1041;
import net.minecraft.class_1268;
import net.minecraft.class_1294;
import net.minecraft.class_1297;
import net.minecraft.class_1299;
import net.minecraft.class_1747;
import net.minecraft.class_1792;
import net.minecraft.class_1799;
import net.minecraft.class_2248;
import net.minecraft.class_2338;
import net.minecraft.class_2350;
import net.minecraft.class_238;
import net.minecraft.class_239;
import net.minecraft.class_243;
import net.minecraft.class_2879;
import net.minecraft.class_304;
import net.minecraft.class_310;
import net.minecraft.class_315;
import net.minecraft.class_3532;
import net.minecraft.class_3965;
import net.minecraft.class_4587;
import net.minecraft.class_638;
import net.minecraft.class_746;
import net.minecraft.class_239.class_240;

public class Scaffold extends guu {
   private final adu aqg;
   private final adu bqc;
   private final bes gju;
   private final gbp fqo;
   private final gbp coa;
   public final gbp cgy;
   private final gbp bdd;
   private final gbp cdk;
   private final gbp bn;
   private final gbp euz;
   private final gbp hge;
   private final bes bjk;
   private final bes exn;
   private final gbp fpf;
   public final gbp bza;
   private final gbp epf;
   private final cyx gdh;
   public final gbp gez;
   private final cyx cuw;
   private final gbp czw;
   private final gbp gso;
   private final adu end;
   private final gbp dhl;
   private final adu fdv;
   private final gbp euu;
   private final bes grx;
   private final gbp flo;
   private final gbp esl;
   private final gbp ggy;
   private final adu gkz;
   private final bes ewl;
   private final bes dih;
   private final bes ezy;
   private final bes ael;
   public final adu hfi;
   private final gbp aof;
   private final gbp dgy;
   private final gbp aba;
   private final gbp cci;
   private final bes bld;
   private final bes dgj;
   private aqy hba;
   public int gnd;
   public int btn;
   public int dzc;
   public int cj;
   public double ebp;
   private float[] fub;
   public boolean fwx;
   private boolean hci;
   public int ciu;
   private int btd;
   private int fmm;
   private boolean dsc;
   private final cbm dsa;
   private class_2338 adx;
   private float dku;
   private float dxn;
   private boolean awk;
   public final cbm eat;
   private float[] gpi;
   private int hek;
   private aqy SpeedMush;
   private boolean hjm;
   private static int[] bd;
   private static final long a = 109583705240673L;
   private static final String[] g;
   private static final String[] h;
   private static final Map i = new HashMap(13);
   private static final long[] p;
   private static final Integer[] q;
   private static final Map r;
   private static final long v;

   public Scaffold() {
      long a = Scaffold.a ^ 12973103487419L;
      super(bfm.MOVEMENT);
      int[] var10000 = ClientSetup.abu();
      String[] var169 = new String[4];
      var169[0] = "Normal";
      var169[1] = "Modern Watchdog";
      var169[2] = "Telly";
      var169[3] = "Snap";
      a.aqg = new adu("Scaffold Mode", "Normal", var169);
      String[] var171 = new String[2];
      var171[0] = "Update";
      var171[1] = "Click";
      a.bqc = new adu("Place Mode", "Update", var171);
      a.gju = new bes("Start Placing After", 5.0F, 0.0F, 9.0F, 1.0F);
      a.fqo = new gbp("Swing Hand", true);
      a.coa = new gbp("Alternated Scaffold Order", false);
      a.cgy = new gbp("SafeWalk", true);
      a.bdd = new gbp("Same Y", false);
      a.cdk = new gbp("Anal Boob", false);
      a.bn = new gbp("Don't place in same tick", true);
      a.euz = new gbp("Jump", false);
      int[] var3 = var10000;
      a.hge = new gbp("Don't jump diagonally", false);
      a.bjk = new bes("Jump Every", 1.0F, 1.0F, 30.0F, 1.0F);
      a.exn = new bes("Place Delay", 0.0F, 0.0F, 10.0F, 1.0F);
      a.fpf = new gbp("Sprint On Jump", false);
      a.bza = new gbp("Sprint", false);
      a.epf = new gbp("Change FOV", false);
      a.gdh = new cyx("Sprint Mode", new ScaffoldVanilla2(a), new ScaffoldModernWatchdog(a), new ScaffoldIntave(a));
      a.gez = new gbp("Tower", false);
      a.cuw = new cyx("Tower Mode", new ScaffoldWatchdogVanilla(a), new ScaffoldVanilla(a));
      a.czw = new gbp("No Off Hand check", true);
      a.gso = new gbp("Block Counter", true);
      String[] var161 = new String[2];
      var161[0] = "Astralis";
      var161[1] = "Adjust";
      a.end = new adu("Block Counter Mode", "Astralis", var161);
      a.dhl = new gbp("Block ESP", true);
      String[] var163 = new String[2];
      var163[0] = "Accurate";
      var163[1] = "Prediction";
      a.fdv = new adu("Block ESP Mode", "Accurate", var163);
      a.euu = new gbp("Sneak", false);
      a.grx = new bes("Sneak Every", 1.0F, 1.0F, 30.0F, 1.0F);
      a.flo = new gbp("Autoswap to next stack", true);
      a.esl = new gbp("Rotations", true);
      a.ggy = new gbp("180 on jump key", false);
      String[] var165 = new String[4];
      var165[0] = "Off";
      var165[1] = "Normal";
      var165[2] = "Advanced";
      var165[3] = "MC";
      a.gkz = new adu("Ray Cast Mode", "Off", var165);
      a.ewl = new bes("Min Yaw Speed", 120.0F, 1.0F, 180.0F, 1.0F);
      a.dih = new bes("Max Yaw Speed", 120.0F, 1.0F, 180.0F, 1.0F);
      a.ezy = new bes("Min Pitch Speed", 120.0F, 1.0F, 180.0F, 1.0F);
      a.ael = new bes("Max Pitch Speed", 120.0F, 1.0F, 180.0F, 1.0F);
      String[] var168 = new String[6];
      var168[0] = "Basic";
      var168[1] = "Edge";
      var168[2] = "Modern Watchdog";
      var168[3] = "Modern Watchdog 2";
      var168[4] = "God Bridge";
      var168[5] = "Intave";
      a.hfi = new adu("Rotation Mode", "Basic", var168);
      a.aof = new gbp("Brute Force Yaw", true);
      a.dgy = new gbp("Brute Force Pitch", true);
      a.aba = new gbp("Spoof Ray Cast", false);
      a.cci = new gbp("Stable", false);
      a.bld = new bes("Yaw Value", 180.0F, 0.0F, 360.0F, 1.0F);
      a.dgj = new bes("Pitch Value", 81.7F, -90.0F, 90.0F, 0.1F);
      a.ciu = -1;
      a.dsa = new cbm();
      a.awk = false;
      a.eat = new cbm();
      a.gpi = null;
      a.hek = 0;
      ffn[] var4 = new ffn[]{
         a.aqg,
         a.coa,
         a.gju.bih(() -> {
            long ax = Scaffold.a ^ 31396819258814L;
            short var10001x = 4652;
            long var10002x = 3128135912116734243L ^ ax;
            return a.aqg.emb("Telly");
         }),
         a.bqc,
         a.exn,
         a.fqo,
         null,
         null,
         null,
         null,
         null,
         null,
         null,
         null,
         null,
         null,
         null,
         null,
         null,
         null,
         null,
         null,
         null,
         null,
         null,
         null,
         null,
         null,
         null,
         null,
         null,
         null,
         null,
         null,
         null,
         null,
         null,
         null,
         null,
         null,
         null
      };
      var4[6] = a.bdd;
      var4[7] = a.epf;
      var4[8] = a.bn;
      var4[9] = a.cdk.bih(a.bdd::dnp);
      var4[10] = a.euz;
      var4[11] = a.hge.bih(a.euz::dnp);
      var4[12] = a.bjk.bih(a.euz::dnp);
      var4[13] = a.bza;
      var4[14] = a.fpf;
      var4[15] = a.gdh.bih(a.bza::dnp);
      var4[16] = a.gez;
      var4[17] = a.cuw.bih(a.gez::dnp);
      var4[18] = a.czw;
      var4[19] = a.gso;
      var4[20] = a.end.bih(a.gso::dnp);
      var4[21] = a.dhl;
      var4[22] = a.fdv.bih(a.dhl::dnp);
      var4[23] = a.euu;
      var4[24] = a.grx.bih(a.euu::dnp);
      var4[25] = a.gkz;
      var4[26] = a.flo;
      var4[27] = a.esl;
      var4[28] = a.ggy.bih(a.esl::dnp);
      var4[29] = a.hfi.bih(a.esl::dnp);
      var4[30] = a.aof.bih(() -> {
         long ax = Scaffold.a ^ 13125369025572L;
         int[] var3x = ClientSetup.abu();
         short var10001x = 18203;
         long var10002x = 8473884395555587481L ^ ax;
         boolean var10000x = a.hfi.emb("Intave");
         var10000x = !var10000x;

         return var10000x;
      });
      var4[31] = a.dgy.bih(() -> {
         long ax = Scaffold.a ^ 88191224945843L;
         int[] var3x = ClientSetup.abu();
         short var10001x = 18203;
         long var10002x = 8473825255495224590L ^ ax;
         boolean var10000x = a.hfi.emb("Intave");
         var10000x = !var10000x;

         return var10000x;
      });
      var4[32] = a.aba.bih(() -> {
         long ax = Scaffold.a ^ 33248483775458L;
         int[] var3x = ClientSetup.abu();
         short var10001x = 17758;
         long var10002x = 5268222821387649071L ^ ax;
         boolean var10000x = a.hfi.emb("Modern Watchdog");
         if (!var10000x) {
            return false;
         }

         var10000x = a.esl.dnp();

      });
      var4[33] = a.cci.bih(() -> {
         long ax = Scaffold.a ^ 57955359090107L;
         int[] var3x = ClientSetup.abu();
         short var10001x = 17758;
         long var10002x = 5268180457919166070L ^ ax;
         boolean var10000x = a.hfi.emb("Modern Watchdog");
         if (!var10000x) {
            return false;
         }

         var10000x = a.esl.dnp();

      });
      var4[34] = a.ewl.bih(a.esl::dnp);
      var4[35] = a.dih.bih(a.esl::dnp);
      var4[36] = a.ezy.bih(a.esl::dnp);
      var4[37] = a.ael.bih(a.esl::dnp);
      var4[38] = a.bld.bih(a.esl::dnp);
      var4[39] = a.dgj.bih(a.esl::dnp);
      var4[40] = a.cgy;
      a.bfi(var4);
   }

   @Override
   public void auj() {
      Scaffold var5;
      label50: {
         int[] var3;
         label47: {
            long a = Scaffold.a ^ 115192212698534L;
            var3 = ClientSetup.abu();
            Object var10000 = chi.field_1724;
            if (chi.field_1724 != null) {
               a.cj = chi.field_1724.method_31548().method_67532();
               a.ebp = chi.field_1724.method_31478();
               a.awk = true;
               a.eat.glr();
               a.gnd = 0;
               a.hci = false;
               var4 = a.bza.dnp();

               if (!var4) {
                  chi.field_1690.method_42450().method_41748(false);
                  chi.field_1724.method_5728(false);
                  chi.field_1690.field_1867.method_23481(false);
               }
            }

            var5 = a;

            var10000 = a.esl.dnp();

            var4 = (Boolean)var10000;
         }

         if (var4) {
            var5 = a;

            if (a.epf.dnp()) {
               chi.field_1690.method_42454().method_41748(0.0);
            }
         }

         a.fmm = 0;
         a.ciu = a.cj;
         a.btd = -1;
         var5 = a;
      }

      var5.auj();
   }

   @Override
   public void frg() {
      long a = Scaffold.a ^ 105951340897013L;
      int[] var3 = ClientSetup.abu();
      Object var10000 = chi.field_1724;
      if (chi.field_1724 != null) {
         chi.field_1724.method_31548().method_61496(a.cj);
      }

      var10000 = a.cdk.dnp();

      boolean var4 = (Boolean)var10000;
      if (var4) {
         chi.field_1690.field_1904.method_23481(false);
      }

      var4 = a.esl.dnp();

      label43:
      if (var4) {
         var4 = a.epf.dnp();

         if (var4) {
            chi.field_1690.method_42454().method_41748(1.0);
         }
      }

      a.ciu = -1;
      var4 = false;

      dqq.axd(var4);
      dqq.cms(a.fub, crg.gj(a.ewl.dnp().floatValue(), a.dih.dnp().floatValue()), crg.gj(a.ezy.dnp().floatValue(), a.ael.dnp().floatValue()));
      super.frg();
   }

   @gdz
   public void dig(etk event) {
      long ax = Scaffold.a ^ 114416202490459L;
      int[] var4 = ClientSetup.abu();
      if (!a.bza.dnp()) {
         chi.field_1724.method_5728(false);
      }

      chi.field_1690.field_1867.method_23481(false);
   }

   @gdz
   public void cyi(fnt event) {
      int[] var4;
      Scaffold var6;
      label107: {
         label108: {
            label109: {
               long ax;
               label110: {
                  ax = Scaffold.a ^ 11603565930606L;
                  var4 = ClientSetup.abu();
                  Object var10000 = a.cud();
                  if (var10000 != gpy.POST) {
                     break label110;
                  }

                  var10000 = a.coa.dnp();

                  var5 = (Boolean)var10000;

                  if (var5) {
                     break label109;
                  }

                  a.fub = a.dba();
                  break label109;
               }

               var5 = a.bqc.emb("Click");

               if (var5) {
                  a.gsj();
               }
            }

            var6 = a;

            var5 = a.coa.dnp();
         }

         if (!var5) {
            return;
         }

         var6 = a;
      }

      double var8;
      label79: {
         label111: {
            label77: {
               label112: {
                  var7 = a.bdd.dnp();
                  if (var7 == 0) {
                     var7 = ClientSetup.gqy().aws().diy(Speed.class).dsv();

                     if (var7 == 0) {
                        break label112;
                     }
                  }

                  var7 = chi.field_1690.field_1903.method_1434();


                  if (var7 == 0) {
                     break label111;
                  }
               }

               var7 = a.fwx;
            }

            if (var7 != 0) {
               break label111;
            }

            var7 = chi.field_1724.method_31478();

            var8 = var7;
            break label79;
         }

         var8 = a.ebp;
      }

      var6.hba = amg.asc((int)var8);
      a.fub = a.dba();
   }

   @gdz
   public void clt(fxx event) {
      long ax;
      int[] axx;
      boolean var9;
      label160: {
         label163: {
            ax = Scaffold.a ^ 16075841959500L;
            int[] var10000 = ClientSetup.abu();
            chi.field_1690.field_1886.method_23481(false);
            chi.field_1690.field_1904.method_23481(false);
            axx = var10000;
            var9 = a.gez.dnp();
            if (!var9) {
               break label163;
            }

            var9 = chi.field_1690.field_1903.method_1434();


            if (var9) {
               var9 = true;
               break label160;
            }
         }

         var9 = false;
      }

      boolean axxx;
      label149: {
         label164: {
            axxx = var9;
            var9 = a.bza.dnp();
            if (!var9) {
               break label164;
            }

            var9 = evd.dbj();


            if (var9) {
               var9 = true;
               break label149;
            }
         }

         var9 = false;
      }

      label165: {
         boolean axxxx;
         axxxx = var9;
         var9 = a.fpf.dnp();
         label137:
         if (var9) {
            var9 = chi.field_1690.field_1903.method_1434();

            if (var9) {
               var9 = a.bza.dnp();

               if (var9) {
                  chi.field_1724.method_5728(evd.dbj());
               }
            }
         }

         var12 = a.fpf.dnp();

         var9 = var12;

         if (!var9 && !axxx) {
            chi.field_1690.field_1867.method_23481(axxxx);
            chi.field_1724.method_5728(axxxx);
         }

         var12 = a.ezy.dnp();
      }

      label167: {
         float axxxxx = crg.gj(((ImFloat)var12).floatValue(), a.ael.dnp().floatValue());
         float axxxxxx = crg.gj(a.ewl.dnp().floatValue(), a.dih.dnp().floatValue());
         var9 = a.esl.dnp();
         if (var9) {
            float var19;
            label170: {
               var14 = a.fub;
               int var10002 = 17758;
               int var10001 = a.hfi.emb("Modern Watchdog");
               if (var10001 == 0) {
                  var19 = axxxxxx;
                  break label170;
               }

               var10001 = hjr;

               var10002 = evd.bpi();
               var10002 = var10002 != 0 ? 1 : 2;

               short var17;
               if (var10001 < var10002) {
                  var17 = 180;
               } else {
                  var17 = evd.bpi();
                  if (var17 != 0) {
                     var17 = 60;
                  } else {
                     var17 = 0;
                  }
               }

               var19 = var17;
            }

            dqq.cms(var14, var19, axxxxx);
         }

         var15 = a;

         var9 = a.bqc.emb("Update");

         if (!var9) {
            return;
         }

         var15 = a;
      }

      var15.gsj();
   }

   @gdz
   public void dnw(eih event) {
      long ax = Scaffold.a ^ 130677418956617L;
      int[] var4 = ClientSetup.abu();
      boolean var10000 = chi.field_1690.field_1903.method_1434();
      if (var10000) {
         a.dsa.glr();
      }

      var10000 = a.dsa.fsc(v);

      if (!var10000) {
         a.ebp = chi.field_1724.method_31478();
      }

      var10000 = a.bdd.dnp();

      label101: {
         label94:
         if (var10000) {
            var10000 = a.cdk.dnp();

            if (var10000) {
               var10000 = a.bza.dnp();

               if (var10000) {
                  if (chi.field_1724.method_24828()) {
                  }

                  int var8;
                  label85: {
                     label104: {
                        float var5 = a.dfv();
                        float var10001 = chi.field_1724.method_36454() - 110.0F;
                        bpa.bez(var5 + " expected: " + var10001);
                        var6 = chi.field_1724;
                        float var11;
                        var8 = (var11 = Math.abs(chi.field_1724.method_36454() - 110.0F - a.dfv()) - 30.0F) == 0.0F ? 0 : (var11 < 0.0F ? -1 : 1);
                        if (var8 > 0) {
                           break label104;
                        }

                        var8 = evd.dbj();


                        if (var8 != 0) {
                           var8 = 1;
                           break label85;
                        }
                     }

                     var8 = 0;
                  }

                  var6.method_5728((boolean)var8);
               }
            }
         }

         var7 = a;

         var10000 = a.fwx;

         if (var10000) {
            if (hjr == 8) {
               a.fwx = false;
            }
         }

         a.fuf();
         var7 = a;
      }

      var7.eth();
   }

   @gdz
   public void dhz(etk event) {
      a.boi(a);
   }

   @gdz
   public void czx(bsm event) {
      long ax = Scaffold.a ^ 15714748086590L;
      int[] var4 = ClientSetup.abu();
      Scaffold var10000 = a;
      if (!a.dhl.dnp()) {
         return;
      }

      var10000 = a;

      label35: {
         if (var10000.hba == null) {
            break label35;
         }

         var10000 = a;

         var10000.adx = a.hba.dnc();
      }

      class_4587 var5 = a.bus();
      class_238 var10001 = new class_238(a.fdv.emb("Accurate") ? a.adx : (evd.dbj() ? a.adx.method_10093(chi.field_1724.method_5755()) : a.adx.method_10084()));
      Color var10002 = ClientSetup.gqy().deo();
      bqf.hjf(var5, var10001, var10002, 50);
   }

   @gdz
   public void bjy(ctt event) {
      long ax = Scaffold.a ^ 105764698656053L;
      int[] axx = ClientSetup.abu();
      if (a.gso.dnp()) {
         float axxx;
         float axxxx;
         String axxxxx;
         int var10000;
         class_1041 axxxxxx = chi.method_22683();
         axxx = axxxxxx.method_4486() / 2.0F;
         axxxx = axxxxxx.method_4502() / 2.0F + 5.0F;
         axxxxx = String.valueOf(a.dtm());
         String var9 = a.end.dnp();
         byte var10 = -1;
         var10000 = var9.hashCode();
         label48:
         switch (var10000) {
            case 1956520879:
               var10000 = var9.equals("Adjust");

               if (var10000 == 0) {
                  break;
               }

               var10 = 0;
               break;
            case -268477211:
               var10000 = var9.equals("Astralis");

               if (var10000 != 0) {
                  var10 = 1;
               }
         }

         var10000 = var10;

         switch (var10000) {
            case 0:
               float axxxxxxxxxxxx = acy.eq("Blocks");
               float axxxxxxxxxxxxx = ahh.eq(axxxxx);
               float axxxxxxxxxxxxxx = axxx - (axxxxxxxxxxxxx + 2.0F + axxxxxxxxxxxx) / 2.0F;
               ahh.aof(axxxxx, axxxxxxxxxxxxxx, axxxx, ClientSetup.gqy().deo());
               acy.aof("Blocks", axxxxxxxxxxxxxx + axxxxxxxxxxxxx + 2.0F, axxxx, Color.white);
               break;
            case 1:
               float axxxxxxx = ety.eq("Blocks");
               float axxxxxxxx = bsf.eq(axxxxx);
               float axxxxxxxxx = axxxxxxxx + 2.0F + axxxxxxx;
               float axxxxxxxxxx = axxx - axxxxxxxxx / 2.0F;
               float axxxxxxxxxxx = axxxx + 4.0F;
               float var19 = axxxxxxxxxx - 3.0F;
               float var29 = axxxxxxxxx + 6.0F;
               dmp.cpp(var19, axxxx, var29, 15.0F, 3.0F, dec.ceu(Color.black, 150));
               bsf.aof(axxxxx, axxxxxxxxxx, axxxxxxxxxxx, ClientSetup.gqy().deo());
               ety.aof("Blocks", axxxxxxxxxx + axxxxxxxx + 2.0F, axxxxxxxxxxx, Color.white);
         }
      }
   }

   private void gsj() {
      long a = Scaffold.a ^ 1645893413115L;
      int[] var10000 = ClientSetup.abu();
      fux[] ax = amg.fww(a.czw.dnp());
      int[] axx = var10000;
      int var7 = ax.length;
      if (var7 == 0) {
         return;
      }

      Arrays.sort(ax, (axxx, axxxx) -> {
         int axx = amg.dzc(axxx);
         int axxx = amg.dzc(axxxx);
         return Integer.compare(axxx, axx);
      });
      var7 = a.flo.dnp();

      var7 = var7 != 0 ? (int)crg.gj(0.0F, ax.length) : 0;

      int axxx = var7;
      fux axxxx = ax[axxx];
      if (axxxx.gee() == class_1268.field_5808) {
         chi.field_1724.method_31548().method_61496(axxxx.aqk());
      }

      int var10001 = amg.dul(0.0, -1.0, 0.0).method_26215();
      var10001 = var10001 != 0 ? ++a.btn : 0;

      a.btn = var10001;
      Scaffold var8 = a;
      if (!a.coa.dnp()) {
         label203: {
            label217: {
               label201: {
                  label218: {
                     var10001 = a.bdd.dnp();
                     if (var10001 == 0) {
                        var10001 = ClientSetup.gqy().aws().diy(Speed.class).dsv();

                        if (var10001 == 0) {
                           break label218;
                        }
                     }

                     var10001 = chi.field_1690.field_1903.method_1434();


                     if (var10001 == 0) {
                        break label217;
                     }
                  }

                  var10001 = a.fwx;
               }

               if (var10001 != 0) {
                  break label217;
               }

               var10001 = chi.field_1724.method_31478();

               var13 = var10001;
               break label203;
            }

            var13 = a.ebp;
         }

         a.hba = amg.asc((int)var13);
      }

      var8 = a;

      if (var8.hba == null) {
         return;
      }

      var8 = a;

      label220: {
         var9 = var8.btn;
         var10001 = a.exn.dnp().intValue();
         if (var9 <= var10001) {
            return;
         }

         var9 = a.btd;

         var10001 = chi.field_1724.field_6012;

         if (var9 == var10001) {
            var9 = a.bn.dnp();

            if (var9 != 0) {
               return;
            }
         }

         var9 = a.dks();
      }

      label158: {
         label157: {
            label222: {
               if (var9 == 0) {
                  return;
               }

               chi.field_1761.method_2896(chi.field_1724, axxxx.gee(), new class_3965(a.dri(), a.hba.aoc(), a.hba.dnc(), false));

               var9 = a.fqo.dnp();

               if (var9 == 0) {
                  break label157;
               }

               chi.field_1724.method_6104(axxxx.gee());
            }

            break label158;
         }

         gix.dsd(new class_2879(axxxx.gee()));
      }

      var10 = a;
      label132:
      if (a.gez.dnp()) {
         var10 = a;

         label138:
         if (a.cuw.cmt("Watchdog Vertical")) {
            class_310 var11 = chi;
            if (!chi.field_1690.field_1903.method_1434()) {
               break label138;
            }

            var11 = chi;

            var11.field_1761
               .method_2896(
                  chi.field_1724,
                  axxxx.gee(),
                  new class_3965(
                     a.dri(), a.hba.aoc(), new class_2338(a.hba.dnc().method_10263() - 1, a.hba.dnc().method_10264(), a.hba.dnc().method_10260()), false
                  )
               );
         }
      }

      a.gnd++;
      a.fmm++;
      a.btn = 0;
      var10 = a;

      var10.btd = chi.field_1724.field_6012;
   }

   public static float fuk(float f) {
      long ax = Scaffold.a ^ 84226634279081L;
      int[] var10000 = ClientSetup.abu();
      a %= 90.0F;
      int[] var3 = var10000;
      float var7;
      int var5 = (var7 = a - 45.0F) == 0.0F ? 0 : (var7 < 0.0F ? -1 : 1);
      if (var5 >= 0) {
         a -= 90.0F;
      }


      float var8;
      var5 = (var8 = a - -45.0F) == 0.0F ? 0 : (var8 < 0.0F ? -1 : 1);

      if (var5 < 0) {
         a += 90.0F;
      }

      return a;
   }

   private float[] dba() {
      long a;
      int[] ax;
      float var10000;
      short var10001;
      label985: {
         a = Scaffold.a ^ 139167474333626L;
         ax = ClientSetup.abu();
         var10000 = chi.field_1724.method_36454() - a.bld.dnp().floatValue();
         var10001 = chi.field_1690.field_1849.method_1434();
         if (var10001 != 0) {
            var10001 = (short)14237;
            var10001 = 45;
            break label985;
         }

         var10001 = chi.field_1690.field_1913.method_1434();

         if (var10001 != 0) {
            var10001 = (short)2257;
            var10001 = -45;
            break label985;
         }

         var10001 = chi.field_1690.field_1881.method_1434();

         if (var10001 != 0) {
            var10001 = (short)24245;
            var10001 = 180;
         } else {
            var10001 = 0;
         }
      }

      float axx = var10000 + var10001;
      Object var51 = a.hba;
      if (a.hba != null) {
         a.hil = a.hba;
      }

      var51 = a.dgj.dnp();

      float axxx;
      axxx = ((ImFloat)var51).floatValue();
      var52 = evd.dbj();
      label970:
      if (!var52) {
         var10001 = (short)17493;
         var52 = a.hfi.emb("Modern Watchdog");

         if (var52) {
            return new float[]{axx, axxx};
         }
      }

      var10001 = (short)17758;
      var52 = a.hfi.emb("Modern Watchdog");

      float axxxx;
      label986: {
         if (var52) {
            class_243 axxxxx = new class_243(a.adx.method_10263() + 0.5, a.adx.method_10264(), a.adx.method_10260() + 0.5);
            double axxxxxx = evd.fgd();
            double axxxxxxx = -Math.sin(axxxxxx);
            double axxxxxxxx = Math.cos(axxxxxx);
            double axxxxxxxxx = axxxxx.field_1352 - chi.field_1724.method_23317();
            double axxxxxxxxxx = axxxxx.field_1350 - chi.field_1724.method_23321();
            double var141;
            int var53 = (var141 = axxxxxxx * axxxxxxxxxx - axxxxxxxx * axxxxxxxxx - 0.0) == 0.0 ? 0 : (var141 < 0.0 ? -1 : 1);
            var53 = var53 > 0 ? 1 : 0;

            label959: {
               boolean axxxxxxxxxxx = (boolean)var53;
               float axxxxxxxxxxxx = fuk(
                  chi.field_1724.method_36454()
                     - (float)Math.toDegrees(Math.atan2(chi.field_1724.field_3913.method_3128().field_1343, chi.field_1724.field_3913.method_3128().field_1342))
               );
               float axxxxxxxxxxxxx = 260.0F;
               var10000 = chi.field_1724.method_36454();
               var10001 = evd.bpi();
               if (var10001 != 0) {
                  var86 = -135.0F;
                  break label959;
               }

               var10001 = axxxxxxxxxxx;

               var86 = var10001 == 0 ? axxxxxxxxxxxxx : -axxxxxxxxxxxxx;
            }

            axxxx = var10000 + var86;
            break label986;
         }

         label988: {
            var10000 = chi.field_1724.method_36454() - a.bld.dnp().floatValue();
            var87 = chi.field_1690.field_1849.method_1434();
            if (var87 != 0) {
               var87 = 45;
               break label988;
            }

            var87 = chi.field_1690.field_1913.method_1434();

            if (var87 != 0) {
               var87 = -45;
               break label988;
            }

            var87 = chi.field_1690.field_1881.method_1434();

            if (var87 != 0) {
               var87 = 180;
            } else {
               var87 = 0;
            }
         }

         axxxx = var10000 + var87;
      }

      label940: {
         float axxxxxxxxxxx;
         label939: {
            axxxxxxxxxxx = chi.field_1724.method_36454() + 45.0F;
            byte var56 = a.erx();
            if (var56 != 0) {
               float axxxxxxxxxxxx;
               float axxxxxxxxxxxxx;
               label934: {
                  label933: {
                     label990: {
                        boolean axxxxxxxxxxxxxx = false;
                        axxxxxxxxxxxxx = axxxx;
                        axxxxxxxxxxxx = axxx;
                        var57 = a.aof.dnp();
                        if (var57 == 0) {
                           var57 = a.dgy.dnp();

                           if (var57 == 0) {
                              break label990;
                           }
                        }

                        var57 = a.hfi.emb("Intave");


                        if (var57 == 0) {
                           var58 = a.hba;

                           if (a.hba != null) {
                              var57 = a.dgy.dnp();
                              label898:
                              if (var57 != 0) {
                                 float axxxxxxxxxxxxxxx = 90.0F;

                                 while (axxxxxxxxxxxxxxx > 30.0F) {
                                    var57 = axxxxxxxxxxxxxx;

                                    if (axxxxxxxxxxxxxx != 0) {
                                       break;
                                    }

                                    label913: {
                                       byte var59 = bfc.gto(a.hba.aoc(), a.hba.dnc(), true, 5.0F, axxxx, axxxxxxxxxxxxxxx);
                                       if (var59 == 0) {
                                          break label913;
                                       }

                                       axxxxxxxxxxxxx = axxxx;
                                       axxxxxxxxxxxx = axxxxxxxxxxxxxxx;
                                       var59 = 1;

                                       axxxxxxxxxxxxxx = (boolean)var59;
                                       a.gpi = new float[]{axxxxxxxxxxxxx, axxxxxxxxxxxx};
                                       a.hek = 0;
                                    }

                                    short var116 = chi.field_1724.method_6059(class_1294.field_5904);
                                    if (var116 != 0) {
                                       var116 = 29868;
                                       var116 = 60;
                                    } else {
                                       var116 = 17228;
                                       var116 = 80;
                                    }

                                    axxxxxxxxxxxxxxx -= axxxxxxxxxxxxxxx > var116 ? 0.5F : 2.0F;
                                 }
                              }

                              var57 = a.aof.dnp();


                              if (var57 != 0) {
                                 var57 = axxxxxxxxxxxxxx;

                                 if (axxxxxxxxxxxxxx == 0) {
                                    float axxxxxxxxxxxxxxx = 0.0F;

                                    label888:
                                    do {
                                       float var142;
                                       int var60 = (var142 = axxxxxxxxxxxxxxx - 180.0F) == 0.0F ? 0 : (var142 < 0.0F ? -1 : 1);

                                       label885:
                                       while (true) {
                                          if (var60 > 0) {
                                             break label888;
                                          }

                                          var57 = axxxxxxxxxxxxxx;

                                          if (axxxxxxxxxxxxxx != 0) {
                                             break label888;
                                          }

                                          float axxxxxxxxxxxxxxxx = -1.0F;

                                          while (true) {
                                             float var143;
                                             int var61 = (var143 = axxxxxxxxxxxxxxxx - 1.0F) == 0.0F ? 0 : (var143 < 0.0F ? -1 : 1);

                                             label880:
                                             while (true) {
                                                if (var61 > 0) {
                                                   break label885;
                                                }

                                                var60 = axxxxxxxxxxxxxx;

                                                if (axxxxxxxxxxxxxx != 0) {
                                                   break label885;
                                                }

                                                float axxxxxxxxxxxxxxxxx = axxxx + axxxxxxxxxxxxxxx * axxxxxxxxxxxxxxxx;
                                                float axxxxxxxxxxxxxxxxxx = 85.0F;

                                                while (true) {
                                                   if (!(axxxxxxxxxxxxxxxxxx > 30.0F)) {
                                                      break label880;
                                                   }

                                                   var61 = axxxxxxxxxxxxxx;

                                                   if (axxxxxxxxxxxxxx != 0) {
                                                      break label880;
                                                   }

                                                   var61 = bfc.gto(a.hba.aoc(), a.hba.dnc(), true, 5.0F, axxxxxxxxxxxxxxxxx, axxxxxxxxxxxxxxxxxx);

                                                   label875: {
                                                      if (var61 == 0) {
                                                         break label875;
                                                      }

                                                      axxxxxxxxxxxxx = axxxxxxxxxxxxxxxxx;
                                                      axxxxxxxxxxxx = axxxxxxxxxxxxxxxxxx;
                                                      var61 = 1;

                                                      axxxxxxxxxxxxxx = (boolean)var61;
                                                      a.gpi = new float[]{axxxxxxxxxxxxx, axxxxxxxxxxxx};
                                                      a.hek = 0;
                                                   }

                                                   axxxxxxxxxxxxxxxxxx -= 5.0F;
                                                }
                                             }

                                             axxxxxxxxxxxxxxxx += 2.0F;
                                          }
                                       }

                                       axxxxxxxxxxxxxxx += 5.0F;
                                    } while (ax != null);
                                 }
                              }
                           }
                        }
                     }

                     var58 = a.aof.dnp();
                  }

                  var57 = (Boolean)var58;
               }

               axxxx = var57 != 0 ? axxxxxxxxxxxxx : axxxx;
               axxx = a.dgy.dnp() ? axxxxxxxxxxxx : axxx;
               String var32 = a.hfi.dnp();
               byte var33 = -1;
               var62 = var32.hashCode();
               label829:
               switch (var62) {
                  case 63955982:
                     var62 = var32.equals("Basic");

                     if (var62 == 0) {
                        break;
                     }

                     var33 = 0;
                     break;
                  case 482016750:
                     var62 = var32.equals("Modern Watchdog");

                     if (var62 == 0) {
                        break;
                     }

                     var33 = 1;
                     break;
                  case -638370176:
                     var62 = var32.equals("Modern Watchdog 2");

                     if (var62 == 0) {
                        break;
                     }

                     var33 = 2;
                     break;
                  case 2154973:
                     var62 = var32.equals("Edge");

                     if (var62 == 0) {
                        break;
                     }

                     var33 = 3;
                     break;
                  case -1310785555:
                     var62 = var32.equals("God Bridge");

                     if (var62 == 0) {
                        break;
                     }

                     var33 = 4;
                     break;
                  case -2099899231:
                     var62 = var32.equals("Intave");

                     if (var62 != 0) {
                        var33 = 5;
                     }
               }

               var62 = var33;


               switch (var62) {
                  case 0:
                     var62 = 2;
                     break label940;
                  case 1:
                     aqy var78 = a.hba;
                     if (a.hba == null) {
                        return new float[]{axxxx, axxx};
                     }

                     var78 = a.hba;

                     float[] axxxxxxxxxxxxxxxxxxxxxxxxx = SpeedMMC(var78.dnc.method_10263(), a.hba.dnc.method_10264(), a.hba.dnc.method_10260(), a.hba.aoc);
                     axxx = axxxxxxxxxxxxxxxxxxxxxxxxx[1];
                     return new float[]{axxxx, axxx};
                  case 2:
                     boolean axxxxxxxxxxxxxxxxxxxxxx;
                     label774: {
                        axxxxxxxxxxxxxxxxxxxxxx = chi.field_1690.field_1894.method_1434();
                        boolean axxxxxxxxxxxxxxxxxxxxxxx = chi.field_1690.field_1913.method_1434();
                        var10000 = chi.field_1724.method_36454();
                        boolean var106 = axxxxxxxxxxxxxxxxxxxxxxx;
                        if (axxxxxxxxxxxxxxxxxxxxxxx == chi.field_1690.field_1849.method_1434()) {
                           var107 = 0.0;
                           break label774;
                        }

                        var106 = axxxxxxxxxxxxxxxxxxxxxxx;

                        var107 = var106 ? 1.0 : -1.0;
                     }

                     double var133;
                     label768: {
                        boolean var132 = axxxxxxxxxxxxxxxxxxxxxx;
                        if (axxxxxxxxxxxxxxxxxxxxxx == chi.field_1690.field_1881.method_1434()) {
                           var133 = 0.0;
                           break label768;
                        }

                        var132 = axxxxxxxxxxxxxxxxxxxxxx;

                        var133 = var132 ? 1.0 : -1.0;
                     }

                     float axxxxxxxxxxxxxxxxxxxxxxx;
                     float axxxxxxxxxxxxxxxxxxxxxxxx;
                     int var10004;
                     label762: {
                        axxxxxxxxxxxxxxxxxxxxxxx = var10000 - (float)Math.toDegrees(Math.atan2(var107, var133));
                        axxxxxxxxxxxxxxxxxxxxxxxx = fuk(axxxxxxxxxxxxxxxxxxxxxxx);
                        var77 = new float[2];
                        var10004 = gig;
                        if (gig == 1) {
                           var10004 = 0;
                           break label762;
                        }

                        double var162;
                        var10004 = (var162 = Math.abs(axxxxxxxxxxxxxxxxxxxxxxxx) - 22.5) == 0.0 ? 0 : (var162 < 0.0 ? -1 : 1);

                        if (var10004 > 0) {
                           var10004 = -140;
                        } else {
                           var10004 = 90;
                        }
                     }

                     float var140;
                     label756: {
                        var137 = var10004;
                        var140 = axxxxxxxxxxxxxxxxxxxxxxxx;
                        if (axxxxxxxxxxxxxxxxxxxxxxxx == 0.0F) {
                           var140 = 1.0F;
                           break label756;
                        }

                        var140 = axxxxxxxxxxxxxxxxxxxxxxxx;

                        var140 = Math.signum(var140);
                     }

                     var77[0] = axxxxxxxxxxxxxxxxxxxxxxx + var137 * var140;
                     var77[1] = axxx;
                     return var77;
                  case 3:
                     float axxxxxxxxxxxxxxxxxxxxx;
                     axxxxxxxxxxxxxxxxxxxxx = evd.fnh();
                     var71 = a.ggy.dnp();
                     label750:
                     if (var71 != 0) {
                        var71 = evd.dbj();

                        if (var71 == 0) {
                           return new float[]{chi.field_1724.method_36454() - 180.0F, axxx};
                        }
                     }

                     var71 = evd.fsj();

                     if (var71 != 0) {
                        return new float[]{axxxx, axxx};
                     }

                     var71 = a.hci;

                     if (var71 == 0) {
                        Scaffold var75 = a;
                        if (a.hba == null) {
                           return new float[]{evd.bpi() ? axxxxxxxxxxxxxxxxxxxxx - 140.0F + a.dku : axxxxxxxxxxxxxxxxxxxxx + 100.0F + a.dku, axxx};
                        }

                        var75 = a;

                        var75.hci = true;
                        return new float[]{evd.bpi() ? axxxxxxxxxxxxxxxxxxxxx - 140.0F + a.dku : axxxxxxxxxxxxxxxxxxxxx + 100.0F + a.dku, axxx};
                     }

                     var71 = chi.field_1724.field_6012 % 3;

                     if (var71 == 0) {
                        a.dku = crg.gj(0.0F, 9.0F);
                     }

                     class_243 axxxxxxxxxxxxxxxxxxxxxx = new class_243(
                        a.hba.dnc.method_10263() + 0.5, a.hba.dnc.method_10264(), a.hba.dnc.method_10260() + 0.5
                     );
                     double axxxxxxxxxxxxxxxxxxxxxxx = Math.toRadians(axxxxxxxxxxxxxxxxxxxxx);
                     double axxxxxxxxxxxxxxxxxxxxxxxx = -Math.sin(axxxxxxxxxxxxxxxxxxxxxxx);
                     double axxxxxxxxxxxxxxxxxxxxxxxxx = Math.cos(axxxxxxxxxxxxxxxxxxxxxxx);
                     double axxxxxxxxxxxxxxxxxxxxxxxxxx = axxxxxxxxxxxxxxxxxxxxxx.field_1352 - chi.field_1724.method_23317();
                     double axxxxxxxxxxxxxxxxxxxxxxxxxxx = axxxxxxxxxxxxxxxxxxxxxx.field_1350 - chi.field_1724.method_23321();
                     double var161;
                     int var72 = (
                              var161 = axxxxxxxxxxxxxxxxxxxxxxxx * axxxxxxxxxxxxxxxxxxxxxxxxxxx
                                 - axxxxxxxxxxxxxxxxxxxxxxxxx * axxxxxxxxxxxxxxxxxxxxxxxxxx
                                 - 0.0
                           )
                           == 0.0
                        ? 0
                        : (var161 < 0.0 ? -1 : 1);
                     var72 = var72 > 0 ? 1 : 0;

                     label739: {
                        label1009: {
                           boolean axxxxxxxxxxxxxxxxxxxxxxxxxxxx = (boolean)var72;
                           var73 = evd.bpi();
                           if (var73 != 0) {
                              a.dxn = axxxxxxxxxxxxxxxxxxxxx - 140.0F;
                              break label1009;
                           }

                           var73 = evd.bpi();


                           if (var73 == 0) {
                              a.dxn = axxxxxxxxxxxxxxxxxxxxx + (axxxxxxxxxxxxxxxxxxxxxxxxxxxx != 0 ? 100.0F + a.dku : -100.0F - a.dku);
                           }
                        }

                        var73 = 2;
                     }

                     float[] var74 = new float[var73];
                     var74[0] = a.dxn;
                     var74[1] = 82.0F;
                     return var74;
                  case 4:
                     label1005: {
                        class_315 axxxxxxxxxxxxxxx = chi.field_1690;
                        boolean axxxxxxxxxxxxxxxx = axxxxxxxxxxxxxxx.field_1894.method_1434();
                        boolean axxxxxxxxxxxxxxxxx = axxxxxxxxxxxxxxx.field_1881.method_1434();
                        boolean axxxxxxxxxxxxxxxxxx = axxxxxxxxxxxxxxx.field_1913.method_1434();
                        boolean axxxxxxxxxxxxxxxxxxx = axxxxxxxxxxxxxxx.field_1849.method_1434();
                        var10000 = chi.field_1724.method_36454() - 180.0F;
                        var98 = axxxxxxxxxxxxxxxx;
                        if (axxxxxxxxxxxxxxxx == axxxxxxxxxxxxxxxxx) {
                           var98 = axxxxxxxxxxxxxxxxxx;
                           if (axxxxxxxxxxxxxxxxxx == axxxxxxxxxxxxxxxxxxx) {
                              var98 = 0;
                              break label1005;
                           }

                           var98 = axxxxxxxxxxxxxxxxxx;

                           if (var98 != 0) {
                              var98 = -90;
                           } else {
                              var98 = 90;
                           }
                           break label1005;
                        }

                        var98 = axxxxxxxxxxxxxxxx;

                        if (var98 != 0) {
                           var98 = axxxxxxxxxxxxxxxxxx;
                           if (axxxxxxxxxxxxxxxxxx == axxxxxxxxxxxxxxxxxxx) {
                              var98 = 0;
                              break label1005;
                           }

                           var98 = axxxxxxxxxxxxxxxxxx;

                           if (var98 != 0) {
                              var98 = -45;
                           } else {
                              var98 = 45;
                           }
                           break label1005;
                        }

                        var98 = axxxxxxxxxxxxxxxxxx;

                        if (var98 == axxxxxxxxxxxxxxxxxxx) {
                           var98 = 180;
                           break label1005;
                        }

                        var98 = axxxxxxxxxxxxxxxxxx;

                        if (var98 != 0) {
                           var98 = -135;
                        } else {
                           var98 = 135;
                        }
                     }

                     float axxxxxxxxxxxxxxxxxxxx;
                     axxxxxxxxxxxxxxxxxxxx = class_3532.method_15393(var10000 + var98);
                     float var144;
                     var68 = (var144 = axxxxxxxxxxxxxxxxxxxx - -22.5F) == 0.0F ? 0 : (var144 < 0.0F ? -1 : 1);
                     label692:
                     if (var68 >= 0) {
                        float var145;
                        var68 = (var145 = axxxxxxxxxxxxxxxxxxxx - 22.5F) == 0.0F ? 0 : (var145 < 0.0F ? -1 : 1);

                        if (var68 < 0) {
                           axxxxxxxxxxxxxxxxxxxx = 45.0F;
                        }
                     }

                     float var146;
                     var68 = (var146 = axxxxxxxxxxxxxxxxxxxx - -22.5F) == 0.0F ? 0 : (var146 < 0.0F ? -1 : 1);

                     label685:
                     if (var68 < 0) {
                        float var147;
                        var68 = (var147 = axxxxxxxxxxxxxxxxxxxx - -67.5F) == 0.0F ? 0 : (var147 < 0.0F ? -1 : 1);

                        if (var68 >= 0) {
                           axxxxxxxxxxxxxxxxxxxx = -45.0F;
                        }
                     }

                     float var148;
                     var68 = (var148 = axxxxxxxxxxxxxxxxxxxx - -67.5F) == 0.0F ? 0 : (var148 < 0.0F ? -1 : 1);

                     label678:
                     if (var68 < 0) {
                        float var149;
                        var68 = (var149 = axxxxxxxxxxxxxxxxxxxx - -112.5F) == 0.0F ? 0 : (var149 < 0.0F ? -1 : 1);

                        if (var68 >= 0) {
                           axxxxxxxxxxxxxxxxxxxx = -45.0F;
                        }
                     }

                     float var150;
                     var68 = (var150 = axxxxxxxxxxxxxxxxxxxx - -112.5F) == 0.0F ? 0 : (var150 < 0.0F ? -1 : 1);

                     label671:
                     if (var68 < 0) {
                        float var151;
                        var68 = (var151 = axxxxxxxxxxxxxxxxxxxx - -157.5F) == 0.0F ? 0 : (var151 < 0.0F ? -1 : 1);

                        if (var68 >= 0) {
                           axxxxxxxxxxxxxxxxxxxx = -135.0F;
                        }
                     }

                     float var152;
                     var68 = (var152 = axxxxxxxxxxxxxxxxxxxx - -157.5F) == 0.0F ? 0 : (var152 < 0.0F ? -1 : 1);

                     label664: {
                        label663: {
                           label662: {
                              label1006: {
                                 if (var68 < 0) {
                                    var10000 = axxxxxxxxxxxxxxxxxxxx;

                                    if (axxxxxxxxxxxxxxxxxxxx >= -180.0F) {
                                       break label1006;
                                    }
                                 }

                                 float var153;
                                 var68 = (var153 = axxxxxxxxxxxxxxxxxxxx - 157.5F) == 0.0F ? 0 : (var153 < 0.0F ? -1 : 1);


                                 if (var68 < 0) {
                                    break label663;
                                 }

                                 float var154;
                                 var68 = (var154 = axxxxxxxxxxxxxxxxxxxx - 180.0F) == 0.0F ? 0 : (var154 < 0.0F ? -1 : 1);

                                 if (var68 >= 0) {
                                    break label663;
                                 }
                              }

                              var10000 = -135.0F;
                           }

                           axxxxxxxxxxxxxxxxxxxx = var10000;
                        }

                        float var155;
                        var68 = (var155 = axxxxxxxxxxxxxxxxxxxx - 112.5F) == 0.0F ? 0 : (var155 < 0.0F ? -1 : 1);
                     }

                     label642:
                     if (var68 >= 0) {
                        float var156;
                        var68 = (var156 = axxxxxxxxxxxxxxxxxxxx - 157.5F) == 0.0F ? 0 : (var156 < 0.0F ? -1 : 1);

                        if (var68 < 0) {
                           axxxxxxxxxxxxxxxxxxxx = 135.0F;
                        }
                     }

                     float var157;
                     var68 = (var157 = axxxxxxxxxxxxxxxxxxxx - 67.5F) == 0.0F ? 0 : (var157 < 0.0F ? -1 : 1);

                     label635:
                     if (var68 >= 0) {
                        float var158;
                        var68 = (var158 = axxxxxxxxxxxxxxxxxxxx - 112.5F) == 0.0F ? 0 : (var158 < 0.0F ? -1 : 1);

                        if (var68 < 0) {
                           axxxxxxxxxxxxxxxxxxxx = 135.0F;
                        }
                     }

                     float var159;
                     var68 = (var159 = axxxxxxxxxxxxxxxxxxxx - 22.5F) == 0.0F ? 0 : (var159 < 0.0F ? -1 : 1);

                     label628:
                     if (var68 >= 0) {
                        float var160;
                        var68 = (var160 = axxxxxxxxxxxxxxxxxxxx - 67.5F) == 0.0F ? 0 : (var160 < 0.0F ? -1 : 1);

                        if (var68 < 0) {
                           axxxxxxxxxxxxxxxxxxxx = 45.0F;
                        }
                     }

                     var68 = 2;

                     float[] var70 = new float[var68];
                     var70[0] = axxxxxxxxxxxxxxxxxxxx;
                     var70[1] = 75.7F;
                     return var70;
                  case 5:
                     var63 = chi.field_1690.field_1903.method_1434();
                     if (var63 != 0) {
                        return SpeedMMC(a.hba.dnc.method_10263(), a.hba.dnc.method_10264(), a.hba.dnc.method_10260(), a.hba.aoc);
                     }

                     var63 = amg.gmi(chi.field_1724.method_24515());


                     if (var63 == 0) {
                        var63 = 2;
                        break label939;
                     }


                     if (a.hba != null) {
                        return SpeedMMC(a.hba.dnc.method_10263(), a.hba.dnc.method_10264(), a.hba.dnc.method_10260(), a.hba.aoc);
                     }
                  default:
                     return new float[]{axxxxxxxxxxx, axxx};
               }
            }

            var56 = 2;

            float[] var65 = new float[var56];
            var65[0] = chi.field_1724.method_36454();
            var65[1] = axxx;
            return var65;
         }

         float[] var66 = new float[var63];
         var66[0] = axxxxxxxxxxx;
         var66[1] = axxx;
         return var66;
      }

      float[] var79 = new float[var62];
      var79[0] = axxxx;
      var79[1] = axxx;
      return var79;
   }

   public static float[] SpeedMMC(double x, double y, double z, class_2350 direction) {
      long ax = Scaffold.a ^ 77659228772320L;
      class_638 axx = chi.field_1687;
   }

   public static float[] agi(double x, double y, double z) {
      long ax = Scaffold.a ^ 45084619852787L;
      class_746 axx = chi.field_1724;
   }

   private void fuf() {
      long a = Scaffold.a ^ 131201626064356L;
      int[] var3 = ClientSetup.abu();
      if (a.euu.dnp()) {
         class_304 var10000 = chi.field_1690.field_1832;
         float var4;
         int var10001 = (var4 = a.gnd % a.grx.dnp().floatValue() - 0.0F) == 0.0F ? 0 : (var4 < 0.0F ? -1 : 1);
         var10001 = !var10001;

         var10000.method_23481((boolean)var10001);
      }
   }

   private void boi(etk a) {
      long ax = Scaffold.a ^ 19025279213700L;
      int[] axx = ClientSetup.abu();
      Scaffold var10000 = a;
      label249:
      if (a.euz.dnp()) {
         boolean var8 = chi.field_1724.method_24828();
         if (!var8) {
            break label249;
         }

         var8 = evd.dbj();

         if (!var8) {
            break label249;
         }

         var8 = chi.field_1690.field_1903.method_1434();

         if (var8) {
            break label249;
         }

         var8 = ClientSetup.gqy().aws().diy(Speed.class).dsv();

         if (var8) {
            break label249;
         }

         var8 = a.hfi.emb("God Bridge");

         label227: {
            label256: {
               if (!var8) {
                  break label256;
               }

               var8 = a.esl.dnp();


               if (var8) {
                  var8 = true;
                  break label227;
               }
            }

            var8 = false;
         }

         boolean axxx;
         label216: {
            label257: {
               axxx = var8;
               var9 = evd.bpi();
               if (!var9) {
                  break label257;
               }

               var9 = a.hge.dnp();


               if (var9) {
                  var9 = true;
                  break label216;
               }
            }

            var9 = false;
         }

         boolean axxxx;
         boolean axxxxx;
         label258: {
            axxxx = var9;
            int var10 = axxx;
            if (axxx != 0) {
               label200: {
                  label260: {
                     var11 = a.btn;
                     if (a.btn <= 0) {
                        break label260;
                     }

                     var11 = a.fmm;


                     if (var11 > a.bjk.dnp().intValue()) {
                        var11 = 1;
                        break label200;
                     }
                  }

                  var11 = 0;
               }

               axxxxx = (boolean)var11;
               break label258;
            }

            var10 = a.gnd;

            label185: {
               label261: {
                  if (var10 != 0) {
                     var10 = a.gnd % a.bjk.dnp().intValue();

                     if (var10 == 0) {
                        break label261;
                     }
                  }

                  var10 = a.bjk.dnp().intValue();


                  if (var10 != 1) {
                     var10 = 0;
                     break label185;
                  }
               }

               var10 = 1;
            }

            axxxxx = (boolean)var10;
         }

         label171: {
            label170: {
               label262: {
                  var12 = axxxxx;
                  if (axxxxx == 0) {
                     break label262;
                  }

                  var12 = axxxx;

                  if (var12 != 0) {
                     break label262;
                  }

                  var12 = a.hjm;

                  if (var12 != 0) {
                     break label262;
                  }

                  a.eeq = true;
                  a.hjm = true;
                  var12 = axxx;


                  if (var12 == 0) {
                     break label170;
                  }

                  a.fmm = -1;
                  break label170;
               }

               a.eeq = false;
            }

            var12 = chi.field_1724.method_24828();
         }

         if (var12 == 0) {
            return;
         }

         var12 = chi.field_1690.field_1903.method_1434();

         if (var12 == 0) {
            a.hjm = false;
         }

         return;
      }

      var10000 = a;

      var10000.hjm = false;
   }

   private void eth() {
      Scaffold var5;
      label38: {
         label40: {
            long a = Scaffold.a ^ 109687426923737L;
            int[] var3 = ClientSetup.abu();
            boolean var10000 = a.gez.dnp();
            if (var10000) {
               var4 = chi.field_1690.field_1903;

               if (chi.field_1690.field_1903.method_1434()) {
                  var4 = chi.field_1690.field_1904;
                  break label40;
               }
            }

            var5 = a;

            var10000 = a.dsc;

            if (var10000) {
               evd.eeo();
            }

            var5 = a;
            break label38;
         }

         var4.method_23481(false);
         a.dsc = true;
         return;
      }

      var5.dsc = false;
   }

   private boolean erx() {
      int[] a;
      int var6;
      long ax = Scaffold.a ^ 131098510183973L;
      int[] var10000 = ClientSetup.abu();
      String var4 = a.aqg.dnp();
      a = var10000;
      byte var5 = -1;
      var6 = var4.hashCode();
      label66:
      if (a != null) {
         switch (var6) {
            case 80691912:
               var6 = var4.equals("Telly");
               if (a == null) {
                  break label66;
               }

               if (var6 == 0) {
                  break;
               }

               var5 = 0;
               if (a != null) {
                  break;
               }
            case 482016750:
               var6 = var4.equals("Modern Watchdog");
               if (a == null) {
                  break label66;
               }

               if (var6 != 0) {
                  var5 = 1;
               }
         }

         var6 = var5;
      }

      if (a != null) {
         switch (var6) {
            case 0:
               var6 = hjr;
               break;
            case 1:
               var6 = chi.field_1724.method_24828();
               if (a != null) {
                  var6 = var6 == 0 ? 1 : 0;
               }

               return (boolean)var6;
            default:
               return (boolean)1;
         }
      }

      if (a != null) {
         var6 = var6 > a.gju.dnp().intValue() ? 1 : 0;
      }

      return (boolean)var6;
   }

   private boolean dks() {
      long a;
      int[] ax;
      boolean var10000;
      label123: {
         label126: {
            a = Scaffold.a ^ 47040505262308L;
            ax = ClientSetup.abu();
            var10000 = a.hfi.emb("Modern Watchdog");
            if (!var10000) {
               break label126;
            }

            var10000 = a.aba.dnp();


            if (var10000) {
               var10000 = 1;
               break label123;
            }
         }

         var10000 = 0;
      }

      boolean axx = (boolean)var10000;
      float axxx = axx != 0 ? chi.field_1724.method_36454() - 180.0F : dqq.ev();
      float axxxx = dqq.czi();
      Object var10 = a.hba;
      label108:
      if (a.hba != null) {
         var10000 = evd.bpi();
         if (var10000 == 0) {
            break label108;
         }

         var10000 = axx;

         if (var10000 == 0) {
            break label108;
         }

         var10000 = a.hba.dnc.method_10263();

         float[] axxxxx = SpeedMMC(var10000, a.hba.dnc.method_10264(), a.hba.dnc.method_10260(), a.hba.aoc);
         axxx = axxxxx[0];
      }

      var10 = a.gkz.dnp();

      String var9 = (String)var10;
      byte var8 = -1;
      var10000 = var9.hashCode();
      label97:
      switch (var10000) {
         case -654193598:
            var10000 = var9.equals("Advanced");

            if (var10000 == 0) {
               break;
            }

            var8 = 0;
            break;
         case -1955878649:
            var10000 = var9.equals("Normal");

            if (var10000 == 0) {
               break;
            }

            var8 = 1;
            break;
         case 2454:
            var10000 = var9.equals("MC");

            if (var10000 != 0) {
               var8 = 2;
            }
      }

      var10000 = var8;

      switch (var10000) {
         case 0:
            var10000 = bfc.gto(a.hba.aoc(), a.hba.dnc(), true, 5.0F, axxx, axxxx);
            break;
         case 1:
            var10000 = bfc.gto(a.hba.aoc(), a.hba.dnc(), false, 5.0F, axxx, axxxx);
            break;
         case 2:
            var10000 = a.ddd();
            break;
         default:
            var10000 = 1;
      }

      return (boolean)var10000;
   }

   private boolean ddd() {
      long a = Scaffold.a ^ 81548417848521L;
      int[] ax = ClientSetup.abu();
      class_239 var10000 = chi.field_1765;
      if (chi.field_1765 == null) {
         return false;
      }

      var10000 = chi.field_1765;

      if (var10000.method_17783() != class_240.field_1332) {
         return false;
      }

      var10000 = chi.field_1765;

      class_239 var5 = var10000;
      boolean var6 = var5 instanceof class_3965;
   }

   private class_243 dri() {
      long a = Scaffold.a ^ 95257378059904L;
      int[] ax = ClientSetup.abu();
      aqy var10000 = a.hba;
      if (a.hba == null) {
         return null;
      }

      var10000 = a.hba;

      double axx;
      double axxx;
      double axxxx;
      label73: {
         class_2338 axxxxx = var10000.dnc();
         axx = axxxxx.method_10263() + Math.random();
         axxx = axxxxx.method_10264() + Math.random();
         axxxx = axxxxx.method_10260() + Math.random();
         class_239 axxxxxx = chi.field_1765;
         int var13 = fto.gwb[a.hba.aoc.ordinal()];
         switch (var13) {
            case 1:
               axxx = axxxxx.method_10264();
               break;
            case 2:
               axxx = axxxxx.method_10264() + 1;
               break;
            case 3:
               axxxx = axxxxx.method_10260();
               break;
            case 4:
               axxxx = axxxxx.method_10260() + 1;
               break;
            case 5:
               axx = axxxxx.method_10263();
               break;
            case 6:
               axx = axxxxx.method_10263() + 1;
         }

         var14 = axxxxxx;

         var13 = axxxxxx instanceof class_3965;

         if (var13 == 0) {
            return new class_243(axx, axxx, axxxx);
         }

         var14 = axxxxxx;
      }

      class_3965 axxxxxxx = (class_3965)var14;
      class_3965 var15 = axxxxxxx;
      if (!axxxxxxx.method_17777().equals(a.hba.dnc())) {
         return new class_243(axx, axxx, axxxx);
      }

      var15 = axxxxxxx;

      if (var15.method_17780() != a.hba.aoc()) {
         return new class_243(axx, axxx, axxxx);
      }

      axx = axxxxxxx.method_17784().field_1352;
      axxx = axxxxxxx.method_17784().field_1351;
      var15 = axxxxxxx;

      axxxx = var15.method_17784().field_1350;
      return new class_243(axx, axxx, axxxx);
   }

   private int dtm() {
      long a = Scaffold.a ^ 132750061608338L;
      int ax = 0;
      int[] var10000 = ClientSetup.abu();
      int axx = 0;
      int[] axxx = var10000;

      while (true) {
         if (axx < chi.field_1724.method_31548().method_5439()) {
            class_1799 axxxx = chi.field_1724.method_31548().method_5438(axx);
            class_1792 axxxxx = axxxx.method_7909();
            label32:
            var10 = axxxxx instanceof class_1747;

            if (var10 != 0) {
               class_1747 axxxxxx = (class_1747)axxxxx;
               class_2248 axxxxxxx = axxxxxx.method_7711();

               if (amg.ayj(axxxxxxx)) {
                  ax += axxxx.method_7947();
               }
            }

            axx++;

            continue;
         }

         var10 = ax;
         break;
      }

      return var10;
   }

   public static void arp(int[] var0) {
      bd = var0;
   }

   public static int[] dao() {
      return bd;
   }

   static {
      long var16 = a ^ 114000327703459L;
      Cipher var18;
      Cipher var10000 = var18 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var16 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var19 = 1; var19 < 8; var19++) {
         var10003[var19] = (byte)(var16 << var19 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var25 = new String[79];
      int var23 = 0;
      String var22 = "\u007fbzFCØÙ «\u0091\u009e¶Õ\u0083\u0004\u0083\u0094\u0000á¶\u009feÒxUæxÂgÊÄè\u0018yq\u0013\u001fsµ\u001f;>P\u009as\u0092r\u009d\u009aü\fÉè~Èâû ,\u0011¶è#\u0083ÃOi÷\u001f&B\u0092gg\tXM\u0084£\u0006\u008eT*zÉ\u000bÂåj· è\u0098ÿ\u0006¥â¡d¶\u0013å8Á\u0080Þº¹D´Y\u008eÜ²lòa¾·n+æà Q¤ë¯â\u0098Ö².{}\u0098Q\u0094\b\u0092 .xSê\u0080n=Èk\u000buÜw5\u0015\u0018\u0092\u009aÓ>û°@\u0018w\u0012Åò\u001e\u0017+\ftQ`LZ\u0095!\u008c\u0010\u0004'c\u009eÈ\u0003ªW\rg\u001e:3,\u0000¡(bé!Ù{P¿Én s\u0092ÅÙï$\u0093\u008f\t\u001fÜ°ÉÌ»P\u0019\u0081\u0010{ÃÜ\u0086fÈ$ÀÚ¼Q\u0018¾¬\u00adbî\u008d\u001ce:\u008dp+6\u0004Ö#8\u0006Ù%ìõÕÓ\u0010XñU\u0089úb)«KAvY\u0090fdm C£o\u0012\u001dÎu\fZ\u0093\u0006å \u001b\u001aÜàÆ\u0080á[DaAi½1*~ì\u0091¿ \u0085T)Å>ÅiÈ*5ZìjjÆò\u008aRÝ(9¾\u0086É\u0093^ó4\u009föz\u009b _1HÜµ \u00ad¤«\u001eq\u007fô\u0081\u008b¤Ç2\u00002_`\u0094¾\u001a$±æwôtS Ø\r.v\u009e»ÖÚl\u0012<w\rn\u001eÁòvF\u007f\u009b'\u0015]\u0098BWòñ}^7\u0018³À\u0083ÛNW\u0096$\u0085¶4µ\u0011¶±4¸r{.\u0093:Í\u0097\u0010\u0003Ð{¤+\u0016¡ó~\u0091\u0002ô2Ñ\u0095\u0097 þþ\u0013Ïq²\u0014n\"\u0001h\u0007ç·ÎéÃ=i\u00843Y{Në3Á¢ÇÔÇ>\u0010÷¾d\f\u008a\u009a¸(_¾\u007fßëHøæ(s\f\u0014Tâþ¦§\u0095|Y\u0017úqey%Ð¦Lw¬Ç\u0099¸Øòé°º\u008f¬\u0097ÔÄ»,³\u0090\t\u0010\u0080ýÃyÄbr%\u0011?\u0013ßèðüO £!À\u0006g%\u0084\u0090%\u0093Ä!\u0007ï]\u00adò¼;ú|=´¢ý\u008d\u0012 >\u0019JN\u0010¹ö\u0003\u009a:q&\u0002Ä,¼\bÔ-³à\u0018\u0089aÄ²Ù>\u0080?ø\u0002èÕ¾:¬¤/¦º(ãpa\u0010 \u0095¢r\u008a\u00042Ô×¨&\u000f?\u009d9ºWÓ)¹ ®B\u0013\u0083rÎ]¾\u0015óHù å2\u001d\u0010IÓÍ%×6\u0019)\u0089Ì\u0096ØK\u0086ä·\u008d¦/ü¹Â\u0085\nÜ\u0091¬â ò\u0019\u001b\nðµ\u0098[fJÿ\u00064\u000fìÁ¤]0A\u0080.´\nð\u0093:éÿ\u0010\u0010]\u0010\u00199zD§\u009f®,p\u0019s\u0096 \u0096K\u0005\u0010\u008b\u001dÞX¡Ñ#\u009d\"@V\u0091\u0018\u008f\u0082I\u0018ÀÖ=\"Þ\bð\u0086\\ÜJôd\u0082uéE\u0085\u001b\u0015\u0087¡p/\u0018\u000eï³g\u001f{MXÞ¡?<_ Ù\u0010\u0089ïøæøJ\u0014Á(º\u0089~Áq#X\u0096\"¨±âvíZ\bû8èY\u008e3\u0018çz]\u0097¦\u009c\u008bË°GjÜïÊn¿\u0001\u0010ä¬¯\u0091î¶ì¾\u0094ì\u0080Å!\u009fb\u0095\u0010¥¢Ç\u0012¶\\P§\u0098#QMãÜÈ»( ÌPÀ:\u0096\\\u0012ÿ\u0006!\u0006K¿Ðã\u0088î¦Î\nÿ#\u0000\u000fM\u0093\t»ù\u0093+\u00006\rêÏ/¹C\u0010¹iö\u008f\u000bÄ\u0018!\u001aüØô=¬|m !½PÔ\u0016\u0016;¯(õÇ\u008e\u0010°jK\u0095QÉSLÂ3GñÎÜw\"B8K\u0018\u001a³\u0001\u00ad(\u0006\u009d\u00066txZúIY\u0006µu\u000f\u008d¡_=! GvC\u0005ö×\u001eÚe\u0000\u008a>3\u007fCæ!¶s\u001eï\r1«w\u008d\u001a¡Á8þé §\u0087\u009bJ\u0097\u0015\u0010yzÄ£ms<£\u0016\f\u001càò\u000f'\u0085\u001dÕ\u000f®\u008cá\u008c\u009b\u0005\u0018#©ö§ñ \u0000%k,P\u0087\u0013\u001aªCj\u008b(Nþ\u0084I¹(\u009bZ\u0007ãÞº\u001d.\u0018o\u000f\u0081¡ésÑsý(;\ry¸n)ï\u0003Bc\u0005þ7jºåRt ÈW\u0010_Â^ãÊCw%u}\u0002¼\u0093\u0089om(\u008dSÓwÉuâ³jÇ\u009fø\u009e\u0005\u008dçé\\%ç6\u0087a\"úo\u0013\u0002¶{ÿm©øÂÎÜ\u0092\u0001~\u0018pª\u0093n\u001e5ß\u008bµ¨8c]-¾£¦é\u0083ê\u0081¾\u0010Ö\u0018[ÙCò\u001bà'R¿½ÐXcB\u008bKÈÝpV°¦%:\u0010\u009b%\u0083\u0083\u008f\u001e¬Î\u0099Î\u0006\u0097µ\u000b±ð\u0010\n?ö5¤\u000e;ê\u0092EQå\b\u008bç&\u0010\u009b\u001flU¸t¥±©ò§\u0001âQâ© \u0017)t\u0083\u0088\u009eguæKÎC\u0017óLá»o*uj¸OÉ\u00041Y±ô¢Z\u000f \u0010°³óTãoÎ\u0085\u0017\u008eã/\u0095µÊù#²¦\u0086\u0006\u0084?\u001a\u0007[¦åÌÛP\u0010\u0081½\u0003O'Àù}#÷ø8ËÂ^g(\u0084g.Tg^H\u0082¹3\u0015ff\u008a\u0089ãÙk.¦A\bÎò¬t\u009aÏ\u0007µÀ\u009cÜðpnhYBv8.\u001ce¥þ£OÏô\u008f°aDFz\u000eîq\u001eÞÙN\u00adS¬%\u009eÕ.â\u0015\u008a>Vô\u0087dPË\u008cA¤\u001f7\u0005\u0097¨E\u009eµ\r»\u0094\u009d'¹\u0010õ<ã+8ñÙ§u\"w\u000b+eÑ\u0094\u0018nÿD£G\t§_w¯\u0017éNFé(\u009e4BîA§ô\u008c\u0010i\u008eW\u008b\u0006~O3\u000e\u0080Y\u000bHÜ\u0092\u0006\u0018Å\u0015÷\u009c\u0085ý\u001a*\u0099IÉÄ\u00935rIm¯·Nh\u0093H¹\u0010ì\u0080fFtH¹«0}wÆ \u008aA\u000b\u0018UÎ7ýÈ\u0089Òä4¡¼S\u001e%\"cA=\u0097\u001e\u0017<uÑ\u0010\u0002\u000f±Rÿ5\u0099\u0083\u000emXÆ\té¾|\u0010Â6?z³©\u00834CfM\u0006¥Á²H0=\u000f\u0012ûQ\u0096(¦xyw\u001a4%¼E)>S\u0003þà\u0093Ï\u0015Kn¼äd\u009búÁªVâ®âôÍÿûÉ\u0098å\\\u0086\u001e\u0010¼e:¶\u009c)ò«\u008fVoû_\u0097\u0091\u001b\u0010½û\u0092x~÷\u00139]\u0098\\æ\u0002  \u0018\u0018 è!oÃÏ\u008eöË\u007fà=?¾õ9'iL\u0083\u008fd\u009d¯\u0010Ö\u0011\u0016ï\u009dÙ§\u0006À\u0017\u0012î\u0013^N\u00958ñöÌ\u008ag\u00103²\u0095,äí\td\tn\u0016§\u0006Ä,\u007f\u00892ÄZ\u0019=\u000eÁÀ\tYK&dÎPC\u009b\u0084Eh\u0007O\u0096Ã kë_Ët\u001c\u0088Ð\u0010\u0094Ç\b?\u009cÇ°ê\u001c-ý\"MÒÏ`\u0010ÖÚÝz\u0098Q\u0081V\u0096!a4\nìbá\u0018C\u0005h»ÿ_:\u0085µãêÉ/Äá2ù§ÐÇ¨_Hð ÉDS5\u0087åÕ8íþ}ñ\u001c\u0015 ã×¢\u0094JË[{\u0011µlýÂ¼\u0083¶¶ èUùç \u0092£Fày\u0017Q\u0000\u001f\t5\u0003\u0018 7·H¦\u0006¡æ©\u0005§\u008e\u0010\u009d\u0010Æß\"\u008aZo\u0093\u0089\u0015\u0087£\u0001Ç®Q\u0097 \u0013/\u009bä*J=mød\fZµ\u000e\u0000o\"R\rµ\u0011¡º`NÅ9òàk\u0001d\u0010^\u0019·Ù\u0099s\u0080Ã -Á<\u000f\u000fG³\u00100î¥!PºÝ=î\u0006\\ô&\u0013\u001f`(*¥\u009a\u0013\u001d'8<\u0091¦-§\u0090ë\u0088g/n¬%f÷¾ÅóXØöeK}\rc<ÇL0\u001edê";
      int var24 = "\u007fbzFCØÙ «\u0091\u009e¶Õ\u0083\u0004\u0083\u0094\u0000á¶\u009feÒxUæxÂgÊÄè\u0018yq\u0013\u001fsµ\u001f;>P\u009as\u0092r\u009d\u009aü\fÉè~Èâû ,\u0011¶è#\u0083ÃOi÷\u001f&B\u0092gg\tXM\u0084£\u0006\u008eT*zÉ\u000bÂåj· è\u0098ÿ\u0006¥â¡d¶\u0013å8Á\u0080Þº¹D´Y\u008eÜ²lòa¾·n+æà Q¤ë¯â\u0098Ö².{}\u0098Q\u0094\b\u0092 .xSê\u0080n=Èk\u000buÜw5\u0015\u0018\u0092\u009aÓ>û°@\u0018w\u0012Åò\u001e\u0017+\ftQ`LZ\u0095!\u008c\u0010\u0004'c\u009eÈ\u0003ªW\rg\u001e:3,\u0000¡(bé!Ù{P¿Én s\u0092ÅÙï$\u0093\u008f\t\u001fÜ°ÉÌ»P\u0019\u0081\u0010{ÃÜ\u0086fÈ$ÀÚ¼Q\u0018¾¬\u00adbî\u008d\u001ce:\u008dp+6\u0004Ö#8\u0006Ù%ìõÕÓ\u0010XñU\u0089úb)«KAvY\u0090fdm C£o\u0012\u001dÎu\fZ\u0093\u0006å \u001b\u001aÜàÆ\u0080á[DaAi½1*~ì\u0091¿ \u0085T)Å>ÅiÈ*5ZìjjÆò\u008aRÝ(9¾\u0086É\u0093^ó4\u009föz\u009b _1HÜµ \u00ad¤«\u001eq\u007fô\u0081\u008b¤Ç2\u00002_`\u0094¾\u001a$±æwôtS Ø\r.v\u009e»ÖÚl\u0012<w\rn\u001eÁòvF\u007f\u009b'\u0015]\u0098BWòñ}^7\u0018³À\u0083ÛNW\u0096$\u0085¶4µ\u0011¶±4¸r{.\u0093:Í\u0097\u0010\u0003Ð{¤+\u0016¡ó~\u0091\u0002ô2Ñ\u0095\u0097 þþ\u0013Ïq²\u0014n\"\u0001h\u0007ç·ÎéÃ=i\u00843Y{Në3Á¢ÇÔÇ>\u0010÷¾d\f\u008a\u009a¸(_¾\u007fßëHøæ(s\f\u0014Tâþ¦§\u0095|Y\u0017úqey%Ð¦Lw¬Ç\u0099¸Øòé°º\u008f¬\u0097ÔÄ»,³\u0090\t\u0010\u0080ýÃyÄbr%\u0011?\u0013ßèðüO £!À\u0006g%\u0084\u0090%\u0093Ä!\u0007ï]\u00adò¼;ú|=´¢ý\u008d\u0012 >\u0019JN\u0010¹ö\u0003\u009a:q&\u0002Ä,¼\bÔ-³à\u0018\u0089aÄ²Ù>\u0080?ø\u0002èÕ¾:¬¤/¦º(ãpa\u0010 \u0095¢r\u008a\u00042Ô×¨&\u000f?\u009d9ºWÓ)¹ ®B\u0013\u0083rÎ]¾\u0015óHù å2\u001d\u0010IÓÍ%×6\u0019)\u0089Ì\u0096ØK\u0086ä·\u008d¦/ü¹Â\u0085\nÜ\u0091¬â ò\u0019\u001b\nðµ\u0098[fJÿ\u00064\u000fìÁ¤]0A\u0080.´\nð\u0093:éÿ\u0010\u0010]\u0010\u00199zD§\u009f®,p\u0019s\u0096 \u0096K\u0005\u0010\u008b\u001dÞX¡Ñ#\u009d\"@V\u0091\u0018\u008f\u0082I\u0018ÀÖ=\"Þ\bð\u0086\\ÜJôd\u0082uéE\u0085\u001b\u0015\u0087¡p/\u0018\u000eï³g\u001f{MXÞ¡?<_ Ù\u0010\u0089ïøæøJ\u0014Á(º\u0089~Áq#X\u0096\"¨±âvíZ\bû8èY\u008e3\u0018çz]\u0097¦\u009c\u008bË°GjÜïÊn¿\u0001\u0010ä¬¯\u0091î¶ì¾\u0094ì\u0080Å!\u009fb\u0095\u0010¥¢Ç\u0012¶\\P§\u0098#QMãÜÈ»( ÌPÀ:\u0096\\\u0012ÿ\u0006!\u0006K¿Ðã\u0088î¦Î\nÿ#\u0000\u000fM\u0093\t»ù\u0093+\u00006\rêÏ/¹C\u0010¹iö\u008f\u000bÄ\u0018!\u001aüØô=¬|m !½PÔ\u0016\u0016;¯(õÇ\u008e\u0010°jK\u0095QÉSLÂ3GñÎÜw\"B8K\u0018\u001a³\u0001\u00ad(\u0006\u009d\u00066txZúIY\u0006µu\u000f\u008d¡_=! GvC\u0005ö×\u001eÚe\u0000\u008a>3\u007fCæ!¶s\u001eï\r1«w\u008d\u001a¡Á8þé §\u0087\u009bJ\u0097\u0015\u0010yzÄ£ms<£\u0016\f\u001càò\u000f'\u0085\u001dÕ\u000f®\u008cá\u008c\u009b\u0005\u0018#©ö§ñ \u0000%k,P\u0087\u0013\u001aªCj\u008b(Nþ\u0084I¹(\u009bZ\u0007ãÞº\u001d.\u0018o\u000f\u0081¡ésÑsý(;\ry¸n)ï\u0003Bc\u0005þ7jºåRt ÈW\u0010_Â^ãÊCw%u}\u0002¼\u0093\u0089om(\u008dSÓwÉuâ³jÇ\u009fø\u009e\u0005\u008dçé\\%ç6\u0087a\"úo\u0013\u0002¶{ÿm©øÂÎÜ\u0092\u0001~\u0018pª\u0093n\u001e5ß\u008bµ¨8c]-¾£¦é\u0083ê\u0081¾\u0010Ö\u0018[ÙCò\u001bà'R¿½ÐXcB\u008bKÈÝpV°¦%:\u0010\u009b%\u0083\u0083\u008f\u001e¬Î\u0099Î\u0006\u0097µ\u000b±ð\u0010\n?ö5¤\u000e;ê\u0092EQå\b\u008bç&\u0010\u009b\u001flU¸t¥±©ò§\u0001âQâ© \u0017)t\u0083\u0088\u009eguæKÎC\u0017óLá»o*uj¸OÉ\u00041Y±ô¢Z\u000f \u0010°³óTãoÎ\u0085\u0017\u008eã/\u0095µÊù#²¦\u0086\u0006\u0084?\u001a\u0007[¦åÌÛP\u0010\u0081½\u0003O'Àù}#÷ø8ËÂ^g(\u0084g.Tg^H\u0082¹3\u0015ff\u008a\u0089ãÙk.¦A\bÎò¬t\u009aÏ\u0007µÀ\u009cÜðpnhYBv8.\u001ce¥þ£OÏô\u008f°aDFz\u000eîq\u001eÞÙN\u00adS¬%\u009eÕ.â\u0015\u008a>Vô\u0087dPË\u008cA¤\u001f7\u0005\u0097¨E\u009eµ\r»\u0094\u009d'¹\u0010õ<ã+8ñÙ§u\"w\u000b+eÑ\u0094\u0018nÿD£G\t§_w¯\u0017éNFé(\u009e4BîA§ô\u008c\u0010i\u008eW\u008b\u0006~O3\u000e\u0080Y\u000bHÜ\u0092\u0006\u0018Å\u0015÷\u009c\u0085ý\u001a*\u0099IÉÄ\u00935rIm¯·Nh\u0093H¹\u0010ì\u0080fFtH¹«0}wÆ \u008aA\u000b\u0018UÎ7ýÈ\u0089Òä4¡¼S\u001e%\"cA=\u0097\u001e\u0017<uÑ\u0010\u0002\u000f±Rÿ5\u0099\u0083\u000emXÆ\té¾|\u0010Â6?z³©\u00834CfM\u0006¥Á²H0=\u000f\u0012ûQ\u0096(¦xyw\u001a4%¼E)>S\u0003þà\u0093Ï\u0015Kn¼äd\u009búÁªVâ®âôÍÿûÉ\u0098å\\\u0086\u001e\u0010¼e:¶\u009c)ò«\u008fVoû_\u0097\u0091\u001b\u0010½û\u0092x~÷\u00139]\u0098\\æ\u0002  \u0018\u0018 è!oÃÏ\u008eöË\u007fà=?¾õ9'iL\u0083\u008fd\u009d¯\u0010Ö\u0011\u0016ï\u009dÙ§\u0006À\u0017\u0012î\u0013^N\u00958ñöÌ\u008ag\u00103²\u0095,äí\td\tn\u0016§\u0006Ä,\u007f\u00892ÄZ\u0019=\u000eÁÀ\tYK&dÎPC\u009b\u0084Eh\u0007O\u0096Ã kë_Ët\u001c\u0088Ð\u0010\u0094Ç\b?\u009cÇ°ê\u001c-ý\"MÒÏ`\u0010ÖÚÝz\u0098Q\u0081V\u0096!a4\nìbá\u0018C\u0005h»ÿ_:\u0085µãêÉ/Äá2ù§ÐÇ¨_Hð ÉDS5\u0087åÕ8íþ}ñ\u001c\u0015 ã×¢\u0094JË[{\u0011µlýÂ¼\u0083¶¶ èUùç \u0092£Fày\u0017Q\u0000\u001f\t5\u0003\u0018 7·H¦\u0006¡æ©\u0005§\u008e\u0010\u009d\u0010Æß\"\u008aZo\u0093\u0089\u0015\u0087£\u0001Ç®Q\u0097 \u0013/\u009bä*J=mød\fZµ\u000e\u0000o\"R\rµ\u0011¡º`NÅ9òàk\u0001d\u0010^\u0019·Ù\u0099s\u0080Ã -Á<\u000f\u000fG³\u00100î¥!PºÝ=î\u0006\\ô&\u0013\u001f`(*¥\u009a\u0013\u001d'8<\u0091¦-§\u0090ë\u0088g/n¬%f÷¾ÅóXØöeK}\rc<ÇL0\u001edê"
         .length();
      char var21 = ' ';
      int var29 = -1;

      label72:
      while (true) {
         String var30 = var22.substring(++var29, var29 + var21);
         int var10001 = -1;

         while (true) {
            byte[] var26 = var18.doFinal(var30.getBytes("ISO-8859-1"));
            String var43 = d(var26).intern();
            switch (var10001) {
               case 0:
                  var25[var23++] = var43;
                  if ((var29 += var21) >= var24) {
                     g = var25;
                     h = new String[79];
                     r = new HashMap(13);
                     Cipher var5;
                     var10000 = var5 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var16 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var6 = 1; var6 < 8; var6++) {
                        var10003[var6] = (byte)(var16 << var6 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var11 = new long[55];
                     int var8 = 0;
                     String var9 = "NT\u0088\u0092ò\u0088õû\u0013.pGLñE4\u0091cMnèK@8y\u008aoE¯g\u0006\u001b6Fú\u00ad\u001a?ÞF\u007fn\u001d\u009e#ÅO\u009b\u0080 @\f©\u0095ÃcSQ:HJ\u0084\u0010þ\u000eX\u008aü\u0000\u0088\u0005Öô\u0090ß\u008a»íZé\u0087\u0012jÂiÙ&;ÿ¦A©|éMÃð\u00114ôJ\b\u0017Ã\u0082pä90Çn>° 8Æ\n\u008eå:\u0096%Æò\u0017s©\u001b\u0007\u0086\u00075á<ÿ¾Üh\u009c@)\u0011I©S\u009b.RAc\u009coz\nZ\u0099Ø§ù-ÿQyF\u009e\u009a\u001fT\u0097â\u001d\u0001¦ÑÔ¿¬µ\\]ù\u008eJ.-ÈÀ²äòZ÷´z©'k9\u0003d÷Þ\u0089ñ\u0082n{Òx\u0003rú\u0089ì\u001d>Ë\u0083%\u001f'¶ô\u0000w? \u001a\u008d-\u0091ò\u00102íþº7½iÔ\u009dî®\u0003Ý$=\f¦4 BÅ\u009aGIåÍQÔêñ<\u0000\u0081©\"¿\u0012\u0082TX\u001f\u009aD~\u0093\u0098 ¹%k\rgÞz\u009c\u0016+&Þs±Y\u008b¢Òýg«;¼*ðP\u007f,Bãí2ÓcÝ\u000fsê@òL\u009cÕx°?©rÆ7¦4\u0000rttIk\u0094?¼³w\u009att\u0018\u0098\u007f\u0015\u001aäÝEâÌ\f\bQ\t¥\u0010h\u0097RÀ\u0083\u00078£?ì~\u000b\u008f)nÖ\u0018\u009bbB(\u0014¡\u0010v\u0000ü\u0017(Æþ(&Ä\u00ad,\u0003MsRÒ\u0088\u0086\u0091-Ø!3\u0014ÌN®º)\u0086\u009cä\u0018o\u0011Ñ\u0018";
                     int var10 = "NT\u0088\u0092ò\u0088õû\u0013.pGLñE4\u0091cMnèK@8y\u008aoE¯g\u0006\u001b6Fú\u00ad\u001a?ÞF\u007fn\u001d\u009e#ÅO\u009b\u0080 @\f©\u0095ÃcSQ:HJ\u0084\u0010þ\u000eX\u008aü\u0000\u0088\u0005Öô\u0090ß\u008a»íZé\u0087\u0012jÂiÙ&;ÿ¦A©|éMÃð\u00114ôJ\b\u0017Ã\u0082pä90Çn>° 8Æ\n\u008eå:\u0096%Æò\u0017s©\u001b\u0007\u0086\u00075á<ÿ¾Üh\u009c@)\u0011I©S\u009b.RAc\u009coz\nZ\u0099Ø§ù-ÿQyF\u009e\u009a\u001fT\u0097â\u001d\u0001¦ÑÔ¿¬µ\\]ù\u008eJ.-ÈÀ²äòZ÷´z©'k9\u0003d÷Þ\u0089ñ\u0082n{Òx\u0003rú\u0089ì\u001d>Ë\u0083%\u001f'¶ô\u0000w? \u001a\u008d-\u0091ò\u00102íþº7½iÔ\u009dî®\u0003Ý$=\f¦4 BÅ\u009aGIåÍQÔêñ<\u0000\u0081©\"¿\u0012\u0082TX\u001f\u009aD~\u0093\u0098 ¹%k\rgÞz\u009c\u0016+&Þs±Y\u008b¢Òýg«;¼*ðP\u007f,Bãí2ÓcÝ\u000fsê@òL\u009cÕx°?©rÆ7¦4\u0000rttIk\u0094?¼³w\u009att\u0018\u0098\u007f\u0015\u001aäÝEâÌ\f\bQ\t¥\u0010h\u0097RÀ\u0083\u00078£?ì~\u000b\u008f)nÖ\u0018\u009bbB(\u0014¡\u0010v\u0000ü\u0017(Æþ(&Ä\u00ad,\u0003MsRÒ\u0088\u0086\u0091-Ø!3\u0014ÌN®º)\u0086\u009cä\u0018o\u0011Ñ\u0018"
                        .length();
                     byte var7 = 0;

                     label54:
                     while (true) {
                        var10001 = var7;
                        var7 += 8;
                        byte[] var12 = var9.substring(var10001, var7).getBytes("ISO-8859-1");
                        long[] var33 = var11;
                        var10001 = var8++;
                        long var47 = (var12[0] & 255L) << 56
                           | (var12[1] & 255L) << 48
                           | (var12[2] & 255L) << 40
                           | (var12[3] & 255L) << 32
                           | (var12[4] & 255L) << 24
                           | (var12[5] & 255L) << 16
                           | (var12[6] & 255L) << 8
                           | var12[7] & 255L;
                        byte var52 = -1;

                        while (true) {
                           long var13 = var47;
                           byte[] var15 = var5.doFinal(
                              new byte[]{
                                 (byte)(var13 >>> 56),
                                 (byte)(var13 >>> 48),
                                 (byte)(var13 >>> 40),
                                 (byte)(var13 >>> 32),
                                 (byte)(var13 >>> 24),
                                 (byte)(var13 >>> 16),
                                 (byte)(var13 >>> 8),
                                 (byte)var13
                              }
                           );
                           long var55 = (var15[0] & 255L) << 56
                              | (var15[1] & 255L) << 48
                              | (var15[2] & 255L) << 40
                              | (var15[3] & 255L) << 32
                              | (var15[4] & 255L) << 24
                              | (var15[5] & 255L) << 16
                              | (var15[6] & 255L) << 8
                              | var15[7] & 255L;
                           switch (var52) {
                              case 0:
                                 var33[var10001] = var55;
                                 if (var7 >= var10) {
                                    p = var11;
                                    q = new Integer[55];
                                    Cipher var0;
                                    var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                                    var10002 = SecretKeyFactory.getInstance("DES");
                                    var10003 = new byte[]{(byte)(var16 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                                    for (int var1 = 1; var1 < 8; var1++) {
                                       var10003[var1] = (byte)(var16 << var1 * 8 >>> 56);
                                    }

                                    var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                                    long var2 = -6813365935387898974L;
                                    byte[] var4 = var0.doFinal(
                                       new byte[]{
                                          (byte)(var2 >>> 56),
                                          (byte)(var2 >>> 48),
                                          (byte)(var2 >>> 40),
                                          (byte)(var2 >>> 32),
                                          (byte)(var2 >>> 24),
                                          (byte)(var2 >>> 16),
                                          (byte)(var2 >>> 8),
                                          (byte)var2
                                       }
                                    );
                                    long var50 = (var4[0] & 255L) << 56
                                       | (var4[1] & 255L) << 48
                                       | (var4[2] & 255L) << 40
                                       | (var4[3] & 255L) << 32
                                       | (var4[4] & 255L) << 24
                                       | (var4[5] & 255L) << 16
                                       | (var4[6] & 255L) << 8
                                       | var4[7] & 255L;
                                    v = var50;
                                    if (dao() != null) {
                                       arp(new int[3]);
                                    }

                                    return;
                                 }
                                 break;
                              default:
                                 var33[var10001] = var55;
                                 if (var7 < var10) {
                                    continue label54;
                                 }

                                 var9 = "\u0011üJ¨\u0089â'?hìNyC\u001dÎý";
                                 var10 = "\u0011üJ¨\u0089â'?hìNyC\u001dÎý".length();
                                 var7 = 0;
                           }

                           byte var40 = var7;
                           var7 += 8;
                           var12 = var9.substring(var40, var7).getBytes("ISO-8859-1");
                           var33 = var11;
                           var10001 = var8++;
                           var47 = (var12[0] & 255L) << 56
                              | (var12[1] & 255L) << 48
                              | (var12[2] & 255L) << 40
                              | (var12[3] & 255L) << 32
                              | (var12[4] & 255L) << 24
                              | (var12[5] & 255L) << 16
                              | (var12[6] & 255L) << 8
                              | var12[7] & 255L;
                           var52 = 0;
                        }
                     }
                  }

                  var21 = var22.charAt(var29);
                  break;
               default:
                  var25[var23++] = var43;
                  if ((var29 += var21) < var24) {
                     var21 = var22.charAt(var29);
                     continue label72;
                  }

                  var22 = "{\u0090\u0099\u0096\u000fÆËo\u000bÀ(=í£\t]\tÆJÇñ°vd{Å\u0011\u000e\u0087å\u000fw \u000e\u0000\u0085\u009cá\u009büu1\u001a\u000b\u0002\u009dÃÚßÞæÈN4ÏAÏpoÕè\u0098põ\u009f";
                  var24 = "{\u0090\u0099\u0096\u000fÆËo\u000bÀ(=í£\t]\tÆJÇñ°vd{Å\u0011\u000e\u0087å\u000fw \u000e\u0000\u0085\u009cá\u009büu1\u001a\u000b\u0002\u009dÃÚßÞæÈN4ÏAÏpoÕè\u0098põ\u009f"
                     .length();
                  var21 = ' ';
                  var29 = -1;
            }

            var30 = var22.substring(++var29, var29 + var21);
            var10001 = 0;
         }
      }
   }

   private static int e(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 30767;
      if (q[var3] == null) {
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
         long var5 = p[var3];
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
         Object[] var9 = (Object[])r.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               r.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("cc/astralis/efx", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         q[var3] = var15;
      }

      return q[var3];
   }

   private static int e(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = e(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static CallSite e(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("e".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("cc/astralis/efx" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }
}
