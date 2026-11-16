package cc.astralis;


import java.lang.invoke.MethodHandles;


import javax.crypto.Cipher;

import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public class SysInfo {
   private static final fxm cd;
   private static final long a = 44757174269551L;
   private static final String[] b;
   private static final String[] c;

   public static String asl() {
      return cd.fty();
   }

   public static String aeb() {
      return System.getProperty("os.arch", "unknown");
   }

   public static String gzo() {
      return System.getProperty("os.version", "unknown");
   }

   public static int bma() {
      return Runtime.getRuntime().availableProcessors();
   }

   public static String dvt() {
      return System.getProperty("user.language", "en");
   }

   public static String hfo(String key) {
      long ax = SysInfo.a ^ 88894671104933L;
      int[] var10000 = ClientSetup.abu();
      String axx = System.getenv(a);
      int[] axxx = var10000;
      String var5 = axx;
      var5 = axx != null ? axx : "";

      return var5;
   }

   public static fxm eta() {
      long a = SysInfo.a ^ 66399396095811L;
      String ax = System.getProperty("os.name", "").toLowerCase();
      if (ax.contains("win")) {
         return fxm.WIN;
      } else {
         if (ax.contains("mac")) {
            return fxm.MAC;
         } else {
            if (!ax.contains("nux")) {
               if (!ax.contains("nix")) {
                  if (!ax.contains("aix")) {
                     return fxm.UNK;
                  }
               }
            }

            return fxm.LNX;
         }
      }
   }

   static {
      long var0 = a ^ 133548391433036L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var9 = new String[12];
      int var7 = 0;
      String var6 = "F Ò]\u001bå\u001d\u0098Ù_øL¤ÔôZ\u0010è\fùøãê1ö*ñ¿ZÈ¶Éh\u0010Ð²\u0096AÐZ\u0012ì{\u008fýÖj°P@ ÀÚÍù@FÆ\u001a\u008ez\u0002\u0091Ub(\u0091\u009b\u0015\u0092!Æ§\u0090·ß\u008aþ¶M\u0001:Z\u0010r\u009b^æ9\u0014l\u0010þ.öü«¢\u0010\u0011\u0018\\´\r·n\rF+H'\u0016Ò![ó0\bIGû\u001c\u00971m\u0010î[ÊÒÁ\u0090MÎ\u0001¬\u0085VtA\u0000-\u0010ÂÍW\u001dá\u009e\u0004á4mµ|\u0099ñuÆ\u0010-\u001d£H\u00924²ÉQ\u0091T,tf\u0015©\u0010¸àÉÄ\u0005ÝÁ\u0082Ceã\u0016\u0098\u009a\u0086k";
      int var8 = "F Ò]\u001bå\u001d\u0098Ù_øL¤ÔôZ\u0010è\fùøãê1ö*ñ¿ZÈ¶Éh\u0010Ð²\u0096AÐZ\u0012ì{\u008fýÖj°P@ ÀÚÍù@FÆ\u001a\u008ez\u0002\u0091Ub(\u0091\u009b\u0015\u0092!Æ§\u0090·ß\u008aþ¶M\u0001:Z\u0010r\u009b^æ9\u0014l\u0010þ.öü«¢\u0010\u0011\u0018\\´\r·n\rF+H'\u0016Ò![ó0\bIGû\u001c\u00971m\u0010î[ÊÒÁ\u0090MÎ\u0001¬\u0085VtA\u0000-\u0010ÂÍW\u001dá\u009e\u0004á4mµ|\u0099ñuÆ\u0010-\u001d£H\u00924²ÉQ\u0091T,tf\u0015©\u0010¸àÉÄ\u0005ÝÁ\u0082Ceã\u0016\u0098\u009a\u0086k"
         .length();
      char var5 = 16;
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = a(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     b = var9;
                     c = new String[12];
                     cd = eta();
                     return;
                  }

                  var5 = var6.charAt(var12);
                  break;
               default:
                  var9[var7++] = var19;
                  if ((var12 += var5) < var8) {
                     var5 = var6.charAt(var12);
                     continue label27;
                  }

                  var6 = ";ºä\u0014Ûrí\u0017ß(~Uúøo\u0006\u001e]¼í\u0090*ÒvH¯/\u008ad\u009dÅ`\u0010-%<\u008cÒ\u0097÷\u0092ì\u009f'O,\u008b§Þ";
                  var8 = ";ºä\u0014Ûrí\u0017ß(~Uúøo\u0006\u001e]¼í\u0090*ÒvH¯/\u008ad\u009dÅ`\u0010-%<\u008cÒ\u0097÷\u0092ì\u009f'O,\u008b§Þ".length();
                  var5 = ' ';
                  var12 = -1;
            }

            var13 = var6.substring(++var12, var12 + var5);
            var10001 = 0;
         }
      }
   }

}
