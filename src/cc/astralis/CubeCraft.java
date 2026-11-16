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

public class CubeCraft extends hcr {
   private final bes ahg;
   private final cbm amw;
   private final cbm grb;
   private boolean dhc;
   private int cfp;
   private static final long a = 56859297349620L;
   private static final String[] d;
   private static final String[] e;

   private static final long[] g;
   private static final Long[] h;
   private static final Map i;

   public CubeCraft(guu parentClass) {
      long ax = CubeCraft.a ^ 74002622494629L;
      super(a, "Cube Craft");
      a.ahg = new bes("Speed", 1.0F, 0.0F, 10.0F, 0.1F);
      a.amw = new cbm();
      a.grb = new cbm();
      a.dhc = false;
      a.cfp = 0;
      a.ebu(a.ahg);
   }

   @Override
   public void dil() {
      chi.field_1724.method_23327(chi.field_1724.method_23317(), chi.field_1724.method_23318(), chi.field_1724.method_23321());
      chi.field_1724.method_23327(chi.field_1724.method_23317(), chi.field_1724.method_23318() + 3.4, chi.field_1724.method_23321());
      a.dhc = false;
      a.cfp = 0;
      super.dil();
   }

   @gdz
   public void bjz(eih event) {
      long ax = CubeCraft.a ^ 64338645913732L;
      int[] axx = ClientSetup.abu();
      if (!a.dhc) {
         evd.eeo();
      }

      long axxx;
      int var11;
      axxx = 1000L;
      float axxxxx = 1.0F;
      var11 = chi.field_1724.field_6235;
      label93:
      if (chi.field_1724.field_6235 != 0) {
         var11 = a.cfp;

         if (a.cfp < 2) {
            label87: {
               CubeCraft var12 = a;
               if (a.dhc) {
                  break label87;
               }

               a.dhc = true;
               a.grb.glr();
               bpa.bez("Took damage, waiting " + axxx + "ms...");
               var12 = a;

               var12.cfp++;
            }

            bpa.bez("boost");
            evd.dek(0.5);
            bav.fym(0.5);
         }
      }

      var11 = a.dhc;

      if (var11 == 0) {
         return;
      }

      var11 = a.grb.fsc(axxx);

      if (var11 == 0) {
         return;
      }

      var11 = chi.field_1724.method_24828();

      if (var11 != 0) {
         return;
      }

      double var18;
      var11 = (var18 = chi.field_1724.field_6017 - 2.0) == 0.0 ? 0 : (var18 < 0.0 ? -1 : 1);

      if (var11 > 0) {
         chi.field_1724.field_6017 = 0.0;
      }

      var11 = chi.field_1724.field_6012 % 5;

      if (var11 == 0) {
         bav.fym(0.0);
      }

      a.dad(true);
      evd.dyv();
   }

   @gdz
   public void dvn(haj event) {
   }

   static {
      long var11 = a ^ 60881766856426L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[5];
      int var18 = 0;
      String var17 = "ÆOQYúx.\u009a¸VçROª\u0007\u0006\u0010\b\u0098¯Ô4±:#\u0016\u008eæÛXú^\u009f \u0013kC±û\u0014NrUï\fz\u009f\t.ôæjkaÎýM\t\u0016¢Ea¿ô£~";
      int var19 = "ÆOQYúx.\u009a¸VçROª\u0007\u0006\u0010\b\u0098¯Ô4±:#\u0016\u008eæÛXú^\u009f \u0013kC±û\u0014NrUï\fz\u009f\t.ôæjkaÎýM\t\u0016¢Ea¿ô£~".length();
      char var16 = 16;
      int var23 = -1;

      label45:
      while (true) {
         String var24 = var17.substring(++var23, var23 + var16);
         int var10001 = -1;

         while (true) {
            byte[] var21 = var13.doFinal(var24.getBytes("ISO-8859-1"));
            String var33 = a(var21).intern();
            switch (var10001) {
               case 0:
                  var20[var18++] = var33;
                  if ((var23 += var16) >= var19) {
                     d = var20;
                     e = new String[5];
                     i = new HashMap(13);
                     Cipher var0;
                     var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var6 = new long[2];
                     int var3 = 0;
                     String var4 = "Á\u0006\u001d`ÉQ¬Æ\u008fÀ\u000e¢Ëç\u0085\r";
                     int var5 = "Á\u0006\u001d`ÉQ¬Æ\u008fÀ\u000e¢Ëç\u0085\r".length();
                     byte var2 = 0;

                     do {
                        var10001 = var2;
                        var2 += 8;
                        byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
                        var10001 = var3++;
                        long var8 = (var7[0] & 255L) << 56
                           | (var7[1] & 255L) << 48
                           | (var7[2] & 255L) << 40
                           | (var7[3] & 255L) << 32
                           | (var7[4] & 255L) << 24
                           | (var7[5] & 255L) << 16
                           | (var7[6] & 255L) << 8
                           | var7[7] & 255L;
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
                        long var10004 = (var10[0] & 255L) << 56
                           | (var10[1] & 255L) << 48
                           | (var10[2] & 255L) << 40
                           | (var10[3] & 255L) << 32
                           | (var10[4] & 255L) << 24
                           | (var10[5] & 255L) << 16
                           | (var10[6] & 255L) << 8
                           | var10[7] & 255L;
                        var6[var10001] = var10004;
                     } while (var2 < var5);

                     g = var6;
                     h = new Long[2];
                     return;
                  }

                  var16 = var17.charAt(var23);
                  break;
               default:
                  var20[var18++] = var33;
                  if ((var23 += var16) < var19) {
                     var16 = var17.charAt(var23);
                     continue label45;
                  }

                  var17 = "\u0090µñr\u0011\u0005]Ñ\u0013\u0080j\u0089\u0099\u0000\u0086\u009c*\u0017\u0096V¬\u009dIú×\u008fx%¥í(+ô\u0014\u0004ò\u001b¦Z\u0007\u0010x\u0012Al\u008cúGL\u008f§\u001b\u0097)bQ\u0007";
                  var19 = "\u0090µñr\u0011\u0005]Ñ\u0013\u0080j\u0089\u0099\u0000\u0086\u009c*\u0017\u0096V¬\u009dIú×\u008fx%¥í(+ô\u0014\u0004ò\u001b¦Z\u0007\u0010x\u0012Al\u008cúGL\u008f§\u001b\u0097)bQ\u0007"
                     .length();
                  var16 = '(';
                  var23 = -1;
            }

            var24 = var17.substring(++var23, var23 + var16);
            var10001 = 0;
         }
      }
   }

   private static long b(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 6127;
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
            throw new RuntimeException("cc/astralis/CubeCraft", var14);
         }

         long var15 = (var10[0] & 255L) << 56
            | (var10[1] & 255L) << 48
            | (var10[2] & 255L) << 40
            | (var10[3] & 255L) << 32
            | (var10[4] & 255L) << 24
            | (var10[5] & 255L) << 16
            | (var10[6] & 255L) << 8
            | var10[7] & 255L;
         h[var3] = var15;
      }

      return h[var3];
   }

   private static long b(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      long var7 = b(var4, var5);
      MethodHandle var9 = MethodHandles.constant(long.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var9, 0, int.class, long.class));
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
         throw new RuntimeException("cc/astralis/CubeCraft" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }
}
