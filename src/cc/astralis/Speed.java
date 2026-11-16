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

public class Speed extends guu {
   public final cyx fyl;
   private static final long a = 470644727295L;
   private static final String[] g;
   private static final String[] h;

   private static final long[] p;
   private static final Integer[] q;
   private static final Map r;

   public Speed() {
      long a = Speed.a ^ 134991279254843L;
      super(bfm.MOVEMENT);
      hcr[] var4 = new hcr[]{new SpeedVanilla(a), new SpeedStrafe(a), new SpeedMMC(a), new SpeedCubecraft(a), new SpeedBlocksMC(a), new SpeedMush(a), null, null, null, null};
      var4[6] = new SpeedVulcanStrafe(a);
      var4[7] = new SpeedVulcanGround(a);
      var4[8] = new SpeedVulcanLow(a);
      var4[9] = new SpeedLegit(a);
      a.fyl = new cyx("Speed Modes", var4);
      a.beb(a.fyl);
   }

   @Override
   public void auj() {
      super.auj();
   }

   @Override
   public void frg() {
      long a = Speed.a ^ 3965819800427L;
      int[] var10000 = ClientSetup.abu();
      aal = 1.0F;
      int[] var3 = var10000;
      Speed var4 = a;
      if (a.fyl.cmt("Watchdog")) {
         return;
      }

      var4 = a;

      var4.frg();
   }

   @gdz
   public void cms(eih event) {
      long ax = Speed.a ^ 30046416518385L;
      int[] var10000 = ClientSetup.abu();
      a.efe(a.fyl.dnp().akm());
      int[] var4 = var10000;
      int var5 = a.fyl.cmt("Watchdog");
      if (var5 == 0) {
         return;
      }

      var5 = a.dsv();

      if (var5 != 0) {
         return;
      }

      var5 = chi.field_1724.method_24828();

      label31: {
         if (var5 != 0) {
            break label31;
         }

         var5 = hjr;

         if (var5 <= 9) {
            return;
         }
      }

      super.frg();
   }

   @gdz
   public void bcp(fxx event) {
      long ax = Speed.a ^ 140177559590091L;
      if (!a.fyl.cmt("Vulcan Low")) {
         chi.field_1690.field_1903.method_23481(false);
      }
   }

   static {
      long var11 = a ^ 120970015639134L;
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
      String var17 = "ÎmÙêãDúüb\u009dPÇ\u0011÷í\u008a\u0016kÅ\fÖ³ý#¿5^S7\u0092ç¯ TsýÙÃuÜ¶V¡´å\u0001B\f\t\u0081¬ÂX\u001eS4\u008a\u001b£îÔ\u001a8÷«";
      int var19 = "ÎmÙêãDúüb\u009dPÇ\u0011÷í\u008a\u0016kÅ\fÖ³ý#¿5^S7\u0092ç¯ TsýÙÃuÜ¶V¡´å\u0001B\f\t\u0081¬ÂX\u001eS4\u008a\u001b£îÔ\u001a8÷«".length();
      char var16 = ' ';
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
                     h = new String[4];
                     r = new HashMap(13);
                     Cipher var0;
                     var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var6 = new long[6];
                     int var3 = 0;
                     String var4 = ":ªªr \u00990\u0015ñµ`N\u0081ÂÒaÅâüÓ!\u0094g¯\u0093wèò<Ë\u0088Ô";
                     int var5 = ":ªªr \u00990\u0015ñµ`N\u0081ÂÒaÅâüÓ!\u0094g¯\u0093wèò<Ë\u0088Ô".length();
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
                                    q = new Integer[6];
                                    return;
                                 }
                                 break;
                              default:
                                 var28[var10001] = var45;
                                 if (var2 < var5) {
                                    continue label36;
                                 }

                                 var4 = "TóT]\u0090(\tS\u0002B\u0097p¾\u0014Eü";
                                 var5 = "TóT]\u0090(\tS\u0002B\u0097p¾\u0014Eü".length();
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

                  var17 = "¼ÎÄ\u0014üý¸\n\u009aD¯b¡\u0001\u000fá\u008eÂkv\u0096ÓÓÝ\u0018,µEf\u0014~¯\u000e²#ñ\u0099Ð\u009bgón\u0089æ\u0017þÒX¢";
                  var19 = "¼ÎÄ\u0014üý¸\n\u009aD¯b¡\u0001\u000fá\u008eÂkv\u0096ÓÓÝ\u0018,µEf\u0014~¯\u000e²#ñ\u0099Ð\u009bgón\u0089æ\u0017þÒX¢".length();
                  var16 = 24;
                  var24 = -1;
            }

            var25 = var17.substring(++var24, var24 + var16);
            var10001 = 0;
         }
      }
   }

   private static int e(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 18710;
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
            throw new RuntimeException("cc/astralis/eky", var14);
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
         throw new RuntimeException("cc/astralis/eky" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }
}
