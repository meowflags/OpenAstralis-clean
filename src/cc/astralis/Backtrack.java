package cc.astralis;

import java.awt.Color;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Map;
import java.util.Random;
import java.util.concurrent.ConcurrentLinkedQueue;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1297;
import net.minecraft.class_1309;
import net.minecraft.class_238;
import net.minecraft.class_243;
import net.minecraft.class_2596;
import net.minecraft.class_2661;
import net.minecraft.class_2684;
import net.minecraft.class_2708;
import net.minecraft.class_2749;
import net.minecraft.class_2767;
import net.minecraft.class_2777;
import net.minecraft.class_2797;
import net.minecraft.class_3417;
import net.minecraft.class_4048;
import net.minecraft.class_4587;
import net.minecraft.class_7422;
import net.minecraft.class_7439;
import net.minecraft.class_7472;

public class Backtrack extends guu {
   private final bes dte;
   private final bes dtq;
   private final bes elu;
   private final bes gsk;
   private final bes bne;
   private final gbp evs;
   private final bes gvk;
   private final adu hba;
   private final bes gwc;
   private final ConcurrentLinkedQueue<arw> etp;
   private final ConcurrentLinkedQueue<class_2596<?>> awx;
   private class_1297 ctp;
   private class_7422 cd;
   private long aoz;
   private long blj;
   private long hhe;
   private boolean enf;
   private int exx;
   private final Random fhx;
   private static final long a = 139292788949018L;
   private static final String[] g;
   private static final String[] h;

   private static final long[] p;
   private static final Integer[] q;
   private static final Map r;

   public Backtrack() {
      long a = Backtrack.a ^ 47236581293266L;
      super(bfm.COMBAT);
      a.dte = new bes("Range", 3.0F, 1.0F, 10.0F, 0.1F);
      a.dtq = new bes("MS Min", 100.0F, 0.0F, 1000.0F, 1.0F);
      a.elu = new bes("MS Max", 150.0F, 0.0F, 1000.0F, 1.0F);
      a.gsk = new bes("Tracking Timing", 500.0F, 0.0F, 2000.0F, 1.0F);
      a.bne = new bes("Chance", 50.0F, 0.0F, 100.0F, 1.0F);
      a.evs = new gbp("Pause On HurtTime", false);
      a.gvk = (bes)new bes("Hurt Time", 3.0F, 0.0F, 10.0F, 1.0F).bih(a.evs::dnp);
      String[] var27 = new String[2];
      var27[0] = "Attack";
      var27[1] = "Range";
      a.hba = new adu("Target Mode", "Attack", var27);
      a.gwc = new bes("Last Attack Time To Work", 1000.0F, 0.0F, 5000.0F, 1.0F);
      a.etp = new ConcurrentLinkedQueue<>();
      a.awx = new ConcurrentLinkedQueue<>();
      a.cd = null;
      a.enf = false;
      a.fhx = new Random();
      ffn[] var3 = new ffn[]{a.dte, a.dtq, a.elu, a.gsk, a.bne, a.evs, null, null, null};
      var3[6] = a.gvk;
      var3[7] = a.hba;
      var3[8] = a.gwc;
      a.bfi(var3);
   }

   @gdz
   public void axo(amo event) {
      long ax = Backtrack.a ^ 126046951648074L;
      int[] axx = ClientSetup.abu();
      amo var10000 = a;
      if (a.cud() != gpy.RECEIVE) {
         return;
      }

      var10000 = a;

      if (var10000.fmc()) {
         return;
      }

      var10000 = a;

      class_2596<?> axxx = var10000.bed();
      int var15 = axxx instanceof class_2797;
      if (var15 != 0) {
         return;
      }

      var15 = axxx instanceof class_7472;

      if (var15 != 0) {
         return;
      }

      var15 = axxx instanceof class_7439;

      if (var15 != 0) {
         return;
      }

      var15 = axxx instanceof class_2708;

      label278: {
         if (var15 != 0) {
            break label278;
         }

         var15 = axxx instanceof class_2661;

         if (var15 != 0) {
            break label278;
         }

         var15 = axxx instanceof class_2749;

         label219: {
            label260: {
               label217:
               if (var15 != 0) {
                  float var26;
                  var15 = (var26 = ((class_2749)axxx).method_11833() - 0.0F) == 0.0F ? 0 : (var26 < 0.0F ? -1 : 1);

                  if (var15 <= 0) {
                     bpa.dhu("release");
                     a.enu(true);
                     return;
                  }
               }

               var16 = axxx;

               var15 = axxx instanceof class_2767;

               if (var15 == 0) {
                  break label219;
               }

               var16 = axxx;
            }

            class_2767 axxxx = (class_2767)var16;
            if (axxxx.method_11894().comp_349() == class_3417.field_15115) {
               return;
            }
         }

         Backtrack var17 = a;
         label157:
         if (a.ctp != null) {
            label199: {
               label198: {
                  class_2596 var18 = axxx;
                  if (!(axxx instanceof class_2684)) {
                     break label198;
                  }

                  var18 = axxx;

                  if (((class_2684)var18).method_11645(chi.field_1687) == a.ctp) {
                     var19 = true;
                     break label199;
                  }
               }

               var19 = false;
            }

            boolean axxxx;
            label190: {
               label263: {
                  axxxx = var19;
                  var20 = axxx instanceof class_2777;
                  if (var20 == 0) {
                     break label263;
                  }

                  var20 = ((class_2777)axxx).comp_3237();


                  if (var20 == a.ctp.method_5628()) {
                     var20 = 1;
                     break label190;
                  }
               }

               var20 = 0;
            }

            label264: {
               boolean axxxxx = (boolean)var20;
               int var21 = axxxx;
               if (axxxx != 0) {
                  break label264;
               }

               var21 = axxxxx;


               if (var21 == 0) {
                  break label157;
               }
            }

            class_243 axxxxxx;
            label173: {
               label265: {
                  axxxxxx = null;
                  boolean var22 = axxx instanceof class_2684;
                  label169: {
                     if (var22) {
                        var23 = axxx;

                        class_2684 axxxxxxx = (class_2684)var23;
                        if (a.cd != null) {
                           axxxxxx = a.cd.method_43489(axxxxxxx.method_36150(), axxxxxxx.method_36151(), axxxxxxx.method_36152());
                           break label173;
                        }
                     }

                     var23 = axxx;
                  }


                  var22 = var23 instanceof class_2777;

                  if (!var22) {
                     break label173;
                  }

                  var23 = axxx;
               }

               class_2777 axxxxxxx = (class_2777)var23;
               axxxxxx = new class_243(
                  axxxxxxx.comp_3238().comp_3148().field_1352, axxxxxxx.comp_3238().comp_3148().field_1351, axxxxxxx.comp_3238().comp_3148().field_1350
               );
            }

            if (axxxxxx != null) {
               class_7422 var24 = a.cd;
               if (a.cd == null) {
                  a.cd = new class_7422();
               }

               var24 = a.cd;

               var24.method_43494(axxxxxx);
               double axxxxxxx = axxxxxx.method_1025(chi.field_1724.method_73189());
               double axxxxxxxx = a.ctp.method_5858(chi.field_1724);
               double var27;
               int var25 = (var27 = axxxxxxx - axxxxxxxx) == 0.0 ? 0 : (var27 < 0.0 ? -1 : 1);

               if (var25 < 0) {
                  a.enu();
                  return;
               }
            }
         }

         a.gmm(true);
         var17 = a;

         var17.etp.add(new arw(axxx, System.currentTimeMillis()));
         return;
      }

      a.enu(true);
   }

   @gdz
   public void bog(eov event) {
      long ax = Backtrack.a ^ 41560172006113L;
      int[] var10000 = ClientSetup.abu();
      class_1297 axx = a.hfw();
      int[] axxx = var10000;

      a.hhe = System.currentTimeMillis();
      a.exx = a.fhx.nextInt(101);

      Backtrack var6 = a;
      if (!a.hba.emb("Attack")) {
         return;
      }

      var6 = a;

      var6.fix(axx);
   }

   @gdz
   public void cop(fnt event) {
      long ax = Backtrack.a ^ 103292497763050L;
      int[] axx = ClientSetup.abu();
      if (a.cud() == gpy.POST) {
         return;
      }

      a.efe(a.aoz + "ms");

      label71: {
         Backtrack var6;
         label75: {
            boolean var10000 = a.hba.emb("Range");
            label60:
            if (var10000) {
               label65: {
                  class_1309 axxx = bav.elv(false, false, false, true, false, a.dte.dnp().floatValue()).getFirst();

                  a.fix(axxx);

                  break label60;
               }

               a.fbf();
            }

            var6 = a;

            var10000 = a.eiu();

            if (var10000) {
               a.buu(false);
               break label71;
            }

            var6 = a;
         }

         var6.fbf();
      }

      a.awx.removeIf(axxxx -> {
         gix.fdw((class_2596<?>)axxxx);
         return true;
      });
      Backtrack var7 = a;
      if (!a.cz()) {
         return;
      }

      var7 = a;

      var7.aoz = a.fe();
   }

   @gdz
   public void cpc(bsm event) {
      long ax = Backtrack.a ^ 126319906456998L;
      int[] axx = ClientSetup.abu();
      Backtrack var10000 = a;
      if (a.cd == null) {
         return;
      }

      var10000 = a;

      class_1297 var10 = var10000.ctp;
      if (var10000.ctp == null) {
         return;
      }

      var10 = a.ctp;

      class_4048 axxx = var10.method_18377(a.ctp.method_18376());
      double axxxx = axxx.comp_2185() / 2.0;
      class_238 axxxxx = new class_238(-axxxx, 0.0, -axxxx, axxxx, axxx.comp_2186(), axxxx).method_1014(0.05);
      class_243 axxxxxx = a.cd.method_60933();
      if (axxxxxx != null) {
         class_4587 var11 = a.bus();
         class_238 var10001 = axxxxx.method_997(axxxxxx);
         Color var10002 = ClientSetup.gqy().deo();
         bqf.hjf(var11, var10001, var10002, 200);
      }
   }

   @gdz
   public void cxs(dgk event) {
      a.enu(true);
   }

   private void fix(class_1297 a) {
      int var6;
      label49: {
         label52: {
            long ax = Backtrack.a ^ 120450238580846L;
            int[] axx = ClientSetup.abu();
            class_1297 var10001 = a;
            if (!(a instanceof class_1309)) {
               break label52;
            }

            var10001 = a;

            class_1309 axxx = (class_1309)var10001;
            var6 = a.evs.dnp();
            if (var6 == 0) {
               break label52;
            }

            var6 = axxx.field_6235;


            if (var6 >= a.gvk.dnp().intValue()) {
               var6 = 1;
               break label49;
            }
         }

         var6 = 0;
      }

      a.enf = (boolean)var6;
      if (a.eaa(a)) {
         if (a != a.ctp) {
            a.enu(false);
            a.cd = new class_7422();
            a.cd.method_43494(a.method_73189());
         }

         a.ctp = a;
      }
   }

   private boolean eaa(class_1297 a) {
      long ax = Backtrack.a ^ 124871073660751L;
      int[] var10000 = ClientSetup.abu();
      double axx = chi.field_1724.method_5739(a);
      int[] axxx = var10000;
      double var18;
      int var12 = (var18 = axx - a.dte.dnp().floatValue()) == 0.0 ? 0 : (var18 < 0.0 ? -1 : 1);
      var12 = var12 <= 0 ? 1 : 0;

      boolean axxxx = (boolean)var12;
      int var13 = axxxx;
      if (axxxx != 0) {
         a.blj = System.currentTimeMillis();
      }

      long var19;
      var13 = (var19 = System.currentTimeMillis() - a.blj - a.gsk.dnp().longValue()) == 0L ? 0 : (var19 < 0L ? -1 : 1);

      var13 = var13 <= 0 ? 1 : 0;

      boolean axxxxx = (boolean)var13;
      int var14 = a.exx;
      var14 = a.exx < a.bne.dnp().intValue() ? 1 : 0;

      boolean axxxxxx = (boolean)var14;
      boolean var15 = a.enf;
      var15 = !a.enf;

      boolean axxxxxxx = var15;
      long var20;
      int var16 = (var20 = System.currentTimeMillis() - a.hhe - a.gwc.dnp().longValue()) == 0L ? 0 : (var20 < 0L ? -1 : 1);
      var16 = var16 <= 0 ? 1 : 0;

      boolean axxxxxxxx;
      axxxxxxxx = (boolean)var16;
      var17 = axxxx;
      label130:
      if (axxxx == 0) {
         var17 = axxxxx;

         if (axxxxx == 0) {
            return (boolean)0;
         }
      }

      var17 = a.method_5805();

      if (var17 == 0) {
         return (boolean)0;
      }

      var17 = chi.field_1724.field_6012;

      if (var17 <= 10) {
         return (boolean)0;
      }

      var17 = axxxxxx;

      if (var17 == 0) {
         return (boolean)0;
      }

      var17 = axxxxxxx;

      if (var17 == 0) {
         return (boolean)0;
      }

      var17 = axxxxxxxx;

   }

   private void buu(boolean a) {
      long ax = System.currentTimeMillis();
      a.etp.removeIf(axx -> {
         long ax = Backtrack.a ^ 1233213960469L;
         int[] var7 = ClientSetup.abu();
         int var10000 = a;
         label27:
         if (!a) {
            long var9;
            var10000 = (var9 = axx.bqk() - (a - a.aoz)) == 0L ? 0 : (var9 < 0L ? -1 : 1);
            if (var10000 <= 0) {
               break label27;
            }

            var10000 = 0;

            return (boolean)var10000;
         }

         gix.fdw(axx.aew());
         var10000 = 1;

         return (boolean)var10000;
      });
   }

   private void enu(boolean a) {
      label21: {
         label20: {
            long ax = Backtrack.a ^ 97067212687722L;
            int[] var4 = ClientSetup.abu();
            if (!a) {
               break label20;
            }

            a.enu();

            break label21;
         }

         a.etp.clear();
      }

      a.awx.clear();
      a.ctp = null;
      a.cd = null;
      a.enf = false;
   }

   public void enu() {
      long a = Backtrack.a ^ 83900531160300L;
      int[] ax = ClientSetup.abu();

      while (!a.etp.isEmpty()) {
         label21: {
            arw axx = a.etp.poll();
            arw var10000 = axx;

            var10000 = axx;

            gix.fdw(var10000.aew());
         }

      }
   }

   private void fbf() {
      a.enu(true);
   }

   private boolean eiu() {
      long a = Backtrack.a ^ 107710744394892L;
      int[] var3 = ClientSetup.abu();
      class_1297 var10000 = a.ctp;
      if (a.ctp == null) {
         return false;
      }

      var10000 = a.ctp;

      boolean var4 = var10000.method_5805();
      if (!var4) {
         return false;
      }

      var4 = a.eaa(a.ctp);

      return var3 == null ? var4 : var4;
   }

   private boolean cz() {
      long a = Backtrack.a ^ 112732134929684L;
      int[] var3 = ClientSetup.abu();
      boolean var10000 = a.etp.isEmpty();
      if (!var10000) {
         return false;
      }

      var10000 = a.awx.isEmpty();

      return var3 == null ? var10000 : var10000;
   }

   private long fe() {
      int a = a.dtq.dnp().intValue();
      int ax = a.elu.dnp().intValue();
      return a + a.fhx.nextInt(ax - a + 1);
   }

   @Override
   public void auj() {
      long a = Backtrack.a ^ 129474306589149L;
      a.aoz = a.fe();
      a.exx = a.fhx.nextInt(101);
      a.enu(false);
      super.auj();
   }

   @Override
   public void frg() {
      a.enu();
      a.awx.clear();
      a.ctp = null;
      a.cd = null;
      a.enf = false;
      super.frg();
   }

   static {
      long var11 = a ^ 135122448242936L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[14];
      int var18 = 0;
      String var17 = "\u0088säê\u0000\u001ff-\u0010Z\u000e°ýp2\u0099\u00107\u0016¯bâ(\u007f-ÂP\u0090V¹¥\f÷\u0010\u0092\u0093\u0011½\u000b\u0092\u0093r\u001emß°lcã7(\u0000û?\u00976ìdjÝ\u0000Ä\u000eñÀ³à\bMU{Vv\u008b\u0006ç\u008füÅÛòîf\u0084\u0099&ÛYM\u0016\u008e\u0010ñ[Á\u0015LP\u009bP<\u0004\u0010òjkÞt G\u009b¯P5L\u008a_\u0084\u0087³pÑ!\u008f\u0081Ø\u0001\"x\u0013O\u008a`ÄÛ#\fÍY\u001d¸ %;K\u0017\nA*<\u0088\u0005¥dKö\u0013ï¾~ä\u0001Ö\u0090Î\u001e¢\u0080\u009cw\u001cÝ\u0092w\u0010êÅ\u0015_ÝvÄG\u001b¿¦\u00ad\u0010Øü³ \u0084×ÞÇZ\u0099\u000bpCS\u0086?Z\u008f\\©Ë\u0081õ!J´Wny@\u0088øÇ\u0018\u0017/\u0010æ@Ë-\u0090º8\u0090\u0005¿±~¨¼º*\u0010XJ|\u009c\u0093¸fØm#\u0014Oî\u001aGN07F`¾\u0005SXç§\u0091½\u008fÑ?qåbú\u001cu\u0019¼(_7)N:©\u007f\u0006½?Ã{¢PÀ,º²ÎÁÌT\u0083\u0004ï";
      int var19 = "\u0088säê\u0000\u001ff-\u0010Z\u000e°ýp2\u0099\u00107\u0016¯bâ(\u007f-ÂP\u0090V¹¥\f÷\u0010\u0092\u0093\u0011½\u000b\u0092\u0093r\u001emß°lcã7(\u0000û?\u00976ìdjÝ\u0000Ä\u000eñÀ³à\bMU{Vv\u008b\u0006ç\u008füÅÛòîf\u0084\u0099&ÛYM\u0016\u008e\u0010ñ[Á\u0015LP\u009bP<\u0004\u0010òjkÞt G\u009b¯P5L\u008a_\u0084\u0087³pÑ!\u008f\u0081Ø\u0001\"x\u0013O\u008a`ÄÛ#\fÍY\u001d¸ %;K\u0017\nA*<\u0088\u0005¥dKö\u0013ï¾~ä\u0001Ö\u0090Î\u001e¢\u0080\u009cw\u001cÝ\u0092w\u0010êÅ\u0015_ÝvÄG\u001b¿¦\u00ad\u0010Øü³ \u0084×ÞÇZ\u0099\u000bpCS\u0086?Z\u008f\\©Ë\u0081õ!J´Wny@\u0088øÇ\u0018\u0017/\u0010æ@Ë-\u0090º8\u0090\u0005¿±~¨¼º*\u0010XJ|\u009c\u0093¸fØm#\u0014Oî\u001aGN07F`¾\u0005SXç§\u0091½\u008fÑ?qåbú\u001cu\u0019¼(_7)N:©\u007f\u0006½?Ã{¢PÀ,º²ÎÁÌT\u0083\u0004ï"
         .length();
      char var16 = 16;
      int var24 = -1;

      label54:
      while (true) {
         String var25 = var17.substring(++var24, var24 + var16);
         int var10001 = -1;

         while (true) {
            byte[] var21 = var13.doFinal(var25.getBytes("ISO-8859-1"));
            String var36 = d(var21).intern();
            switch (var10001) {
               case 0:
                  var20[var18++] = var36;
                  if ((var24 += var16) >= var19) {
                     g = var20;
                     h = new String[14];
                     r = new HashMap(13);
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
                     String var4 = "11þ+.2ÚNf?\u0091y@\u0099Âç\u0007\b¶ûjØ.Â\u0088T\u0013àÐ_j\u00adq0={1Ú>üéXcK4Â11";
                     int var5 = "11þ+.2ÚNf?\u0091y@\u0099Âç\u0007\b¶ûjØ.Â\u0088T\u0013àÐ_j\u00adq0={1Ú>üéXcK4Â11".length();
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
                                    p = var6;
                                    q = new Integer[8];
                                    return;
                                 }
                                 break;
                              default:
                                 var28[var10001] = var45;
                                 if (var2 < var5) {
                                    continue label36;
                                 }

                                 var4 = "\u007f*÷\u001eßßÍÍwAÑR ¬Í;";
                                 var5 = "\u007f*÷\u001eßßÍÍwAÑR ¬Í;".length();
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

                  var17 = "¢¢¶$# ·\u0081+\fß!\u0087®yæ\u0010¥Ê\u008d\u000fùÞ\u008eý^Ô\u009a\u000fS\u008a\u0011Ø";
                  var19 = "¢¢¶$# ·\u0081+\fß!\u0087®yæ\u0010¥Ê\u008d\u000fùÞ\u008eý^Ô\u009a\u000fS\u008a\u0011Ø".length();
                  var16 = 16;
                  var24 = -1;
            }

            var25 = var17.substring(++var24, var24 + var16);
            var10001 = 0;
         }
      }
   }

   private static int e(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 9802;
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
            throw new RuntimeException("cc/astralis/dvw", var14);
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
         throw new RuntimeException("cc/astralis/dvw" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }
}
