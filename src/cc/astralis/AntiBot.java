package cc.astralis;


import java.lang.invoke.MethodHandles;


import java.util.Iterator;

import javax.crypto.Cipher;

import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_124;
import net.minecraft.class_1657;
import net.minecraft.class_2561;
import net.minecraft.class_640;

public class AntiBot extends guu {
   private static final gbp emm;
   private static final gbp bim;
   private static final gbp cih;
   private static final gbp dly;
   private static final gbp epc;
   private static final String ewr;
   private static final long a = 51241945858063L;
   private static final String[] g;
   private static final String[] h;

   private static final long p;

   public AntiBot() {
      super(bfm.COMBAT);
      a.bfi(new ffn[]{emm, bim, cih, dly, epc});
   }

   public static boolean cnv(class_1657 entityPlayer) {
      long ax = AntiBot.a ^ 123270302018317L;
      int[] var10000 = ClientSetup.abu();
      AntiBot axx = ClientSetup.gqy().aws().diy(AntiBot.class);
      int[] axxx = var10000;
      AntiBot var7 = axx;

      var7 = axx;

      boolean var8 = var7.dsv();
   }

   public static boolean dtl(class_640 playerInfo) {
      long ax = AntiBot.a ^ 65589964621998L;
      int[] var10000 = ClientSetup.abu();
      AntiBot axx = ClientSetup.gqy().aws().diy(AntiBot.class);
      int[] axxx = var10000;
      AntiBot var5 = axx;

      var5 = axx;

      boolean var6 = var5.dsv();
   }

   private static boolean dst(class_640 a) {
      long ax = AntiBot.a ^ 57983003000838L;
      int[] var10000 = ClientSetup.abu();
      Iterator var4 = chi.method_1562().method_2880().iterator();
      int[] axx = var10000;

      while (true) {
         if (var4.hasNext()) {
            class_640 axxx = (class_640)var4.next();
            var6 = axxx.method_2966().id().compareTo(a.method_2966().id());


            if (var6 == 0) {
               return (boolean)1;
            }

            continue;
         }

         var6 = 0;
         break;
      }

      return (boolean)var6;
   }

   private static boolean dcu(class_640 a, String a) {
      long ax = AntiBot.a ^ 8946743455655L;
      int[] var4 = ClientSetup.abu();
      class_2561 var10000 = a.method_2971();

      var10000 = a.method_2971();

      boolean var5 = class_124.method_539(var10000.getString()).startsWith(a);
      return var4 == null ? var5 : var5;
   }

   static {
      long var14 = a ^ 76413060841054L;
      Cipher var5;
      Cipher var10000 = var5 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var14 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var6 = 1; var6 < 8; var6++) {
         var10003[var6] = (byte)(var14 << var6 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var12 = new String[10];
      int var10 = 0;
      String var9 = "\u0012í\u0089ª\u0094\u0012ià>¿ïþ;½\u008af(êUÓ\u001b\u0016úñ³½Ë¨âr¬Ð$$a·±Û\u001f\u0091p½ÏäÍq\u0095YÙÖ8Ý÷û^\u001c\u000e\u00184¤\u0006\\\n\u0014w|nÒõ¾\fê½&\u0096>qPó\u0084\u0015U(*ÃZRQ\u008e4ÅV\u0088Fg\u0096KÒ\u001f\b\rc&IÇ\u0080\u0001\u0019Ab\u001cy\r*\u0091M¯\"¶ÝL¨\u001f(«\\\u0088©Òç\u0088nÇê½\u0006?z\u0012/ß?\u001be`\u009b{ToÊ\u0099\u0004\u008f\u009a\fÂ\u0092Qs\rxá\u0080\u0082\u0010;í.\u001c\u008b\b¾2Ïwu\u000bBM##\u0010H\u0019\u0083$\u008cöWþ«\u008eó¡v¥Yw0[¿\u009e\u001f\u009a\u0093ÿ\u0091ñ\u0094Täà_6>;:\u0012'G\u0088V´pÞ©NÀAè-j!\u0090è\u0089Z\u0082\u0084ºë)UN\u0007¾\f";
      int var11 = "\u0012í\u0089ª\u0094\u0012ià>¿ïþ;½\u008af(êUÓ\u001b\u0016úñ³½Ë¨âr¬Ð$$a·±Û\u001f\u0091p½ÏäÍq\u0095YÙÖ8Ý÷û^\u001c\u000e\u00184¤\u0006\\\n\u0014w|nÒõ¾\fê½&\u0096>qPó\u0084\u0015U(*ÃZRQ\u008e4ÅV\u0088Fg\u0096KÒ\u001f\b\rc&IÇ\u0080\u0001\u0019Ab\u001cy\r*\u0091M¯\"¶ÝL¨\u001f(«\\\u0088©Òç\u0088nÇê½\u0006?z\u0012/ß?\u001be`\u009b{ToÊ\u0099\u0004\u008f\u009a\fÂ\u0092Qs\rxá\u0080\u0082\u0010;í.\u001c\u008b\b¾2Ïwu\u000bBM##\u0010H\u0019\u0083$\u008cöWþ«\u008eó¡v¥Yw0[¿\u009e\u001f\u009a\u0093ÿ\u0091ñ\u0094Täà_6>;:\u0012'G\u0088V´pÞ©NÀAè-j!\u0090è\u0089Z\u0082\u0084ºë)UN\u0007¾\f"
         .length();
      char var8 = 16;
      int var17 = -1;

      label37:
      while (true) {
         String var18 = var9.substring(++var17, var17 + var8);
         byte var10001 = -1;

         while (true) {
            byte[] var13 = var5.doFinal(var18.getBytes("ISO-8859-1"));
            String var28 = d(var13).intern();
            switch (var10001) {
               case 0:
                  var12[var10++] = var28;
                  if ((var17 += var8) >= var11) {
                     g = var12;
                     h = new String[10];
                     ewr = "^[a-zA-Z0-9_]{1,16}+$";
                     Cipher var0;
                     var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var14 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var14 << var1 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long var2 = -7038938266478171742L;
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
                     long var32 = (var4[0] & 255L) << 56
                        | (var4[1] & 255L) << 48
                        | (var4[2] & 255L) << 40
                        | (var4[3] & 255L) << 32
                        | (var4[4] & 255L) << 24
                        | (var4[5] & 255L) << 16
                        | (var4[6] & 255L) << 8
                        | var4[7] & 255L;
                     var10001 = -1;
                     p = var32;
                     emm = new gbp("Is In Tablist", true);
                     bim = new gbp("Valid Name", true);
                     cih = new gbp("Name Starts With", true);
                     dly = new gbp("Age", true);
                     epc = new gbp("Latency", true);
                     return;
                  }

                  var8 = var9.charAt(var17);
                  break;
               default:
                  var12[var10++] = var28;
                  if ((var17 += var8) < var11) {
                     var8 = var9.charAt(var17);
                     continue label37;
                  }

                  var9 = "º\u0099fë5\u000b\u009c÷ø\u0006Üéo\u0087\u0080\u000eìv\u0014\rw®:\u001dfU\u0098-D¬\u00921\u0010Ù\u008c>Í{¬E´Â\u009fà\u0002\u0090Ë\u0089ÿ";
                  var11 = "º\u0099fë5\u000b\u009c÷ø\u0006Üéo\u0087\u0080\u000eìv\u0014\rw®:\u001dfU\u0098-D¬\u00921\u0010Ù\u008c>Í{¬E´Â\u009fà\u0002\u0090Ë\u0089ÿ"
                     .length();
                  var8 = ' ';
                  var17 = -1;
            }

            var18 = var9.substring(++var17, var17 + var8);
            var10001 = 0;
         }
      }
   }

}
