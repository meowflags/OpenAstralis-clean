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
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_2561;
import net.minecraft.class_437;

public class blg extends class_437 implements dlc, amh {
   private static final long a = 3595060140470L;
   private static final String[] b;
   private static final String[] c;
   private static final Map d = new HashMap(13);
   private static final long[] e;
   private static final Integer[] f;
   private static final Map g;

   public blg() {
      super(class_2561.method_43473());
   }

   public void feu(gfv alt, float x, float y, boolean hovered) {
      long ax = blg.a ^ 124052871512003L;
      int[] var10000 = dar.abu();
      int axx = (int)a;
      int[] axxx = var10000;
      int axxxx = (int)a;
      float axxxxxxx = 8.0F;
      Color var18;
      if (a) {
         var18 = new Color(40, 40, 45, 220);
      } else {
         var18 = new Color(30, 30, 35, 200);
      }

      Color axxxxxxxx = var18;
      Color var19;
      if (a) {
         var19 = new Color(80, 80, 90);
      } else {
         var19 = new Color(60, 60, 70);
      }

      label50: {
         Color axxxxxxxxx = var19;
         dmp.cpp(a, a, 150.0F, 50.0F, 8.0F, axxxxxxxx);
         dmp.dnc(a, a, 150.0F, 50.0F, 8.0F, axxxxxxxx, a ? 1.8F : 1.2F, axxxxxxxxx);
         float var20 = axx + 30;
         float var29 = axxxx + 25;
         dmp.baq(var20, var29, 20.0F, new Color(50, 50, 55));
         dmp.gnj(axx + 10, axxxx + 5, 40.0F, 40.0F, 20.0F, hcu.amw(a.hal()), null);
         int var21 = a.cit();
         if (axxx != null) {
            if (var21 == 0) {
               break label50;
            }

            var21 = axx + 30;
         }

         float var22 = var21;
         dmp.asa(var22, axxxx + 25, 20.0F, 1.5F, dar.gqy().deo(), dar.gqy().cxj(), false);
      }

      fll var23 = dfk;
      String var32 = a.gwo();
      float var43 = axx + 60;
      var23.aof(var32, var43, axxxx + 15, a.cit() ? dar.gqy().deo() : Color.WHITE);
      String var25;
      if (a.cit()) {
         var25 = "Premium Account";
      } else {
         var25 = "Offline Account";
      }

      String axxxxxxxxx = var25;
      var43 = axx + 60;
      float var56 = axxxx + 30;
      cbl.ebb(axxxxxxxxx, var43, var56, new Color(180, 180, 180));
      if (a) {
         dmp.cpp(a, a, 150.0F, 50.0F, 8.0F, new Color(255, 255, 255, 15));
      }
   }

   static {
      long var11 = a ^ 64023769539097L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[2];
      int var18 = 0;
      String var17 = "\u0092!v>\u0094®\u0081\u001f\u0003Ð\u001e\u0099¥\r+\u0015\u001eÂú¨FBM8 $`?×IoC¬ÐZ71ñtâß1â%\u0007¬+Ú\u001dñ\u0090%'\u0012\u0083Ð¹";
      int var19 = "\u0092!v>\u0094®\u0081\u001f\u0003Ð\u001e\u0099¥\r+\u0015\u001eÂú¨FBM8 $`?×IoC¬ÐZ71ñtâß1â%\u0007¬+Ú\u001dñ\u0090%'\u0012\u0083Ð¹".length();
      char var16 = 24;
      int var15 = -1;

      while (true) {
         byte[] var21 = var13.doFinal(var17.substring(++var15, var15 + var16).getBytes("ISO-8859-1"));
         String var30 = b(var21).intern();
         int var10001 = -1;
         var20[var18++] = var30;
         if ((var15 += var16) >= var19) {
            b = var20;
            c = new String[2];
            g = new HashMap(13);
            Cipher var0;
            var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
            var10002 = SecretKeyFactory.getInstance("DES");
            var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

            for (int var1 = 1; var1 < 8; var1++) {
               var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
            }

            var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
            long[] var6 = new long[27];
            int var3 = 0;
            String var4 = "1¨\u009b©\u0094Ã\u008c&=ï\u001eÃµia©¢S7\u0083nò/ddÐ>\u0094\rcU\u001cdë®z]IåK \u0016Òup¼\u000fSÞÍ¬.Ïû\"Ñm·¡\f\u000er\u0081\u0007\"5¾u\u000eËHn`\u0019\u0012\u0081E8XLåØEH¢§v\b\"w£½(\u0096\u0083ü§\u0093\u0099\u0016\u0095\tXKØø³N\u001e\u0016¶ÈòÜé©· \u0006\u00890ú;;\u009e\u0016u¾\u0010NÒ\u000fûEoT.ë\u001b\u009d ªg×<w\u008cj\u0003òöjP\u008aäQ*/Ä\u001a]\u0011}}¦k÷.\u000e8¯X\u001e\u007fòp\u000b\u008fÌ|Þª^¢^ãâj~\u001el»cu¬¹{0Ý%";
            int var5 = "1¨\u009b©\u0094Ã\u008c&=ï\u001eÃµia©¢S7\u0083nò/ddÐ>\u0094\rcU\u001cdë®z]IåK \u0016Òup¼\u000fSÞÍ¬.Ïû\"Ñm·¡\f\u000er\u0081\u0007\"5¾u\u000eËHn`\u0019\u0012\u0081E8XLåØEH¢§v\b\"w£½(\u0096\u0083ü§\u0093\u0099\u0016\u0095\tXKØø³N\u001e\u0016¶ÈòÜé©· \u0006\u00890ú;;\u009e\u0016u¾\u0010NÒ\u000fûEoT.ë\u001b\u009d ªg×<w\u008cj\u0003òöjP\u008aäQ*/Ä\u001a]\u0011}}¦k÷.\u000e8¯X\u001e\u007fòp\u000b\u008fÌ|Þª^¢^ãâj~\u001el»cu¬¹{0Ý%"
               .length();
            byte var2 = 0;

            label32:
            while (true) {
               var10001 = var2;
               var2 += 8;
               byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
               long[] var25 = var6;
               var10001 = var3++;
               long var33 = (var7[0] & 255L) << 56
                  | (var7[1] & 255L) << 48
                  | (var7[2] & 255L) << 40
                  | (var7[3] & 255L) << 32
                  | (var7[4] & 255L) << 24
                  | (var7[5] & 255L) << 16
                  | (var7[6] & 255L) << 8
                  | var7[7] & 255L;
               byte var36 = -1;

               while (true) {
                  long var8 = var33;
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
                  long var38 = (var10[0] & 255L) << 56
                     | (var10[1] & 255L) << 48
                     | (var10[2] & 255L) << 40
                     | (var10[3] & 255L) << 32
                     | (var10[4] & 255L) << 24
                     | (var10[5] & 255L) << 16
                     | (var10[6] & 255L) << 8
                     | var10[7] & 255L;
                  switch (var36) {
                     case 0:
                        var25[var10001] = var38;
                        if (var2 >= var5) {
                           e = var6;
                           f = new Integer[27];
                           return;
                        }
                        break;
                     default:
                        var25[var10001] = var38;
                        if (var2 < var5) {
                           continue label32;
                        }

                        var4 = "qá\u0007¶¨òhç>\t.P\u000eé\u008ct";
                        var5 = "qá\u0007¶¨òhç>\t.P\u000eé\u008ct".length();
                        var2 = 0;
                  }

                  byte var29 = var2;
                  var2 += 8;
                  var7 = var4.substring(var29, var2).getBytes("ISO-8859-1");
                  var25 = var6;
                  var10001 = var3++;
                  var33 = (var7[0] & 255L) << 56
                     | (var7[1] & 255L) << 48
                     | (var7[2] & 255L) << 40
                     | (var7[3] & 255L) << 32
                     | (var7[4] & 255L) << 24
                     | (var7[5] & 255L) << 16
                     | (var7[6] & 255L) << 8
                     | var7[7] & 255L;
                  var36 = 0;
               }
            }
         }

         var16 = var17.charAt(var15);
      }
   }

   private static String b(byte[] var0) {
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

   private static String a(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 30512;
      if (c[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])d.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               d.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("cc/astralis/blg", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = b[var5].getBytes("ISO-8859-1");
         c[var5] = b(((Cipher)var4[0]).doFinal(var9));
      }

      return c[var5];
   }

   private static Object a(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = a(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
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
         throw new RuntimeException("cc/astralis/blg" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static int b(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 13112;
      if (f[var3] == null) {
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
         long var5 = e[var3];
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
         Object[] var9 = (Object[])g.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               g.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("cc/astralis/blg", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         f[var3] = var15;
      }

      return f[var3];
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
         throw new RuntimeException("cc/astralis/blg" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }
}
