package cc.astralis;

import com.google.gson.JsonObject;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.lang.reflect.Field;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.ThreadLocalRandom;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import org.java_websocket.client.WebSocketClient;

public abstract class brc implements cdw {
   protected String fmh;
   protected final int dew;
   protected long cis;
   protected byte[] fkm;
   private static int[] ale;
   private static final String[] a;
   private static final long[] d;
   private static final Long[] e;
   private static final long f = 29209149263941L;
   private static final long[] j;
   private static final Integer[] k;
   private static final Map l;
   private static final long[] p;
   private static final Long[] q;
   private static final Map r;

   protected brc(int id) {
      a.dew = a;
   }

   protected brc(int id, String receiver) {
      a.dew = a;
      a.fmh = a;
   }

   @Override
   public int ddh() {
      return a.dew;
   }

   @Override
   public String dxw() {
      return a.fmh;
   }

   @Override
   public void czh(String receiver) {
      a.fmh = a;
   }

   @Override
   public void dak(WebSocketClient socket) {
      long ax = f ^ 120358705185856L;
      int[] var10000 = ClientSetup.abu();
      long axx = 53949146061910L;
      int[] axxx = var10000;
      int[] axxxx = ahk();

      try {
         WebSocketClient var32 = a;
         if (!a.isOpen() && aml.exv && !aml.fii) {
            if (aml.fhj.fsc(a(16948, 7811166852958177703L ^ axx))) {
               String[] var26 = brc.a;
               ClientSetup.ecj.error(var26[9]);

               /* Removed unsafe anti-tamper block and its failure loop. */

               var26 = brc.a;
               throw new RuntimeException(var26[4]);
            }
         }

         var32 = a;

         var32.send(a.cql());
      } catch (Exception var19) {
         boolean var28 = aml.exv;
         if (!aml.exv) {
            return;
         }

         var28 = aml.fii;

         if (!var28) {
            if (aml.fhj.fsc(a(28013, 8709128029059606265L ^ axx))) {
               String[] var16 = brc.a;
               ClientSetup.ecj.error(var16[2]);

               /* Removed unsafe anti-tamper block and its failure loop. */
            }
         }
      }
   }

   protected JsonObject fdo() {
      long a = f ^ 122613201863390L;
      long ax = 15193126943819L;
      a.cis = System.currentTimeMillis();
      int[] var10000 = ClientSetup.abu();
      int[] var10001 = ahk();
      a.fkm = fz.hgv(a.cis);
      int[] axx = var10001;
      JsonObject axxx = new JsonObject();
      int[] axxxx = var10000;
      axxx.addProperty(fz.dsg(brc.a[5], a.fkm, a.cis), fz.dsg(String.valueOf(a.dew), a.fkm, a.cis));
      if (a.fmh != null) {
         axxx.addProperty(fz.dsg(brc.a[11], a.fkm, a.cis), fz.dsg(a.fmh, a.fkm, a.cis));
      }

      String var8 = brc.a[6];
      byte[] var11 = Base64Util.fsi(brc.a[3]);
      String var9 = fz.dvr(var8, var11, Base64Util.fsi(brc.a[13]));
      String var12 = String.valueOf(a.cis);
      byte[] var14 = Base64Util.fsi(brc.a[7]);
      axxx.addProperty(var9, fz.dvr(var12, var14, Base64Util.fsi(brc.a[8])));

      if (axx == null) {
         cdr.apm(new String[4]);
      }

      return axxx;
   }

   protected void cps(JsonObject json) {
      long ax = f ^ 89659259467345L;
      int[] var10000 = ClientSetup.abu();
      long axx = 133881535924384L;
      int[] axxx = var10000;
      if (a.has(brc.a[10])) {
         a.fmh = a.get(brc.a[10]).getAsString();
      }
   }

   protected void dqb(JsonObject jsonObject, String property, Object value) {
      a.addProperty(fz.dsg(a, a.fkm, a.cis), fz.dsg(String.valueOf(a), a.fkm, a.cis));
   }

   protected void eqw(JsonObject jsonObject, Object... properties) {
      long ax = f ^ 78558248129720L;
      int[] var10000 = ClientSetup.abu();
      long axx = 66476049490752L;
      int[] axxx = ahk();
      int[] axxxx = var10000;
      int var12 = a.length % 2;
      if (var12 != 0) {
         throw new IllegalArgumentException(brc.a[0]);
      }

      var12 = 0;

      int axxxxx = var12;

      while (axxxxx < a.length) {
         String axxxxxx = String.valueOf(a[axxxxx]);
         Object axxxxxxx = a[axxxxx + 1];
         if (axxxxxxx != null) {
            a.addProperty(fz.dsg(axxxxxx, a.fkm, a.cis), fz.dsg(String.valueOf(axxxxxxx), a.fkm, a.cis));
         }

         axxxxx += 2;

      }
   }

   public static void edo(int[] var0) {
      ale = var0;
   }

   public static int[] ahk() {
      return ale;
   }

   static {
      long var31 = f ^ 31799275782109L;
      Cipher var23;
      Cipher var10000 = var23 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var31 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var24 = 1; var24 < 8; var24++) {
         var10003[var24] = (byte)(var31 << var24 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var22 = new String[6];
      int var28 = 0;
      String var27 = "ÒÈyh})\u0088LÍÖ\u008e\b\u0095nê§¦c\u0013\u0006\u009a`\u009eÁÝ\bôg$>\u0002?n)h\"É\u001d£\\½>\u001dÏÍTòz¦.\u0093Gº]\u0006\bT\u0096lÌ¬?L©ÿ8Y%:¦+\u008d\u0013\u00904\u0081[¹øÐ°.Ó&ô£\u009cLOib%æ0\u008aØ0¤9Ð\u001210³\u009d\u0004 Kor¬S\u0018\u001e¹\u008f¸Ð\u0010üéhe\u0003ÑÁ+z¬eí\u0083Z\f\u008bóA\u0010bb_7\u0092ë\u0080k?\u0081ù(©å²\u001bH\u001e\u008cÅ(\u00816êê»Ç\u0096\u001b7f9â5ÏZúÜ¥\tÿ¼ÞpñGÊÓ¤OÐ8gô\u001c\u008bW¼9k÷!(¶t\u0095\u0004Xà¼a¾gÒË¹(¥\u000b\u001b¨IeíÙ§§Ñ\u0005";
      int var29 = "ÒÈyh})\u0088LÍÖ\u008e\b\u0095nê§¦c\u0013\u0006\u009a`\u009eÁÝ\bôg$>\u0002?n)h\"É\u001d£\\½>\u001dÏÍTòz¦.\u0093Gº]\u0006\bT\u0096lÌ¬?L©ÿ8Y%:¦+\u008d\u0013\u00904\u0081[¹øÐ°.Ó&ô£\u009cLOib%æ0\u008aØ0¤9Ð\u001210³\u009d\u0004 Kor¬S\u0018\u001e¹\u008f¸Ð\u0010üéhe\u0003ÑÁ+z¬eí\u0083Z\f\u008bóA\u0010bb_7\u0092ë\u0080k?\u0081ù(©å²\u001bH\u001e\u008cÅ(\u00816êê»Ç\u0096\u001b7f9â5ÏZúÜ¥\tÿ¼ÞpñGÊÓ¤OÐ8gô\u001c\u008bW¼9k÷!(¶t\u0095\u0004Xà¼a¾gÒË¹(¥\u000b\u001b¨IeíÙ§§Ñ\u0005"
         .length();
      char var26 = 'p';
      int var50 = -1;

      label121:
      while (true) {
         String var54 = var27.substring(++var50, var50 + var26);
         int var10001 = -1;

         while (true) {
            byte[] var30 = var23.doFinal(var54.getBytes("ISO-8859-1"));
            String var91 = a(var30).intern();
            switch (var10001) {
               case 0:
                  var22[var28++] = var91;
                  if ((var50 += var26) >= var29) {
                     l = new HashMap(13);
                     Cipher var11;
                     var10000 = var11 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var31 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var12 = 1; var12 < 8; var12++) {
                        var10003[var12] = (byte)(var31 << var12 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var17 = new long[48];
                     int var14 = 0;
                     String var15 = "¯\tú\u0006\u0003\u0002:<\u009d\u0082öEj\u008c®\u0099¾÷¿¡a1Z\u00967þêy\u008fk#å\u0001\u001d\fI\u0083\u0080\u001aøU?\u0098ÑrWtD|j{b\u009blQ\u0090õòï)X¶'m\u0083\u008c²zá!âq\u000e-øtÃ\u009fV½\u0095Ä¹Î\u0092tpÆÃ©N\u008cÄlXb ¼\u008e\u0001\u007fïp\u001c\bº\u0017ý2\u009b8yZÞKÓ:\u001c\u008e\u0093\u0003J%à½\u0017\u0096\u000bÜÒÆT\u00043\u008eëL´C+\u009aV»\u0087ú\f¦:âW\u0088¯Ä?¤Y\u0097\u0082\u009do«\u0018y\u0082U\b÷\u009e=\u0011_\u008e\u0015¡\u0086ê¨\tÛª\u009cmDÔ¡°Æq\u009bb\u0007ñü\u001dã\u0084\u0001q\u0017\u0007³Hf\bÈU®iú\u0016\u0012\u0017\u001dtW\u0010Ö\u0015&SE!\u008cã\u0010õÃ\u0005X\u0016qÛÄ\u0005d\u0013\t\u0090LîèäÞÎÖ¢À\t\u009aSk\u0004ö\u0080%\u0090)æ\n\u0090\u000b\u0090\u001eì\u009bQ\u008cA\u0095\u0012)yÜ\u0018Tc%h\nnéÙ\u0019Xø]\u001dóQÆ?Ú\u001d`Çb\"®ÚYÊÒ(í\u0095`\u0084\u008f·SâBY\u0082ë\u0094T\u0089ï\u0016Mtr_\u00822X²|Y\u0003\u0003Ú<ëõtÉ92\u0002Æ\u0096r\u0081ò40QÜ\u000fÎ\u0003hÉ2\u00037é\u0004ú\tÎÍì:±\u0099";
                     int var16 = "¯\tú\u0006\u0003\u0002:<\u009d\u0082öEj\u008c®\u0099¾÷¿¡a1Z\u00967þêy\u008fk#å\u0001\u001d\fI\u0083\u0080\u001aøU?\u0098ÑrWtD|j{b\u009blQ\u0090õòï)X¶'m\u0083\u008c²zá!âq\u000e-øtÃ\u009fV½\u0095Ä¹Î\u0092tpÆÃ©N\u008cÄlXb ¼\u008e\u0001\u007fïp\u001c\bº\u0017ý2\u009b8yZÞKÓ:\u001c\u008e\u0093\u0003J%à½\u0017\u0096\u000bÜÒÆT\u00043\u008eëL´C+\u009aV»\u0087ú\f¦:âW\u0088¯Ä?¤Y\u0097\u0082\u009do«\u0018y\u0082U\b÷\u009e=\u0011_\u008e\u0015¡\u0086ê¨\tÛª\u009cmDÔ¡°Æq\u009bb\u0007ñü\u001dã\u0084\u0001q\u0017\u0007³Hf\bÈU®iú\u0016\u0012\u0017\u001dtW\u0010Ö\u0015&SE!\u008cã\u0010õÃ\u0005X\u0016qÛÄ\u0005d\u0013\t\u0090LîèäÞÎÖ¢À\t\u009aSk\u0004ö\u0080%\u0090)æ\n\u0090\u000b\u0090\u001eì\u009bQ\u008cA\u0095\u0012)yÜ\u0018Tc%h\nnéÙ\u0019Xø]\u001dóQÆ?Ú\u001d`Çb\"®ÚYÊÒ(í\u0095`\u0084\u008f·SâBY\u0082ë\u0094T\u0089ï\u0016Mtr_\u00822X²|Y\u0003\u0003Ú<ëõtÉ92\u0002Æ\u0096r\u0081ò40QÜ\u000fÎ\u0003hÉ2\u00037é\u0004ú\tÎÍì:±\u0099"
                        .length();
                     byte var13 = 0;

                     label103:
                     while (true) {
                        var10001 = var13;
                        var13 += 8;
                        byte[] var18 = var15.substring(var10001, var13).getBytes("ISO-8859-1");
                        long[] var57 = var17;
                        var10001 = var14++;
                        long var95 = (var18[0] & 255L) << 56
                           | (var18[1] & 255L) << 48
                           | (var18[2] & 255L) << 40
                           | (var18[3] & 255L) << 32
                           | (var18[4] & 255L) << 24
                           | (var18[5] & 255L) << 16
                           | (var18[6] & 255L) << 8
                           | var18[7] & 255L;
                        byte var123 = -1;

                        while (true) {
                           long var19 = var95;
                           byte[] var21 = var11.doFinal(
                              new byte[]{
                                 (byte)(var19 >>> 56),
                                 (byte)(var19 >>> 48),
                                 (byte)(var19 >>> 40),
                                 (byte)(var19 >>> 32),
                                 (byte)(var19 >>> 24),
                                 (byte)(var19 >>> 16),
                                 (byte)(var19 >>> 8),
                                 (byte)var19
                              }
                           );
                           long var144 = (var21[0] & 255L) << 56
                              | (var21[1] & 255L) << 48
                              | (var21[2] & 255L) << 40
                              | (var21[3] & 255L) << 32
                              | (var21[4] & 255L) << 24
                              | (var21[5] & 255L) << 16
                              | (var21[6] & 255L) << 8
                              | var21[7] & 255L;
                           switch (var123) {
                              case 0:
                                 var57[var10001] = var144;
                                 if (var13 >= var16) {
                                    j = var17;
                                    k = new Integer[48];
                                    r = new HashMap(13);
                                    Cipher var0;
                                    var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                                    var10002 = SecretKeyFactory.getInstance("DES");
                                    var10003 = new byte[]{(byte)(var31 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                                    for (int var1 = 1; var1 < 8; var1++) {
                                       var10003[var1] = (byte)(var31 << var1 * 8 >>> 56);
                                    }

                                    var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                                    long[] var6 = new long[16];
                                    int var3 = 0;
                                    String var4 = "E\u008d¯\u0001j\u007fïx\u0099Ô]û\f\u0085-¹ns\u0089\u0012Í\u009fõb\u0097t°iÃÊpà±ÄýMôëæ\u0018\u00139îx2î\u009ek\u001f¤\u008d\u0015Åü\u008c\\«\"{?\u009c;V´Î\u0080Ãp¯%\u0004\u0003Nää}nçò\u008eÝm\u0018p\u0007ÅÐÜÇ§ÌºÙqf\u001b\u0001F°ì]c\u001b\u008c8\u0019ZL¶A\\ö";
                                    int var5 = "E\u008d¯\u0001j\u007fïx\u0099Ô]û\f\u0085-¹ns\u0089\u0012Í\u009fõb\u0097t°iÃÊpà±ÄýMôëæ\u0018\u00139îx2î\u009ek\u001f¤\u008d\u0015Åü\u008c\\«\"{?\u009c;V´Î\u0080Ãp¯%\u0004\u0003Nää}nçò\u008eÝm\u0018p\u0007ÅÐÜÇ§ÌºÙqf\u001b\u0001F°ì]c\u001b\u008c8\u0019ZL¶A\\ö"
                                       .length();
                                    byte var2 = 0;

                                    label87:
                                    while (true) {
                                       int var76 = var2;
                                       var2 += 8;
                                       byte[] var7 = var4.substring(var76, var2).getBytes("ISO-8859-1");
                                       long[] var59 = var6;
                                       var76 = var3++;
                                       long var98 = (var7[0] & 255L) << 56
                                          | (var7[1] & 255L) << 48
                                          | (var7[2] & 255L) << 40
                                          | (var7[3] & 255L) << 32
                                          | (var7[4] & 255L) << 24
                                          | (var7[5] & 255L) << 16
                                          | (var7[6] & 255L) << 8
                                          | var7[7] & 255L;
                                       byte var126 = -1;

                                       while (true) {
                                          long var8 = var98;
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
                                          var144 = (var10[0] & 255L) << 56
                                             | (var10[1] & 255L) << 48
                                             | (var10[2] & 255L) << 40
                                             | (var10[3] & 255L) << 32
                                             | (var10[4] & 255L) << 24
                                             | (var10[5] & 255L) << 16
                                             | (var10[6] & 255L) << 8
                                             | var10[7] & 255L;
                                          switch (var126) {
                                             case 0:
                                                var59[var76] = var144;
                                                if (var2 >= var5) {
                                                   p = var6;
                                                   q = new Long[16];
                                                   String[] var46 = new String[14];
                                                   int var44 = 0;
                                                   int[] var100 = new int[5];
                                                   String var43;
                                                   int var45 = (var43 = var22[5]).length();
                                                   edo(var100);
                                                   char var42 = '/';
                                                   int var53 = -1;

                                                   label77:
                                                   while (true) {
                                                      byte var63 = 75;
                                                      String var82 = var43.substring(++var53, var53 + var42);
                                                      byte var101 = -1;

                                                      while (true) {
                                                         String var64 = a(var63, a(var82));
                                                         switch (var101) {
                                                            case 0:
                                                               var46[var44++] = var64;
                                                               if ((var53 += var42) >= var45) {
                                                                  a = var46;
                                                                  long var33 = 99948703792457L;
                                                                  long[] var39 = new long[8];
                                                                  int var36 = 0;
                                                                  String var37;
                                                                  int var38 = (var37 = var22[3]).length();
                                                                  byte var35 = 0;

                                                                  label65:
                                                                  while (true) {
                                                                     int var86 = var35;
                                                                     var35 += 8;
                                                                     byte[] var40 = var37.substring(var86, var35).getBytes(var22[4]);
                                                                     long[] var68 = var39;
                                                                     var86 = var36++;
                                                                     long var104 = var40[0] & 255;
                                                                     var144 = 5198717590105279599L ^ var31;
                                                                     long var105 = var104 << 56;
                                                                     long var129 = var40[1] & 255;
                                                                     long var106 = var105 | var129 << 48;
                                                                     long var130 = var40[2] & 255;
                                                                     long var107 = var106 | var130 << 40;
                                                                     long var131 = var40[3] & 255;
                                                                     long var108 = var107 | var131 << 32;
                                                                     long var132 = var40[4] & 255;
                                                                     long var109 = var108 | var132 << 24;
                                                                     long var133 = var40[5] & 255;
                                                                     long var110 = var109 | var133 << 16;
                                                                     long var134 = var40[6] & 255;
                                                                     long var111 = var110 | var134 << 8;
                                                                     long var112 = var111 | var40[7] & 255;
                                                                     byte var135 = -1;

                                                                     while (true) {
                                                                        var144 = var112 ^ var33;
                                                                        switch (var135) {
                                                                           case 0:
                                                                              var68[var86] = var144;
                                                                              if (var35 >= var38) {
                                                                                 d = var39;
                                                                                 e = new Long[8];
                                                                                 return;
                                                                              }
                                                                              break;
                                                                           default:
                                                                              var68[var86] = var144;
                                                                              if (var35 < var38) {
                                                                                 continue label65;
                                                                              }

                                                                              var38 = (var37 = var22[1]).length();
                                                                              var35 = 0;
                                                                        }

                                                                        byte var88 = var35;
                                                                        var35 += 8;
                                                                        var40 = var37.substring(var88, var35).getBytes(var22[2]);
                                                                        var68 = var39;
                                                                        var86 = var36++;
                                                                        long var114 = var40[0] & 255;
                                                                        var144 = 235775882534903228L ^ var31;
                                                                        long var115 = var114 << 56;
                                                                        long var138 = var40[1] & 255;
                                                                        long var116 = var115 | var138 << 48;
                                                                        long var139 = var40[2] & 255;
                                                                        long var117 = var116 | var139 << 40;
                                                                        long var140 = var40[3] & 255;
                                                                        long var118 = var117 | var140 << 32;
                                                                        long var141 = var40[4] & 255;
                                                                        long var119 = var118 | var141 << 24;
                                                                        long var142 = var40[5] & 255;
                                                                        long var120 = var119 | var142 << 16;
                                                                        long var143 = var40[6] & 255;
                                                                        long var121 = var120 | var143 << 8;
                                                                        var112 = var121 | var40[7] & 255;
                                                                        var135 = 0;
                                                                     }
                                                                  }
                                                               }

                                                               var42 = var43.charAt(var53);
                                                               break;
                                                            default:
                                                               var46[var44++] = var64;
                                                               if ((var53 += var42) < var45) {
                                                                  var42 = var43.charAt(var53);
                                                                  continue label77;
                                                               }

                                                               var45 = (var43 = var22[0]).length();
                                                               var42 = '\t';
                                                               var53 = -1;
                                                         }

                                                         var63 = 47;
                                                         var82 = var43.substring(++var53, var53 + var42);
                                                         var101 = 0;
                                                      }
                                                   }
                                                }
                                                break;
                                             default:
                                                var59[var76] = var144;
                                                if (var2 < var5) {
                                                   continue label87;
                                                }

                                                var4 = "Íw¼û\u0018?ñ9\u0094Wæ\u0017¬`¼\u007f";
                                                var5 = "Íw¼û\u0018?ñ9\u0094Wæ\u0017¬`¼\u007f".length();
                                                var2 = 0;
                                          }

                                          byte var78 = var2;
                                          var2 += 8;
                                          var7 = var4.substring(var78, var2).getBytes("ISO-8859-1");
                                          var59 = var6;
                                          var76 = var3++;
                                          var98 = (var7[0] & 255L) << 56
                                             | (var7[1] & 255L) << 48
                                             | (var7[2] & 255L) << 40
                                             | (var7[3] & 255L) << 32
                                             | (var7[4] & 255L) << 24
                                             | (var7[5] & 255L) << 16
                                             | (var7[6] & 255L) << 8
                                             | var7[7] & 255L;
                                          var126 = 0;
                                       }
                                    }
                                 }
                                 break;
                              default:
                                 var57[var10001] = var144;
                                 if (var13 < var16) {
                                    continue label103;
                                 }

                                 var15 = "\u0083ô\u0083\u0019Ç\u0088èÊ\u0089\u009dfÏ%¥\u000fY";
                                 var16 = "\u0083ô\u0083\u0019Ç\u0088èÊ\u0089\u009dfÏ%¥\u000fY".length();
                                 var13 = 0;
                           }

                           byte var75 = var13;
                           var13 += 8;
                           var18 = var15.substring(var75, var13).getBytes("ISO-8859-1");
                           var57 = var17;
                           var10001 = var14++;
                           var95 = (var18[0] & 255L) << 56
                              | (var18[1] & 255L) << 48
                              | (var18[2] & 255L) << 40
                              | (var18[3] & 255L) << 32
                              | (var18[4] & 255L) << 24
                              | (var18[5] & 255L) << 16
                              | (var18[6] & 255L) << 8
                              | var18[7] & 255L;
                           var123 = 0;
                        }
                     }
                  }

                  var26 = var27.charAt(var50);
                  break;
               default:
                  var22[var28++] = var91;
                  if ((var50 += var26) < var29) {
                     var26 = var27.charAt(var50);
                     continue label121;
                  }

                  var27 = "bb_7\u0092ë\u0080k?\u0081ù(©å²\u001bň£2\bMÀvÊ¡v\u001fum-Ø:c\u0003/AÛÊü\u0011\u008añs~Î\u0098³\u0094á·Ï(D-î»&\u0007/×\u0080`jí\u00968\u0097gdÊ6\u0095¸®\u0016û¼ÔË|ñ\u001ft\u009d,ºÛ\u0093{\u0015\u001a]\u00045Ü\u0081ú\u0018N`èmømÂÄaßï¤\u0017æ\u0002èØ¡.ZëÇÅlÀG_\u0080´\u0096S\u0097f.\u001f«\u001a\u0012\u000bz«,ÃXLÑõwºá\u00ad\u009d÷Hiëø¦\u000e\u001cºþ Ï\u0090\u008eoáN]mÐ\u0082¼$«\u009czöÑA\u008f\u009dÐ\u0010P2\u0096¼\u0007uä\u0017\r\u000fR\u0013ÚJr=:\u0005}ä\u001bí\u000fÉ\u001eF\u000b\u0017äR?°··\u009c9p-´\u0006.ák\u0005)°\u0088\u001d\f¿\u008cÎB\u0080\u0003-ôö!$Y\u0092CA\u0085»\"Ý\nÖ®¶!F]Ýñü\u0006¯ðÃÕ®\u009b«.¾?¨Ò\u001dy\u0004#\u0098A7#P_\u0091Ü\u0082À-ÔÅ\u0007p@\u0092\u0018pð0S;\u001dý²e\u00849Ú\u008e´\u009a\u0085åsAJ>\u0095'¯lÁtý\u001f\fJ\u0096©\u0087õL\u0090e\t\u0084½P\u0017j Õ$\u0087\u009b";
                  var29 = "bb_7\u0092ë\u0080k?\u0081ù(©å²\u001bň£2\bMÀvÊ¡v\u001fum-Ø:c\u0003/AÛÊü\u0011\u008añs~Î\u0098³\u0094á·Ï(D-î»&\u0007/×\u0080`jí\u00968\u0097gdÊ6\u0095¸®\u0016û¼ÔË|ñ\u001ft\u009d,ºÛ\u0093{\u0015\u001a]\u00045Ü\u0081ú\u0018N`èmømÂÄaßï¤\u0017æ\u0002èØ¡.ZëÇÅlÀG_\u0080´\u0096S\u0097f.\u001f«\u001a\u0012\u000bz«,ÃXLÑõwºá\u00ad\u009d÷Hiëø¦\u000e\u001cºþ Ï\u0090\u008eoáN]mÐ\u0082¼$«\u009czöÑA\u008f\u009dÐ\u0010P2\u0096¼\u0007uä\u0017\r\u000fR\u0013ÚJr=:\u0005}ä\u001bí\u000fÉ\u001eF\u000b\u0017äR?°··\u009c9p-´\u0006.ák\u0005)°\u0088\u001d\f¿\u008cÎB\u0080\u0003-ôö!$Y\u0092CA\u0085»\"Ý\nÖ®¶!F]Ýñü\u0006¯ðÃÕ®\u009b«.¾?¨Ò\u001dy\u0004#\u0098A7#P_\u0091Ü\u0082À-ÔÅ\u0007p@\u0092\u0018pð0S;\u001dý²e\u00849Ú\u008e´\u009a\u0085åsAJ>\u0095'¯lÁtý\u001f\fJ\u0096©\u0087õL\u0090e\t\u0084½P\u0017j Õ$\u0087\u009b"
                     .length();
                  var26 = 16;
                  var50 = -1;
            }

            var54 = var27.substring(++var50, var50 + var26);
            var10001 = 0;
         }
      }
   }

   private static char[] a(String var0) {
      char[] var10000 = var0.toCharArray();
      if (var10000.length < 2) {
         char var10003 = var10000[0];
         var10000[0] = (char)(var10003 ^ '\f');
      }

      return var10000;
   }

   private static String a(int var0, char[] var1) {
      int var10003 = var1.length;
      int var10002 = var0;
      char[] var10001 = var1;
      int var10000 = var10003;

      for (int var4 = 0; var10000 > var4; var4++) {
         char var10005 = var10001[var4];
         byte var10;
         switch (var4 % 7) {
            case 0:
               var10 = 14037;
               var10 = 7;
               break;
            case 1:
               var10 = 20989;
               var10 = 51;
               break;
            case 2:
               var10 = 2272;
               var10 = 54;
               break;
            case 3:
               var10 = 10185;
               var10 = 82;
               break;
            case 4:
               var10 = 8089;
               var10 = 117;
               break;
            case 5:
               var10 = 12653;
               var10 = 20;
               break;
            default:
               var10 = 16324;
               var10 = 12;
         }

         var10001[var4] = (char)(var10005 ^ var10002 ^ var10);
      }

      return new String(var10001).intern();
   }

   private static long a(int var0, long var1) {
      int[] var5 = ClientSetup.abu();
      int var10000 = var0 ^ (int)var1;
      var10000 ^= 22469;
      int var6 = var10000 & 32767;
      Long var8 = e[var6];
      if (var8 == null) {
         e[var6] = d[var6] ^ var1;
      }

      var8 = e[var6];

      return var8;
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

   private static int c(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 1747;
      if (k[var3] == null) {
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
         long var5 = j[var3];
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
         Object[] var9 = (Object[])l.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               l.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("cc/astralis/brc", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         k[var3] = var15;
      }

      return k[var3];
   }

   private static int b(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = c(var4, var5);
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
         throw new RuntimeException("cc/astralis/brc" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static long e(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 4224;
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
            throw new RuntimeException("cc/astralis/brc", var14);
         }

         long var15 = (var10[0] & 255L) << 56
            | (var10[1] & 255L) << 48
            | (var10[2] & 255L) << 40
            | (var10[3] & 255L) << 32
            | (var10[4] & 255L) << 24
            | (var10[5] & 255L) << 16
            | (var10[6] & 255L) << 8
            | var10[7] & 255L;
         q[var3] = var15;
      }

      return q[var3];
   }

   private static long d(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      long var7 = e(var4, var5);
      MethodHandle var9 = MethodHandles.constant(long.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var9, 0, int.class, long.class));
      return var7;
   }

   private static CallSite d(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("d".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("cc/astralis/brc" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }
}
