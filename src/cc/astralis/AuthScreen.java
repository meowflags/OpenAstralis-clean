package cc.astralis;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Map;
import java.util.Objects;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_11908;
import net.minecraft.class_2561;
import net.minecraft.class_310;
import net.minecraft.class_332;
import net.minecraft.class_342;
import net.minecraft.class_4185;
import net.minecraft.class_437;
import net.minecraft.class_442;
import net.minecraft.class_4185.class_7840;

public class AuthScreen extends class_437 implements dlc {
   private class_342 apj;
   private class_4185 hhx;
   private class_4185 ebr;
   private boolean auq;
   public int epg;
   private String fno;
   private static final long a = 62932430296225L;
   private static final String[] b;
   private static final String[] c;

   private static final long[] e;
   private static final Integer[] f;
   private static final Map g;
   private static final long h;

   public AuthScreen() {
      long a = AuthScreen.a ^ 54749214688840L;
      super(class_2561.method_43470("Authentication"));
      a.epg = 1237867;
   }

   protected void method_25426() {
      long a = AuthScreen.a ^ 89031385926781L;
      aml.gsj = true;
      int ax = a.field_22789 / 2;
      int axx = a.field_22790 / 2;
      int var10005 = 2072;
      int var10004 = ax - 100;
      var10005 = axx - 10;
      a.apj = new class_342(a.field_22793, var10004, var10005, 200, 20, class_2561.method_43470("UID"));
      a.apj.method_1880(64);
      a.apj.method_47404(class_2561.method_43470("Enter UID"));
      a.method_37063(a.apj);
      a.method_48265(a.apj);
      class_7840 var8 = class_4185.method_46430(class_2561.method_43470("Authenticate"), axxx -> a.fzm());
      int var14 = 6077;
      int var11 = ax - 100;
      var14 = axx + 25;
      a.hhx = (class_4185)a.method_37063(var8.method_46434(var11, var14, 200, 20).method_46431());
      class_7840 var10 = class_4185.method_46430(class_2561.method_43470("Copy HWID"), axxx -> {
         long ax = AuthScreen.a ^ 9042436811401L;
         int[] var10000 = ClientSetup.abu();
         String axx = gep.bhj();
         int[] axxx = var10000;
         class_310 var6x = a.field_22787;
         if (a.field_22787 == null) {
            return;
         }

         var6x = a.field_22787;

         if (var6x.field_1774 != null) {
            a.field_22787.field_1774.method_1455(axx);
         }
      });
      int var16 = 6077;
      int var13 = ax - 100;
      var16 = axx + 50;
      a.ebr = (class_4185)a.method_37063(var10.method_46434(var13, var16, 200, 20).method_46431());
   }

   // $VF: Handled exception range with multiple entry points by splitting it
   // $VF: Duplicated exception handlers to handle obfuscated exceptions
   private void fzm() {
      long a = AuthScreen.a ^ 58691036507834L;
      int[] ax = ClientSetup.abu();
      int var10000 = a.apj.method_1882().isEmpty();
   }

   public void method_25393() {
      long a = AuthScreen.a ^ 98131600382408L;
      int[] var3 = ClientSetup.abu();
      super.method_25393();
      boolean var10000 = aml.gkg;
      if (aml.gkg) {
         return;
      }

      var10000 = Objects.equals(aml.eyu, "gud boy");

      if (var10000 && aml.gsj && a.field_22787 != null) {
         a.field_22787.method_1507(new class_442());
      }
   }

   public boolean method_25404(class_11908 input) {
      long ax = AuthScreen.a ^ 43360920611737L;
      int[] var4 = ClientSetup.abu();
      int var10000 = a.method_74228();
      label27:
      if (var10000 != 257) {
         var10000 = a.method_74228();
         if (var10000 == 335) {
            break label27;
         }

         var10000 = super.method_25404(a);

         return (boolean)var10000;
      }

      a.fzm();
      var10000 = 1;

      return (boolean)var10000;
   }

   public void method_25394(class_332 context, int mouseX, int mouseY, float delta) {
      AuthScreen var10;
      label41: {
         label43: {
            long ax = AuthScreen.a ^ 65167881687432L;
            int[] var10000 = ClientSetup.abu();
            int axx = a.field_22789 / 2;
            int[] axxx = var10000;
            int axxxx = a.field_22790 / 2;
            int var10004 = axxxx - 40;
            a.method_25300(a.field_22793, "Authentication Required", axx, var10004, 16777215);
            var10004 = axxxx - 26;
            a.method_25300(a.field_22793, "Please enter your UID to continue", axx, var10004, 11184810);
            var10 = a;
            if (a.auq && aml.gkg) {
               var10004 = axxxx + 80;
               a.method_25300(a.field_22793, "Invalid UID / Could not verify. Please try again.", axx, var10004, 16729413);
               break label43;
            }

            var10 = a;


            if (var10.fno != null) {
               var10 = a;

               if (a.fno.equals("Authenticating...")) {
                  var10004 = axxxx + 80;
                  a.method_25300(a.field_22793, a.fno, axx, var10004, 16777215);
               }
            }
         }

         var10 = a;
      }

      var10.method_25394(a, a, a, a);
   }

   static {
      long var16 = a ^ 132242949768631L;
      Cipher var18;
      Cipher var10000 = var18 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var16 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var19 = 1; var19 < 8; var19++) {
         var10003[var19] = (byte)(var16 << var19 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var25 = new String[12];
      int var23 = 0;
      String var22 = ")µª·\u0005ªòÍ\u008cþ©\u008b´ óRuxöüÙ¢\u0087g£\u00ad§e\u009bTJ\u001ce\u0092Rq÷Ã\u00012 \u0098\rPÜC$>³Psì\u008d\u0005O\u0094`dK çAùYªï\u001bÉçC\u0099&= OpÝ¸BxÃÕ\u0000\u0012\u0003¸ô\u0095i\u0003÷§)\u00178·êVØÂ7\u009e\u0013ÄÔ\u00160PâU\u009c\u008fîÎ³½\u0012ó_\u0010êË°û\u008dªI\u0080q^Ë÷¢Ýâ¥\IgnCommand\u0097þ0%\u0099\u0080» \u0092Ð!¢è±8yÑXÙ7çD\u001bì~¼\u0014\u009a>;w2\u009dÆXq0\t.DØ(£X5\u008f%mN·ó0×¥ÀÝ\u0085è\u0014\u008d\n±ó%vFF¾\u008f½ª8\u009e\u0001\u0000\u0085\u009b\u0010\u0002ï¡M²ÐÕ\u009a=¾½JíÈ<Ê\nI<Å'|\u0097¶+KÒÅ uÅy\u0019\u008f¨N\u0098\u0093\u001a¹ä\u0082Ð\u0083ä¼4\u0001¾mk!l\u001a³Ü©q?ë1\u00105ÏEïñ¼¸\u001fó\u001eÊº}\t\u0016\u0084\u0010\u0084S²\u0092\u007f'ê±Ó.ÑÓ¶\u0014\u000el@\u009eÓA\u0017±&!±ÇÏËlN¶\u009dþD\u0090¸¾\n\u001e ¡ÞË`\u0005>¯\f×<¾Ý×ÔÝ!×\nü\u008dpâH?eÁiUQÕD!\u001e]ÙÆë\u007fÛyò(Ü\"µO\u008eí$\b\u0089è\u00831ô7á\u0010\"dX\u001ahóKêë¨ Ç¯!\bROêÇ\u0086ÚÔ&ú";
      int var24 = ")µª·\u0005ªòÍ\u008cþ©\u008b´ óRuxöüÙ¢\u0087g£\u00ad§e\u009bTJ\u001ce\u0092Rq÷Ã\u00012 \u0098\rPÜC$>³Psì\u008d\u0005O\u0094`dK çAùYªï\u001bÉçC\u0099&= OpÝ¸BxÃÕ\u0000\u0012\u0003¸ô\u0095i\u0003÷§)\u00178·êVØÂ7\u009e\u0013ÄÔ\u00160PâU\u009c\u008fîÎ³½\u0012ó_\u0010êË°û\u008dªI\u0080q^Ë÷¢Ýâ¥\IgnCommand\u0097þ0%\u0099\u0080» \u0092Ð!¢è±8yÑXÙ7çD\u001bì~¼\u0014\u009a>;w2\u009dÆXq0\t.DØ(£X5\u008f%mN·ó0×¥ÀÝ\u0085è\u0014\u008d\n±ó%vFF¾\u008f½ª8\u009e\u0001\u0000\u0085\u009b\u0010\u0002ï¡M²ÐÕ\u009a=¾½JíÈ<Ê\nI<Å'|\u0097¶+KÒÅ uÅy\u0019\u008f¨N\u0098\u0093\u001a¹ä\u0082Ð\u0083ä¼4\u0001¾mk!l\u001a³Ü©q?ë1\u00105ÏEïñ¼¸\u001fó\u001eÊº}\t\u0016\u0084\u0010\u0084S²\u0092\u007f'ê±Ó.ÑÓ¶\u0014\u000el@\u009eÓA\u0017±&!±ÇÏËlN¶\u009dþD\u0090¸¾\n\u001e ¡ÞË`\u0005>¯\f×<¾Ý×ÔÝ!×\nü\u008dpâH?eÁiUQÕD!\u001e]ÙÆë\u007fÛyò(Ü\"µO\u008eí$\b\u0089è\u00831ô7á\u0010\"dX\u001ahóKêë¨ Ç¯!\bROêÇ\u0086ÚÔ&ú"
         .length();
      char var21 = '(';
      int var29 = -1;

      label64:
      while (true) {
         String var30 = var22.substring(++var29, var29 + var21);
         int var10001 = -1;

         while (true) {
            byte[] var26 = var18.doFinal(var30.getBytes("ISO-8859-1"));
            String var43 = a(var26).intern();
            switch (var10001) {
               case 0:
                  var25[var23++] = var43;
                  if ((var29 += var21) >= var24) {
                     b = var25;
                     c = new String[12];
                     g = new HashMap(13);
                     Cipher var5;
                     var10000 = var5 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var16 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var6 = 1; var6 < 8; var6++) {
                        var10003[var6] = (byte)(var16 << var6 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var11 = new long[21];
                     int var8 = 0;
                     String var9 = "ËËõä¢GûÜ\u001e¦\u0099Ë\u0098Öt\u0017¾ÑÓ\u0014\u0087\\ù\u0016¥õA\u0096BO\u0090H\u0087Ú\u0092\u0006K\u0010Trãt»3ß4\u0081à\u009a£Üx\u009c}\u008f\u0019\u0010\u0089\u0006 ¢Qx\u00adà¤lI\b<ï|+?\u0093\u001fß!\u0005ÈgÎû\u0011V>õ¼\u0006\u008fhÓæ\u001d\u009e\u0094B\u0081kÏäs\u0004¢3ÍÂ\u0088ö©ÒQs2ô11ÒÏÝ§äò)¸\u00ad6\u0012\u009fæ\u008e\u000f]Ý\u0005Ú W±öûs_oèËK*\u0012Ä\u008a¾";
                     int var10 = "ËËõä¢GûÜ\u001e¦\u0099Ë\u0098Öt\u0017¾ÑÓ\u0014\u0087\\ù\u0016¥õA\u0096BO\u0090H\u0087Ú\u0092\u0006K\u0010Trãt»3ß4\u0081à\u009a£Üx\u009c}\u008f\u0019\u0010\u0089\u0006 ¢Qx\u00adà¤lI\b<ï|+?\u0093\u001fß!\u0005ÈgÎû\u0011V>õ¼\u0006\u008fhÓæ\u001d\u009e\u0094B\u0081kÏäs\u0004¢3ÍÂ\u0088ö©ÒQs2ô11ÒÏÝ§äò)¸\u00ad6\u0012\u009fæ\u008e\u000f]Ý\u0005Ú W±öûs_oèËK*\u0012Ä\u008a¾"
                        .length();
                     byte var7 = 0;

                     label46:
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
                                    e = var11;
                                    f = new Integer[21];
                                    Cipher var0;
                                    var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                                    var10002 = SecretKeyFactory.getInstance("DES");
                                    var10003 = new byte[]{(byte)(var16 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                                    for (int var1 = 1; var1 < 8; var1++) {
                                       var10003[var1] = (byte)(var16 << var1 * 8 >>> 56);
                                    }

                                    var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                                    long var2 = 4964225429776968333L;
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
                                    h = var50;
                                    return;
                                 }
                                 break;
                              default:
                                 var33[var10001] = var55;
                                 if (var7 < var10) {
                                    continue label46;
                                 }

                                 var9 = "Â\u0000Cß\u0003\u00032î\nMÎÏH\u008cÚÿ";
                                 var10 = "Â\u0000Cß\u0003\u00032î\nMÎÏH\u008cÚÿ".length();
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
                     continue label64;
                  }

                  var22 = "×ç$\u001e#TWÄ¾ÐzäèG\u0017öËÙ\u0082í\u0014M\u0006®F\u0080Áo\u0013\u008evv(V\u008fÁº÷¨ì<<'Õ´±\u0003»\u0087]NUm`ëç·c\u0003v\u008aÂvËF\u001b\u008cOS1°6Z";
                  var24 = "×ç$\u001e#TWÄ¾ÐzäèG\u0017öËÙ\u0082í\u0014M\u0006®F\u0080Áo\u0013\u008evv(V\u008fÁº÷¨ì<<'Õ´±\u0003»\u0087]NUm`ëç·c\u0003v\u008aÂvËF\u001b\u008cOS1°6Z"
                     .length();
                  var21 = ' ';
                  var29 = -1;
            }

            var30 = var22.substring(++var29, var29 + var21);
            var10001 = 0;
         }
      }
   }

   private static int b(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 7944;
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
            throw new RuntimeException("cc/astralis/AuthScreen", var14);
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
         throw new RuntimeException("cc/astralis/AuthScreen" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }
}
