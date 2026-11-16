package cc.astralis;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1306;
import net.minecraft.class_3532;
import net.minecraft.class_4587;
import net.minecraft.class_7833;
import org.joml.Vector3f;

public class Animations extends guu {
   public static adu diq;
   public bes fql;
   public static bes agv;
   public static bes hez;
   public static bes ant;
   public static gbp fga;
   private static final long a = 65225972949721L;
   private static final String[] g;
   private static final String[] h;
   private static final Map i = new HashMap(13);
   private static final long[] p;
   private static final Integer[] q;
   private static final Map r;

   public Animations() {
      long a = Animations.a ^ 126636098097616L;
      super(bfm.VISUAL);
      a.fql = new bes("Speed", 1.0F, 0.0F, 1.0F, 0.1F);
      a.bfi(new ffn[]{diq, a.fql, agv, hez, ant, fga});
   }

   @gdz
   public void gie(fxx event) {
      a.efe(diq.dnp());
   }

   public static void apw(class_4587 matrixStack, class_1306 arm, float swingProgress, float equipProgress) {
      long ax;
      int[] axx;
      int axxx;
      float axxxx;
      float axxxxx;
      int var10000;
      ax = Animations.a ^ 18247149726056L;
      axx = dar.abu();
      axxx = a == class_1306.field_6183 ? 1 : -1;
      axxxx = class_3532.method_15374((float)(a * a * Math.PI));
      axxxxx = class_3532.method_15374((float)(class_3532.method_15355(a) * Math.PI));
      float axxxxxx = agv.dnp().floatValue();
      float axxxxxxx = hez.dnp().floatValue();
      float axxxxxxxx = ant.dnp().floatValue();
      a.method_46416(a == class_1306.field_6183 ? -axxxxxx : axxxxxx, axxxxxxx, axxxxxxxx);
      String var13 = diq.dnp();
      byte var14 = -1;
      var10000 = var13.hashCode();
      label281:
      if (axx != null) {
         switch (var10000) {
            case 48570:
               var10000 = var13.equals("1.7");
               if (axx == null) {
                  break label281;
               }

               if (var10000 == 0) {
                  break;
               }

               var14 = 0;
               if (axx != null) {
                  break;
               }
            case -352259601:
               var10000 = var13.equals("Exhibition");
               if (axx == null) {
                  break label281;
               }

               if (var10000 == 0) {
                  break;
               }

               var14 = 1;
               if (axx != null) {
                  break;
               }
            case 79973777:
               var10000 = var13.equals("Slide");
               if (axx == null) {
                  break label281;
               }

               if (var10000 == 0) {
                  break;
               }

               var14 = 2;
               if (axx != null) {
                  break;
               }
            case -268477211:
               var10000 = var13.equals("Astralis");
               if (axx == null) {
                  break label281;
               }

               if (var10000 == 0) {
                  break;
               }

               var14 = 3;
               if (axx != null) {
                  break;
               }
            case 80294106:
               var10000 = var13.equals("Swank");
               if (axx == null) {
                  break label281;
               }

               if (var10000 == 0) {
                  break;
               }

               var14 = 4;
               if (axx != null) {
                  break;
               }
            case 79367:
               var10000 = var13.equals("Old");
               if (axx == null) {
                  break label281;
               }

               if (var10000 == 0) {
                  break;
               }

               var14 = 5;
               if (axx != null) {
                  break;
               }
            case 2603186:
               var10000 = var13.equals("Test");
               if (axx == null) {
                  break label281;
               }

               if (var10000 == 0) {
                  break;
               }

               var14 = 6;
               if (axx != null) {
                  break;
               }
            case -454610589:
               var10000 = var13.equals("Slide 2");
               if (axx == null) {
                  break label281;
               }

               if (var10000 == 0) {
                  break;
               }

               var14 = 7;
               if (axx != null) {
                  break;
               }
            case 2109902691:
               var10000 = var13.equals("Fomica");
               if (axx == null) {
                  break label281;
               }

               if (var10000 == 0) {
                  break;
               }

               var14 = 8;
               if (axx != null) {
                  break;
               }
            case 83843:
               var10000 = var13.equals("Tap");
               if (axx == null) {
                  break label281;
               }

               if (var10000 == 0) {
                  break;
               }

               var14 = 9;
               if (axx != null) {
                  break;
               }
            case 749954596:
               var10000 = var13.equals("Zero Day");
               if (axx == null) {
                  break label281;
               }

               if (var10000 == 0) {
                  break;
               }

               var14 = 10;
               if (axx != null) {
                  break;
               }
            case 87941:
               var10000 = var13.equals("Xiv");
               if (axx == null) {
                  break label281;
               }

               if (var10000 != 0) {
                  var14 = 11;
               }
         }

         var10000 = var14;
      }

      switch (var10000) {
         case 0:
            a.method_46416(-0.04F, 0.05F, 0.04142136F);
            ge(a, a, a);
            if (axx != null) {
               break;
            }
         case 1:
            a.method_22907(class_7833.field_40714.rotationDegrees(-290.0F));
            a.method_22907(class_7833.field_40716.rotationDegrees(-60.635F * axxx));
            a.method_22907(class_7833.field_40718.rotationDegrees(106.55F));
            a.method_22907(class_7833.field_40714.rotationDegrees(axxxxx * 31.0F * 0.4F));
            a.method_22907(class_7833.field_40718.rotationDegrees(axxxxx * 31.0F * 1.5F));
            if (axx != null) {
               break;
            }
         case 2:
            class_4587 var25 = a;
            class_7833 var46 = class_7833.field_40714;
            if (axx != null) {
               a.method_22907(class_7833.field_40714.rotationDegrees(-275.5F));
               var25 = a;
               var46 = a == class_1306.field_6183 ? class_7833.field_40716 : class_7833.field_40715;
            }

            var25.method_22907(var46.rotationDegrees(axxx * -51.635F));
            var46 = a == class_1306.field_6183 ? class_7833.field_40718 : class_7833.field_40717;
            a.method_22907(var46.rotationDegrees(axxx * 110));
            a.method_22907(class_7833.field_40714.rotationDegrees(axxxxx * 20.0F * 1.5F));
            if (axx != null) {
               break;
            }
         case 3:
            class_4587 var26 = a;
            class_7833 var48 = class_7833.field_40714;
            if (axx != null) {
               a.method_22907(class_7833.field_40714.rotationDegrees(-275.5F));
               var26 = a;
               var48 = a == class_1306.field_6183 ? class_7833.field_40716 : class_7833.field_40715;
            }

            var26.method_22907(var48.rotationDegrees(axxx * -40.0F));
            var48 = a == class_1306.field_6183 ? class_7833.field_40718 : class_7833.field_40717;
            a.method_22907(var48.rotationDegrees(axxx * 140));
            a.method_22907(class_7833.field_40714.rotationDegrees(axxxxx * 30.0F));
            a.method_22907(class_7833.field_40718.rotationDegrees(axxxxx * 45.0F));
            if (axx != null) {
               break;
            }
         case 4:
            a.method_46416(-0.04F, 0.1F, 0.04142136F);
            a.method_22907(class_7833.field_40714.rotationDegrees(-275.5F));
            a.method_22907(class_7833.field_40716.rotationDegrees(axxx * -51.635F));
            a.method_22907(class_7833.field_40718.rotationDegrees(axxx * 106.55F));
            a.method_22907(class_7833.field_40716.rotationDegrees(axxxxx * 32.0F));
            a.method_22907(class_7833.field_40714.rotationDegrees(axxxxx));
            a.method_22907(class_7833.field_40716.rotationDegrees(axxx * (45.0F + axxxx * 20.0F)));
            a.method_22907(class_7833.field_40718.rotationDegrees(axxx * axxxxx * 75.0F));
            a.method_22907(class_7833.field_40714.rotationDegrees(axxxxx * -20.0F));
            a.method_22907(class_7833.field_40716.rotationDegrees(axxx * -45.0F));
            if (axx != null) {
               break;
            }
         case 5:
            a.method_46416(-0.04F, 0.05F, 0.04142136F);
            a.method_22907(class_7833.field_40714.rotationDegrees(-275.5F));
            a.method_22907(class_7833.field_40716.rotationDegrees(axxx * -51.635F));
            a.method_22907(class_7833.field_40718.rotationDegrees(axxx * 106.55F));
            a.method_22907(class_7833.field_40716.rotationDegrees(axxx * (45.0F + axxxx * 20.0F)));
            a.method_22907(class_7833.field_40718.rotationDegrees(axxx * axxxxx * 75.0F));
            a.method_22907(class_7833.field_40714.rotationDegrees(axxxxx * -20.0F));
            a.method_22907(class_7833.field_40716.rotationDegrees(axxx * -45.0F));
            if (axx != null) {
               break;
            }
         case 6:
            a.method_22907(class_7833.field_40714.rotationDegrees(-200.0F + axxxxx * -75.0F));
            a.method_22907(class_7833.field_40716.rotationDegrees(axxx * -40.0F));
            a.method_22907(class_7833.field_40718.rotationDegrees(axxx * 90.0F));
            a.method_46416(0.0F, -axxxxx * 0.3F, 0.0F);
            if (axx != null) {
               break;
            }
         case 7:
            class_4587 var27 = a;
            class_7833 var50 = class_7833.field_40714;
            if (axx != null) {
               a.method_22907(class_7833.field_40714.rotationDegrees(-275.5F));
               var27 = a;
               var50 = a == class_1306.field_6183 ? class_7833.field_40716 : class_7833.field_40715;
            }

            var27.method_22907(var50.rotationDegrees(axxx * -51.635F));
            var50 = a == class_1306.field_6183 ? class_7833.field_40718 : class_7833.field_40717;
            a.method_22907(var50.rotationDegrees(axxx * 120));
            a.method_22907(class_7833.field_40714.rotationDegrees(axxxxx * 20.0F * 1.5F));
            if (axx != null) {
               break;
            }
         case 8:
            class_4587 var28 = a;
            class_7833 var52 = class_7833.field_40714;
            if (axx != null) {
               a.method_22907(class_7833.field_40714.rotationDegrees(-275.5F));
               var28 = a;
               var52 = a == class_1306.field_6183 ? class_7833.field_40716 : class_7833.field_40715;
            }

            var28.method_22907(var52.rotationDegrees(axxx * -51.635F));
            var52 = a == class_1306.field_6183 ? class_7833.field_40718 : class_7833.field_40717;
            a.method_22907(var52.rotationDegrees(axxx * 110));
            a.method_22907(class_7833.field_40714.rotationDegrees(axxxxx * 360.0F * 1.5F));
            if (axx != null) {
               break;
            }
         case 9:
            float axxxxxxxxxxxx = class_3532.method_15374((float)Math.sqrt(a) * 3.0F);
            a.method_22904(-0.06, 0.1, 0.0);
            gmj(a, a, a / 2.5F);
            a.method_22907(class_7833.method_46356(new Vector3f(axxxxxxxxxxxx / 2.0F, 1.0F, 4.0F)).rotationDegrees(-axxxxxxxxxxxx * 20.0F));
            a.method_22907(class_7833.method_46356(new Vector3f(1.0F, axxxxxxxxxxxx / 3.0F, 0.0F)).rotationDegrees(-axxxxxxxxxxxx * 30.0F));
            if (axx != null) {
               break;
            }
         case 10:
            float axxxxxxxxxxx = class_3532.method_15374((float)Math.sqrt(a) * 3.0F) * 1.75F;
            gmj(a, a, a / 2.5F);
            a.method_22904(-0.06, Math.sin(System.currentTimeMillis() / 150.0) * 0.15 + 0.42, 0.0);
            a.method_22907(class_7833.method_46356(new Vector3f(3.2F, 2.0F, 8.0F)).rotationDegrees(-axxxxxxxxxxx * 20.0F));
            a.method_22907(class_7833.method_46356(new Vector3f(1.0F, axxxxxxxxxxx / 3.5F, 0.0F)).rotationDegrees(-axxxxxxxxxxx * 10.0F - 10.0F));
            if (axx != null) {
               break;
            }
         case 11:
            float axxxxxxxxx = class_3532.method_15374((float)(class_3532.method_15355(a) * Math.PI));
            a.method_46416(-0.04F, 0.05F, 0.04142136F);
            a.method_22907(class_7833.field_40714.rotationDegrees(-275.5F));
            a.method_22907(class_7833.field_40716.rotationDegrees(axxx * -51.635F));
            a.method_22907(class_7833.field_40718.rotationDegrees(axxx * 106.55F));
            float axxxxxxxxxx = class_3532.method_15374((float)(a * a * Math.PI));
            a.method_22907(class_7833.field_40716.rotationDegrees(-axxxxxxxxxx * 20.0F));
            a.method_22907(class_7833.field_40718.rotationDegrees(-axxxxxxxxx * 20.0F));
            a.method_22907(class_7833.field_40714.rotationDegrees(-axxxxxxxxx * 80.0F));
      }
   }

   private static void ge(class_4587 a, class_1306 a, float a) {
      long ax = Animations.a ^ 94905921551775L;
      int axx = a == class_1306.field_6183 ? 1 : -1;
      float axxx = class_3532.method_15374(a * a * (float) Math.PI);
      a.method_22907(class_7833.field_40716.rotationDegrees(axx * (45.0F + axxx * -20.0F)));
      float axxxx = class_3532.method_15374(class_3532.method_15355(a) * (float) Math.PI);
      a.method_22907(class_7833.field_40718.rotationDegrees(axx * axxxx * -20.0F));
      a.method_22907(class_7833.field_40714.rotationDegrees(axxxx * -80.0F));
      a.method_22907(class_7833.field_40716.rotationDegrees(axx * -45.0F));
   }

   private static void gmj(class_4587 a, class_1306 a, float a) {
      long ax = Animations.a ^ 51850815120167L;
      int axx = a == class_1306.field_6183 ? 1 : -1;
      a.method_46416(axx * 0.56F, -0.52F + a * -0.6F, -0.72F);
   }

   static {
      long var20 = a ^ 24163426514528L;
      Cipher var11;
      Cipher var10000 = var11 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var20 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var12 = 1; var12 < 8; var12++) {
         var10003[var12] = (byte)(var20 << var12 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var18 = new String[30];
      int var16 = 0;
      String var15 = "ÃO\u0092û.d\u0086 ©æ\u0016yá\u0082\u001eT\u0010òµïÝ,J¦Ý¤¹ã`oÈP\u009a\u0010\u00967ã\u008eë7ÍF\f@=PôACõ\u0010~U\u009e[òv\u00152Åpk¨þæé\u0016\u0010\u008c\u000fù\táÕ$\u0006,Øà!\u0019Hß*\u0010\u0095V\u001em·t1¢\u0082á+\nrí%}\u0010\u0017\u0084&îº\u000e°|¹\u0012 MÊLíG0ðÙEz`\u0019£¸\u008f\u0088\u0091\u0095\u0089>%\u008aÃØY\u0000ñV;q8B\\\u0007?\u0010\u000fò\u0092ä\u001e¬K\u0013ù©\bråiµ\u00837j\u0010\u0097¤àÎ\u001c\u001a>3ÃLY£v³úè lÿ\u0089B\u0006M¸hW¾\u009d<:\u0011dõ~õZuÅGl¨û©\u0005\u0017´\u0011\u0016Ã\u0010ýþl°³\u0099>³\u0002!FÑ\u0011{ Ã\u0010\u0081Ö\u0007\u008cíj\u0016üXEySV'F\u0004 èLo\u0015\u0007\u0019¿%Ô5\u008bdhI21\u0080ãÆ1_-Ç\f\u009d,¤ûX\u0013À\u0013 C\u0011\u0097äÍ\u009eTT;O\u0083n\u00976\u0014\u0014¯ý\u009b_¤\u0095½a'\u0084ù\u0001\u001b$ÿ/\u0010I\u0011ÿ\u0089F8\u009dP'\u0016M\u001aíß{±\u0010n©Ï& 4\u0084\u0007ä¤\u008bè²@à\b\u0010O\u008f\u0014\u0001\u009bó=qæQë\u000f²ü\u0016¡ VjE;1\u0080\u000fò1\u008a´[\u001a+\u0090Úorl®«Jh\u00ad\u009c\u00167\nPq\u001d  ßª\u0017Å\u0000+×LÎ³ÃcívÉ.\u0019Æ\u0007\u0087¥6F÷J@\u000fË@è\u0015\u00ad ÿ\u001e\u0099\u0081«xòj¬¸\u0001ý\u0014\u000f\u0090ÑÄÆìj¿´ÿ\u001eîPYXt\u0089¿L\u0010ùß\u009b?Íh×Ä¯ßÓ\u008b\u007fx\u001at\u0010d\u0085°\u000b\u000b4\u009e\u0016\u000fá;u×NÚJ R\u0007¯\u0001Ã4+/Ô\u0012\u000e*\u0086\u0013²ÇÎ]Y\u0097!^o\u000eñò\u008a´O\u001d±n\u0010í\u0012wÊ\u0099D'2Ü\ry\u0002+µ^\u0083\u0010¤ZÒ\u0096%/Ð&ñ\u000baª\u0014ZaZ\u0010=:\"\u0087Åv ì\u008f\u0083\u0092UéÄ9\u0084\u00101C\u001aý®vÃì®\u0015E\u00adr£g\u000b\u00104éª3\u0099\u0085ßõG,\u0098{\u000eE¹Õ";
      int var17 = "ÃO\u0092û.d\u0086 ©æ\u0016yá\u0082\u001eT\u0010òµïÝ,J¦Ý¤¹ã`oÈP\u009a\u0010\u00967ã\u008eë7ÍF\f@=PôACõ\u0010~U\u009e[òv\u00152Åpk¨þæé\u0016\u0010\u008c\u000fù\táÕ$\u0006,Øà!\u0019Hß*\u0010\u0095V\u001em·t1¢\u0082á+\nrí%}\u0010\u0017\u0084&îº\u000e°|¹\u0012 MÊLíG0ðÙEz`\u0019£¸\u008f\u0088\u0091\u0095\u0089>%\u008aÃØY\u0000ñV;q8B\\\u0007?\u0010\u000fò\u0092ä\u001e¬K\u0013ù©\bråiµ\u00837j\u0010\u0097¤àÎ\u001c\u001a>3ÃLY£v³úè lÿ\u0089B\u0006M¸hW¾\u009d<:\u0011dõ~õZuÅGl¨û©\u0005\u0017´\u0011\u0016Ã\u0010ýþl°³\u0099>³\u0002!FÑ\u0011{ Ã\u0010\u0081Ö\u0007\u008cíj\u0016üXEySV'F\u0004 èLo\u0015\u0007\u0019¿%Ô5\u008bdhI21\u0080ãÆ1_-Ç\f\u009d,¤ûX\u0013À\u0013 C\u0011\u0097äÍ\u009eTT;O\u0083n\u00976\u0014\u0014¯ý\u009b_¤\u0095½a'\u0084ù\u0001\u001b$ÿ/\u0010I\u0011ÿ\u0089F8\u009dP'\u0016M\u001aíß{±\u0010n©Ï& 4\u0084\u0007ä¤\u008bè²@à\b\u0010O\u008f\u0014\u0001\u009bó=qæQë\u000f²ü\u0016¡ VjE;1\u0080\u000fò1\u008a´[\u001a+\u0090Úorl®«Jh\u00ad\u009c\u00167\nPq\u001d  ßª\u0017Å\u0000+×LÎ³ÃcívÉ.\u0019Æ\u0007\u0087¥6F÷J@\u000fË@è\u0015\u00ad ÿ\u001e\u0099\u0081«xòj¬¸\u0001ý\u0014\u000f\u0090ÑÄÆìj¿´ÿ\u001eîPYXt\u0089¿L\u0010ùß\u009b?Íh×Ä¯ßÓ\u008b\u007fx\u001at\u0010d\u0085°\u000b\u000b4\u009e\u0016\u000fá;u×NÚJ R\u0007¯\u0001Ã4+/Ô\u0012\u000e*\u0086\u0013²ÇÎ]Y\u0097!^o\u000eñò\u008a´O\u001d±n\u0010í\u0012wÊ\u0099D'2Ü\ry\u0002+µ^\u0083\u0010¤ZÒ\u0096%/Ð&ñ\u000baª\u0014ZaZ\u0010=:\"\u0087Åv ì\u008f\u0083\u0092UéÄ9\u0084\u00101C\u001aý®vÃì®\u0015E\u00adr£g\u000b\u00104éª3\u0099\u0085ßõG,\u0098{\u000eE¹Õ"
         .length();
      char var14 = 16;
      int var24 = -1;

      label54:
      while (true) {
         String var25 = var15.substring(++var24, var24 + var14);
         int var10001 = -1;

         while (true) {
            byte[] var19 = var11.doFinal(var25.getBytes("ISO-8859-1"));
            String var36 = d(var19).intern();
            switch (var10001) {
               case 0:
                  var18[var16++] = var36;
                  if ((var24 += var14) >= var17) {
                     g = var18;
                     h = new String[30];
                     r = new HashMap(13);
                     Cipher var0;
                     var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var20 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var20 << var1 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var6 = new long[17];
                     int var3 = 0;
                     String var4 = "®6\u000b\u009a)5ý°=«\u009c\u000er§<\u0015\u007f\u009biÁ5\u0010\u0013Ãç\u001fCâ{3X\u0002®ÚO V½\u008d¸c\u0081\u0081x\u000e÷a_%ËÒ\u00134\bà-\u0010ß4M¿Î\u0001\u0086`T9Nñþà\u0099ýí&ºÒð\u0002Û\u001e\u0097³'lu\u0000\u0096\u0098½h\u0087'(\u0007Ç\fÇÚ\u008d:Oç$\u008eëo\u0092(%Þh\u0089²\u0013\u009f\u0002xd¬";
                     int var5 = "®6\u000b\u009a)5ý°=«\u009c\u000er§<\u0015\u007f\u009biÁ5\u0010\u0013Ãç\u001fCâ{3X\u0002®ÚO V½\u008d¸c\u0081\u0081x\u000e÷a_%ËÒ\u00134\bà-\u0010ß4M¿Î\u0001\u0086`T9Nñþà\u0099ýí&ºÒð\u0002Û\u001e\u0097³'lu\u0000\u0096\u0098½h\u0087'(\u0007Ç\fÇÚ\u008d:Oç$\u008eëo\u0092(%Þh\u0089²\u0013\u009f\u0002xd¬"
                        .length();
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
                        byte var48 = -1;

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
                           long var56 = (var10[0] & 255L) << 56
                              | (var10[1] & 255L) << 48
                              | (var10[2] & 255L) << 40
                              | (var10[3] & 255L) << 32
                              | (var10[4] & 255L) << 24
                              | (var10[5] & 255L) << 16
                              | (var10[6] & 255L) << 8
                              | var10[7] & 255L;
                           switch (var48) {
                              case 0:
                                 var28[var10001] = var56;
                                 if (var2 >= var5) {
                                    p = var6;
                                    q = new Integer[17];
                                    var56 = 4923559595926853910L ^ var20;
                                    String[] var59 = new String[12];
                                    var59[0] = "1.7";
                                    var59[1] = "Old";
                                    var59[2] = "Swank";
                                    var59[3] = "Test";
                                    var59[4] = "Astralis";
                                    var59[5] = "Fomica";
                                    var59[6] = "Exhibition";
                                    var59[7] = "Slide";
                                    var59[8] = "Slide 2";
                                    var59[9] = "Tap";
                                    var59[10] = "Zero Day";
                                    var59[11] = "Xiv";
                                    diq = new adu("Animation Mode", "1.7", var59);
                                    agv = new bes("Block X", 0.0F, -2.0F, 2.0F, 0.01F);
                                    hez = new bes("Block Y", 0.0F, -2.0F, 2.0F, 0.01F);
                                    ant = new bes("Block Z", 0.0F, -2.0F, 2.0F, 0.01F);
                                    fga = new gbp("Disable Item Swing Offset", false);
                                    return;
                                 }
                                 break;
                              default:
                                 var28[var10001] = var56;
                                 if (var2 < var5) {
                                    continue label36;
                                 }

                                 var4 = "¬\u001c\u001c\u0084*Ü\u001994Ùò\u001a\u0016wÒZ";
                                 var5 = "¬\u001c\u001c\u0084*Ü\u001994Ùò\u001a\u0016wÒZ".length();
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
                           var48 = 0;
                        }
                     }
                  }

                  var14 = var15.charAt(var24);
                  break;
               default:
                  var18[var16++] = var36;
                  if ((var24 += var14) < var17) {
                     var14 = var15.charAt(var24);
                     continue label54;
                  }

                  var15 = "£ÒrDI¡\fT×¨1\r³#dq\u0010h\u0000:e\u0083÷£Î4\u0000;8Ñ=ÜÊ";
                  var17 = "£ÒrDI¡\fT×¨1\r³#dq\u0010h\u0000:e\u0083÷£Î4\u0000;8Ñ=ÜÊ".length();
                  var14 = 16;
                  var24 = -1;
            }

            var25 = var15.substring(++var24, var24 + var14);
            var10001 = 0;
         }
      }
   }

   private static String d(byte[] var0) {
      int var1 = 0;
      int var2;
      char[] var3 = new char[var2 = var0.length];

      for (int var4 = 0; var4 < var2; var4++) {
         int var5;
         if ((var5 = 255 & var0[var4]) < 192) {
            var3[var1++] = (char)var5;
         } else if (var5 < 224) {
            char var6 = (char)((char)(var5 & 31) << 6);
            byte var8 = var0[++var4];
            var6 = (char)(var6 | (char)(var8 & 63));
            var3[var1++] = var6;
         } else if (var4 < var2 - 2) {
            char var12 = (char)((char)(var5 & 15) << '\f');
            byte var9 = var0[++var4];
            var12 = (char)(var12 | (char)(var9 & 63) << 6);
            var9 = var0[++var4];
            var12 = (char)(var12 | (char)(var9 & 63));
            var3[var1++] = var12;
         }
      }

      return new String(var3, 0, var1);
   }

   private static String b(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 17168;
      if (h[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])i.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               i.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("cc/astralis/bma", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = g[var5].getBytes("ISO-8859-1");
         h[var5] = d(((Cipher)var4[0]).doFinal(var9));
      }

      return h[var5];
   }

   private static Object b(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = b(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
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
         throw new RuntimeException("cc/astralis/bma" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static int e(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 29119;
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
            throw new RuntimeException("cc/astralis/bma", var14);
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
         throw new RuntimeException("cc/astralis/bma" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }
}
