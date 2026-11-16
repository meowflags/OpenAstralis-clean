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

public class cni {
   private static final long a = 25312250360544L;
   private static final String[] b;
   private static final String[] c;
   private static final Map d = new HashMap(13);
   private static final long[] e;
   private static final Integer[] f;
   private static final Map g;

   public static String bsg(byte[] data) {
      long ax = cni.a ^ 76472031037848L;
      int[] axx = dar.abu();
      byte[] var10000 = a;
      if (axx != null) {
         if (a == null) {
            return "";
         }

         var10000 = a;
      }

      if (var10000.length != 0) {
         char[] axxx = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/".toCharArray();
         int axxxx = (a.length + 2) / 3 * 4;
         char[] axxxxx = new char[axxxx];
         int axxxxxx = 0;
         int axxxxxxx = 0;
         int axxxxxxxx = a.length / 3;
         int axxxxxxxxx = 0;

         while (true) {
            if (axxxxxxxxx < axxxxxxxx) {
               byte var26 = a[axxxxxx++];
               int var27 = var26 & 255;
               int var28 = var27 << 16;
               byte var38 = a[axxxxxx++];
               int var39 = var38 & 255;
               int var29 = var28 | var39 << 8;
               byte var40 = a[axxxxxx++];
               int axxxxxxxxxx = var29 | var40 & 255;
               int var41 = axxxxxxx++;
               int var76 = axxxxxxxxxx >>> 18;
               axxxxx[var41] = axxx[var76 & 63];
               int var42 = axxxxxxx++;
               int var77 = axxxxxxxxxx >>> 12;
               axxxxx[var42] = axxx[var77 & 63];
               int var43 = axxxxxxx++;
               int var78 = axxxxxxxxxx >>> 6;
               axxxxx[var43] = axxx[var78 & 63];
               int var44 = axxxxxxx++;
               axxxxx[var44] = axxx[axxxxxxxxxx & 63];
               axxxxxxxxx++;
               if (axx == null) {
                  break;
               }

               if (axx != null) {
                  continue;
               }
            }

            axxxxxxxxx = a.length % 3;
            break;
         }

         int var30 = axxxxxxxxx;
         int var45 = 1;
         if (axx != null) {
            if (axxxxxxxxx == 1) {
               byte var31 = a[axxxxxx];
               int var32 = var31 & 255;
               int axxxxxxxxxxx = var32 << 16;
               int var48 = axxxxxxx++;
               int var79 = axxxxxxxxxxx >>> 18;
               axxxxx[var48] = axxx[var79 & 63];
               int var49 = axxxxxxx++;
               var79 = axxxxxxxxxxx >>> 12;
               axxxxx[var49] = axxx[var79 & 63];
               int var50 = axxxxxxx++;
               axxxxx[var50] = '=';
               axxxxx[axxxxxxx] = '=';
               if (axx != null) {
                  return new String(axxxxx);
               }
            }

            var30 = axxxxxxxxx;
            var45 = 2;
         }

         if (axx != null) {
            if (var30 != var45) {
               return new String(axxxxx);
            }

            byte var33 = a[axxxxxx++];
            int var34 = var33 & 255;
            var30 = var34 << 16;
            byte var54 = a[axxxxxx];
            int var55 = var54 & 255;
            var45 = var55 << 8;
         }

         int axxxxxxxxxxx = var30 | var45;
         int var56 = axxxxxxx++;
         int var85 = axxxxxxxxxxx >>> 18;
         axxxxx[var56] = axxx[var85 & 63];
         int var57 = axxxxxxx++;
         var85 = axxxxxxxxxxx >>> 12;
         axxxxx[var57] = axxx[var85 & 63];
         int var58 = axxxxxxx++;
         var85 = axxxxxxxxxxx >>> 6;
         axxxxx[var58] = axxx[var85 & 63];
         axxxxx[axxxxxxx] = '=';
         return new String(axxxxx);
      } else {
         return "";
      }
   }

   public static byte[] fsi(String base64) {
      long ax = cni.a ^ 12701095064907L;
      if (a != null && !a.isEmpty()) {
         int axx = 0;

         for (int axxx = 0; axxx < a.length(); axxx++) {
            char axxxx = a.charAt(axxx);
            if (!Character.isWhitespace(axxxx)) {
               axx++;
            }
         }

         if (axx % 4 != 0) {
            throw new IllegalArgumentException("Invalid Base64!");
         } else {
            int var10000 = 17303;
            String var17 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
            var10000 = (short)14907;
            int[] axxxx = new int[256];
            int axxxxx = 0;

            while (true) {
               if (axxxxx >= "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/".length()) {
                  axxxx[61] = 0;
                  axxxxx = 0;
                  int axxxxxx = a.length() - 1;

                  while (axxxxxx >= 0 && Character.isWhitespace(a.charAt(axxxxxx))) {
                     axxxxxx--;
                  }

                  if (axxxxxx >= 0) {
                     char var22 = a.charAt(axxxxxx);
                     if (var22 == '=') {
                        axxxxx++;
                        if (--axxxxxx >= 0) {
                           var22 = a.charAt(axxxxxx);
                           if (var22 == '=') {
                              axxxxx++;
                           }
                        }
                     }
                  }

                  var10000 = axx * 6;
                  int axxxxxxx = var10000 / 8 - axxxxx;
                  byte[] axxxxxxxx = new byte[axxxxxxx];
                  int[] axxxxxxxxx = new int[4];
                  int axxxxxxxxxx = 0;
                  int axxxxxxxxxxx = 0;

                  for (int axxxxxxxxxxxx = 0; axxxxxxxxxxxx < a.length(); axxxxxxxxxxxx++) {
                     char axxxxxxxxxxxxx = a.charAt(axxxxxxxxxxxx);
                     if (!Character.isWhitespace(axxxxxxxxxxxxx)) {
                        if (axxxxxxxxxxxxx >= 256) {
                           throw new IllegalArgumentException("Invalid Base64 character");
                        }

                        int axxxxxxxxxxxxxx = axxxx[axxxxxxxxxxxxx];
                        axxxxxxxxx[axxxxxxxxxxx++] = axxxxxxxxxxxxxx;
                        if (axxxxxxxxxxx == 4) {
                           var10000 = axxxxxxxxx[0];
                           var10000 <<= 18;
                           int var39 = axxxxxxxxx[1];
                           var10000 |= var39 << 12;
                           int var40 = axxxxxxxxx[2];
                           int axxxxxxxxxxxxxxx = var10000 | var40 << 6 | axxxxxxxxx[3];
                           if (axxxxxxxxxx < axxxxxxx) {
                              int var41 = axxxxxxxxxx++;
                              int var54 = axxxxxxxxxxxxxxx >>> 16;
                              axxxxxxxx[var41] = (byte)(var54 & 0xFF);
                           }

                           if (axxxxxxxxxx < axxxxxxx) {
                              int var42 = axxxxxxxxxx++;
                              int var55 = axxxxxxxxxxxxxxx >>> 8;
                              axxxxxxxx[var42] = (byte)(var55 & 0xFF);
                           }

                           if (axxxxxxxxxx < axxxxxxx) {
                              int var43 = axxxxxxxxxx++;
                              axxxxxxxx[var43] = (byte)(axxxxxxxxxxxxxxx & 0xFF);
                           }

                           axxxxxxxxxxx = 0;
                        }
                     }
                  }

                  return axxxxxxxx;
               }

               axxxx["ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/".charAt(axxxxx)] = axxxxx++;
            }
         }
      } else {
         return new byte[0];
      }
   }

   static {
      long var11 = a ^ 58136057747720L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[4];
      int var18 = 0;
      String var17 = "Úïü\t\u000eº`~\u008fk\u007f\u0097}'Ä\u00adÇ^h\u0013hò\\Î«\bz\u0096\u000el+Âîä¿ôOõµé\u0017\u008ac%Q-÷©\u001a²\u001a\u0002ÏtlÎ4¼\u0018\u0000n¬æ nÆ{\u009aHò9t\"ÚêÔd¾\u0092Ì[\u0084§7MÕ\u0011\u0011\u009aP\u0091£~\u00110JÇf\u0081ö\u0011ï8?4¤\u0094¦îâé¯hà¦EE\u0081ÌNuOÑø\u0082n\u0096\u00905\u008eÙ¾&Ó\u0088\u0096d\u0003å,}K\u009eÞ\u009fw\u0090÷ÖoåF¾í¨Ò\u008boFððü\u0019×w\u0000\u000esÀÖ¾5|Ágé\u001b\u0097\u00167p\u009cz\u0002ÿÊ±Ï\u0004Hw-~cGà\u008eVÒ84kúÀ\u0000\u0014\u0000P\\Åã\u0014¼\u00adì\u009b)";
      int var19 = "Úïü\t\u000eº`~\u008fk\u007f\u0097}'Ä\u00adÇ^h\u0013hò\\Î«\bz\u0096\u000el+Âîä¿ôOõµé\u0017\u008ac%Q-÷©\u001a²\u001a\u0002ÏtlÎ4¼\u0018\u0000n¬æ nÆ{\u009aHò9t\"ÚêÔd¾\u0092Ì[\u0084§7MÕ\u0011\u0011\u009aP\u0091£~\u00110JÇf\u0081ö\u0011ï8?4¤\u0094¦îâé¯hà¦EE\u0081ÌNuOÑø\u0082n\u0096\u00905\u008eÙ¾&Ó\u0088\u0096d\u0003å,}K\u009eÞ\u009fw\u0090÷ÖoåF¾í¨Ò\u008boFððü\u0019×w\u0000\u000esÀÖ¾5|Ágé\u001b\u0097\u00167p\u009cz\u0002ÿÊ±Ï\u0004Hw-~cGà\u008eVÒ84kúÀ\u0000\u0014\u0000P\\Åã\u0014¼\u00adì\u009b)"
         .length();
      char var16 = 'p';
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
                     b = var20;
                     c = new String[4];
                     g = new HashMap(13);
                     Cipher var0;
                     var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var6 = new long[18];
                     int var3 = 0;
                     String var4 = "8eEÜ\u001e¨e¹Ù2Í\u000f\u0092cåñÊÎ£]XÖÞóºy\u001d£\u008fÌ\u0019u\u0098\u0094~}{\u0005»¶r\u0085¿zZÒ[¶£Ñ©ûä\u001e©ðX\u0085W\\\u0001H\u0099þ\u0088&pf,ùés·Dá°t\u009b¸\u0005Ëî\u009fP\u0094EìS,\u00ad\u000bõZÒ×\u0091ÇMh\u0093*{-\u0086ð\u0014è\reÃôÙû\u009f?L\u0004Á\u001a\u0085[(HFä\u009aT\u0084";
                     int var5 = "8eEÜ\u001e¨e¹Ù2Í\u000f\u0092cåñÊÎ£]XÖÞóºy\u001d£\u008fÌ\u0019u\u0098\u0094~}{\u0005»¶r\u0085¿zZÒ[¶£Ñ©ûä\u001e©ðX\u0085W\\\u0001H\u0099þ\u0088&pf,ùés·Dá°t\u009b¸\u0005Ëî\u009fP\u0094EìS,\u00ad\u000bõZÒ×\u0091ÇMh\u0093*{-\u0086ð\u0014è\reÃôÙû\u009f?L\u0004Á\u001a\u0085[(HFä\u009aT\u0084"
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
                                    e = var6;
                                    f = new Integer[18];
                                    return;
                                 }
                                 break;
                              default:
                                 var28[var10001] = var45;
                                 if (var2 < var5) {
                                    continue label36;
                                 }

                                 var4 = "`\";Fx\u0088Ô|¤\u008b\u00106ôtåå";
                                 var5 = "`\";Fx\u0088Ô|¤\u008b\u00106ôtåå".length();
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

                  var17 = "<¡D\u000b2¾Û«èÎ<þaG!þ§Áô¾}ç\u008e\u001fî\u00804>Y7\u007fZ8\bï)J*¨u\u001c\u008db\u0001I\n\u009cÄg\u009f)ãh\u001bØ0&VqXº\u00959ÿ\u001f%\u0003.r\u000f¿\u000b\u0016ßõ=\"5K<2Å¨\u0087â\u0016Ù¬\u008e";
                  var19 = "<¡D\u000b2¾Û«èÎ<þaG!þ§Áô¾}ç\u008e\u001fî\u00804>Y7\u007fZ8\bï)J*¨u\u001c\u008db\u0001I\n\u009cÄg\u009f)ãh\u001bØ0&VqXº\u00959ÿ\u001f%\u0003.r\u000f¿\u000b\u0016ßõ=\"5K<2Å¨\u0087â\u0016Ù¬\u008e"
                     .length();
                  var16 = ' ';
                  var24 = -1;
            }

            var25 = var17.substring(++var24, var24 + var16);
            var10001 = 0;
         }
      }
   }

   private static String a(byte[] var0) {
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
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 25095;
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
            throw new RuntimeException("cc/astralis/cni", var10);
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
         c[var5] = a(((Cipher)var4[0]).doFinal(var9));
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
         throw new RuntimeException("cc/astralis/cni" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static int b(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 28192;
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
            throw new RuntimeException("cc/astralis/cni", var14);
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
         throw new RuntimeException("cc/astralis/cni" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }
}
