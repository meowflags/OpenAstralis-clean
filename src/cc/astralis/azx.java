package cc.astralis;

import imgui.ImGui;
import imgui.ImGuiStyle;
import java.awt.Color;
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

public class azx {
   private static Map<String, Integer> gul;
   private static final long a = 114726295743167L;
   private static final long[] b;
   private static final Integer[] c;
   private static final Map d = new HashMap(13);

   public static void gab(boolean invisibleButtonBg, float spacing) {
      long ax = azx.a ^ 111566331583509L;
      bfn(a, a, 240);
   }

   public static void bfn(boolean invisibleButtonBg, float spacing, int alpha) {
      long ax;
      int[] axx;
      ImGuiStyle axxx;
      int axxxx;
      int axxxxx;
      int axxxxxx;
      int axxxxxxx;
      Color var13;
      label34: {
         ax = azx.a ^ 66384874029556L;
         axxx = ImGui.getStyle();
         axxx.setWindowRounding(8.0F);
         axxx.setFrameRounding(6.0F);
         int[] var10000 = dar.abu();
         axxx.setGrabRounding(6.0F);
         axxx.setPopupRounding(8.0F);
         axxx.setScrollbarRounding(6.0F);
         axxx.setTabRounding(6.0F);
         axxx.setWindowPadding(12.0F, 12.0F);
         axxx.setFramePadding(8.0F, 4.0F);
         axxx.setItemSpacing(8.0F, 6.0F);
         axx = var10000;
         axxx.setItemInnerSpacing(6.0F, 6.0F);
         axxx.setTouchExtraPadding(2.0F, 2.0F);
         axxxx = new Color(18, 18, 18, a).getRGB();
         axxxxx = new Color(12, 12, 12).getRGB();
         axxxxxx = new Color(240, 240, 240).getRGB();
         axxxxxxx = new Color(180, 180, 180).getRGB();
         var13 = dar.gqy().aws().diy(daw.class);
         if (axx != null) {
            if (var13 == null) {
               var13 = Color.blue;
               break label34;
            }

            var13 = dar.gqy().aws().diy(daw.class).clb.dnp();
         }

         var13 = var13;
      }

      int axxxxxxxx;
      label28: {
         axxxxxxxx = dec.brp(var13);
         axxx.setItemSpacing(6.0F, a);
         axxx.setColor(33, new Color(35, 35, 35).getRGB());
         axxx.setColor(34, axxxxxxxx);
         axxx.setColor(35, new Color(35, 35, 35).getRGB());
         axxx.setColor(0, axxxxxx);
         axxx.setColor(1, axxxxxxx);
         axxx.setColor(2, axxxx);
         axxx.setColor(3, axxxxx);
         axxx.setColor(4, axxxx);
         axxx.setColor(5, new Color(45, 45, 45).getRGB());
         axxx.setColor(6, new Color(0, 0, 0, 0).getRGB());
         axxx.setColor(7, new Color(30, 30, 30).getRGB());
         axxx.setColor(8, new Color(45, 45, 45).getRGB());
         axxx.setColor(9, new Color(35, 35, 35).getRGB());
         axxx.setColor(18, axxxxxxxx);
         axxx.setColor(19, axxxxxxxx);
         axxx.setColor(20, axxxxxxxx);
         if (axx != null) {
            if (a) {
               axxx.setColor(21, 0);
               axxx.setColor(22, 0);
               axxx.setColor(23, 0);
               if (axx != null) {
                  break label28;
               }
            }

            axxx.setColor(21, new Color(35, 35, 35).getRGB());
            axxx.setColor(22, axxxxxxxx);
         }

         axxx.setColor(23, axxxxxxxx);
      }

      int var95 = 2908;
      axxx.setColor(24, new Color(40, 40, 40).getRGB());
      axxx.setColor(25, axxxxxxxx);
      axxx.setColor(26, axxxxxxxx);
      var95 = (short)11186;
      axxx.setColor(10, new Color(20, 20, 20).getRGB());
      var95 = (short)8702;
      axxx.setColor(11, new Color(25, 25, 25).getRGB());
      var95 = (short)28913;
      axxx.setColor(12, new Color(15, 15, 15).getRGB());
      var95 = (short)20938;
      axxx.setColor(14, new Color(15, 15, 15).getRGB());
      var95 = (short)29540;
      axxx.setColor(15, new Color(50, 50, 50).getRGB());
      var95 = (short)32507;
      axxx.setColor(16, new Color(60, 60, 60).getRGB());
      var95 = (short)30200;
      axxx.setColor(17, new Color(70, 70, 70).getRGB());
      var95 = axxxxxxxx & 16777215;
      axxx.setColor(49, new Color(var95 | 855638016).getRGB());
      var95 = axxxxxxxx & 16777215;
      axxx.setColor(51, new Color(var95 | 1711276032).getRGB());
      axxx.setColor(54, new Color(10, 10, 10, 180).getRGB());
   }

   public static void gtc() {
   }

   static {
      long var0 = a ^ 48680868555764L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[56];
      int var5 = 0;
      String var6 = "É'(\u00ad \u0005±\u0084\"õ\f\u0095\u0090¼KÔ¸\u0084luVØ|}g%î\u0081(^Ú\u0094Sy\u001fw\u008f\u001fìßKÕ.¹ÐÈ<µÛÏÿ\r°ÀðÜPo÷\u0013\u0086ãSñqè\u0084_:Ñi/ú\u0015¿s6©\u001du\u0007(R<\u0012\u001aãç¬\u007f$Õà\u009dÞ¢¡\u008aæ¹Ù+±_L\"1,3Ê²é$íÇ1Û(\u0093X\u009b\u0081êË\u008dKT+ÎØ\rPm4V<\f´3ÎÍe hU\u0080ðXï Ø³ámø/{\u008ehâË\u001eÅíß#\u0086¬\u00adªPCÌk\u0091ï\u0098\u009fRëÙ3w\u000e\u0002\u00867\u0086TUþ\u0015h|\u008aÝÍT³îEDò7\u001a\u0004\u0091í8f\u001eàÖ`cöÑ\u00adQ¬·\u008a;3÷`ç°`\t\u008e\rXõ«âû¸'ËëI4~Ñf¤\u0000\u0098.>\u008a±ò\u0015Dìu¼:y¢\u0094\u008bvfæ\u0099Tºû¥Ni0\u009b\u0085íóU7Åð\u009c(eñ9Ü²íGUZY´X\u0004Ørº\u001c\u008b\u0099E\u0007\u001a\u0082\th\"Q³dÆDÂ\u0012õÝ\u0006¾Ñ\u0084ò/\u007fr\u0092\u0097£\u0097\b÷¸\u0007¹»·¸\u008bâgì®\u0005Ú\u0004\u0099ù®\tiò\u0088 ì\u0094©t\u0000\u0006©'8\u0090i¡¡æ\u0003¾\u0098\u0088£ª©\u0083ÚÔ1õ¯4Ñ\u0092»Qîþ{ä:Ð:°\nc¾e\u0089\u0018\u0002+Ç'\u0081\u0084\u008dÁqÊÁ\u009e\u0097gR\u0019oèú°lï\f\u0096{ê4Î\u0016\u000b";
      int var7 = "É'(\u00ad \u0005±\u0084\"õ\f\u0095\u0090¼KÔ¸\u0084luVØ|}g%î\u0081(^Ú\u0094Sy\u001fw\u008f\u001fìßKÕ.¹ÐÈ<µÛÏÿ\r°ÀðÜPo÷\u0013\u0086ãSñqè\u0084_:Ñi/ú\u0015¿s6©\u001du\u0007(R<\u0012\u001aãç¬\u007f$Õà\u009dÞ¢¡\u008aæ¹Ù+±_L\"1,3Ê²é$íÇ1Û(\u0093X\u009b\u0081êË\u008dKT+ÎØ\rPm4V<\f´3ÎÍe hU\u0080ðXï Ø³ámø/{\u008ehâË\u001eÅíß#\u0086¬\u00adªPCÌk\u0091ï\u0098\u009fRëÙ3w\u000e\u0002\u00867\u0086TUþ\u0015h|\u008aÝÍT³îEDò7\u001a\u0004\u0091í8f\u001eàÖ`cöÑ\u00adQ¬·\u008a;3÷`ç°`\t\u008e\rXõ«âû¸'ËëI4~Ñf¤\u0000\u0098.>\u008a±ò\u0015Dìu¼:y¢\u0094\u008bvfæ\u0099Tºû¥Ni0\u009b\u0085íóU7Åð\u009c(eñ9Ü²íGUZY´X\u0004Ørº\u001c\u008b\u0099E\u0007\u001a\u0082\th\"Q³dÆDÂ\u0012õÝ\u0006¾Ñ\u0084ò/\u007fr\u0092\u0097£\u0097\b÷¸\u0007¹»·¸\u008bâgì®\u0005Ú\u0004\u0099ù®\tiò\u0088 ì\u0094©t\u0000\u0006©'8\u0090i¡¡æ\u0003¾\u0098\u0088£ª©\u0083ÚÔ1õ¯4Ñ\u0092»Qîþ{ä:Ð:°\nc¾e\u0089\u0018\u0002+Ç'\u0081\u0084\u008dÁqÊÁ\u009e\u0097gR\u0019oèú°lï\f\u0096{ê4Î\u0016\u000b"
         .length();
      byte var4 = 0;

      label23:
      while (true) {
         int var10001 = var4;
         var4 += 8;
         byte[] var9 = var6.substring(var10001, var4).getBytes("ISO-8859-1");
         long[] var14 = var8;
         var10001 = var5++;
         long var17 = (var9[0] & 255L) << 56
            | (var9[1] & 255L) << 48
            | (var9[2] & 255L) << 40
            | (var9[3] & 255L) << 32
            | (var9[4] & 255L) << 24
            | (var9[5] & 255L) << 16
            | (var9[6] & 255L) << 8
            | var9[7] & 255L;
         byte var19 = -1;

         while (true) {
            long var10 = var17;
            byte[] var12 = var2.doFinal(
               new byte[]{
                  (byte)(var10 >>> 56),
                  (byte)(var10 >>> 48),
                  (byte)(var10 >>> 40),
                  (byte)(var10 >>> 32),
                  (byte)(var10 >>> 24),
                  (byte)(var10 >>> 16),
                  (byte)(var10 >>> 8),
                  (byte)var10
               }
            );
            long var21 = (var12[0] & 255L) << 56
               | (var12[1] & 255L) << 48
               | (var12[2] & 255L) << 40
               | (var12[3] & 255L) << 32
               | (var12[4] & 255L) << 24
               | (var12[5] & 255L) << 16
               | (var12[6] & 255L) << 8
               | var12[7] & 255L;
            switch (var19) {
               case 0:
                  var14[var10001] = var21;
                  if (var4 >= var7) {
                     b = var8;
                     c = new Integer[56];
                     gul = new HashMap<>();
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "Ú\u0086\u0083¥Ôé_Q\u0090wôm¨:×N";
                  var7 = "Ú\u0086\u0083¥Ôé_Q\u0090wôm¨:×N".length();
                  var4 = 0;
            }

            byte var16 = var4;
            var4 += 8;
            var9 = var6.substring(var16, var4).getBytes("ISO-8859-1");
            var14 = var8;
            var10001 = var5++;
            var17 = (var9[0] & 255L) << 56
               | (var9[1] & 255L) << 48
               | (var9[2] & 255L) << 40
               | (var9[3] & 255L) << 32
               | (var9[4] & 255L) << 24
               | (var9[5] & 255L) << 16
               | (var9[6] & 255L) << 8
               | var9[7] & 255L;
            var19 = 0;
         }
      }
   }

   private static int a(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 15601;
      if (c[var3] == null) {
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
         long var5 = b[var3];
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
         Object[] var9 = (Object[])d.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               d.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("cc/astralis/azx", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         c[var3] = var15;
      }

      return c[var3];
   }

   private static int a(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = a(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static CallSite a(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("a".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("cc/astralis/azx" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }
}
