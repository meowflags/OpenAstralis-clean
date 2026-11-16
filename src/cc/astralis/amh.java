package cc.astralis;

import java.lang.invoke.MethodHandles;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public interface amh {
   fll ety;
   fll grb;
   fll cbl;
   fll cbi;
   fll bsb;
   fll arn;
   fll bsf;
   fll cqb;
   fll dfk;
   fll dot;
   fll hij;
   fll dyi;
   fll bjr;
   fll bkr;
   fll gvf;
   fll cfl;
   fll euv;
   fll dbi;
   fll dlv;
   fll bqd;
   fll ezy;
   fll aio;
   fll ckg;
   fll geh;
   fll hdm;
   fll aaq;
   fll eiv;
   fll aig;
   fll eav;
   fll fgr;
   fll hhc;
   fll dzn;
   fll dgv;
   fll acy;
   fll enh;
   fll amc;
   fll cby;
   fll ahh;
   fll euz;
   fll fnr;
   fll cgd;
   fll czc;
   fll avo;
   fll hfr;
   fll dua;
   fll aww;
   fll dia;
   fll got;
   fll dun;
   fll glf;
   fll gau;
   fll coz;
   fll ham;
   fll adc;
   fll hjs;
   fll dik;
   fll bnb;

   static {
      long var9 = gls.a(6404853433639342851L, -2629777055934342559L, MethodHandles.lookup().lookupClass()).a(136159632525275L) ^ 111125743790173L;
      Cipher var1;
      Cipher var10000 = var1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var9 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var2 = 1; var2 < 8; var2++) {
         var10003[var2] = (byte)(var9 << var2 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var0 = new String[31];
      int var6 = 0;
      String var5 = "æ\u001d\u0088Í\u0000åÿ\u009f«_  \r½\\;®ú\u0084\u0094/\u0000yÈ\u0018÷;-¯l\u0014XðlU\u0085\u0095u\u0097Y(æ\u008f¢\u008f\u0084öFo\u0010P\u0081ãÍ\u0007¾@Ð\u0084\u001düº¬¹\u0095°\u00183ÛÏ\u0003Û \u0018\u009bªEs-NÝ4\u0090\u0010åçx\u009a´]\u00ad\u0010÷;-¯l\u0014Xðz Õ\u008a\u0007Bç\u008a\b¹ßx{äFä\u0094\u0010?±.\u00864õ¼u¨]ð>x,ß~\u0018æ\u001d\u0088Í\u0000åÿ\u009f\u0015îü\u0006¡Ã|?Ó®g\u001bJ¤>\u0005\u0010e(x\u0089\u008f^\u0002øHæQÝÑ×\u008eÁ\u0010Ô¦y×öÒEr\u009bô¢p4=Çµ\u0018÷;-¯l\u0014XðlU\u0085\u0095u\u0097Y(æ\u008f¢\u008f\u0084öFo\u0010?±.\u00864õ¼u¨]ð>x,ß~\u0010Ô¦y×öÒErH,`û\u0089\u009eZ\u0015\b±V \u00adSÃøÉ\u0010\u0088\u008dËÈpïIí?\\Ô\u0016Þ\u0013öJ\u0018æ\u001d\u0088Í\u0000åÿ\u009f«_  \r½\\;®ú\u0084\u0094/\u0000yÈ\u0018|+\u009a\u0094a\u009fìUk\\\u0012wÎp\u0083wÉX\\\u0086`§\u00130\u0010Ô¦y×öÒEr\u009bô¢p4=Çµ\u0018æ\u001d\u0088Í\u0000åÿ\u009f\u0015îü\u0006¡Ã|?Ó®g\u001bJ¤>\u0005\u0010Ô¦y×öÒErH,`û\u0089\u009eZ\u0015\u0010ÆtS²ÃøÌ¼[à½¢Ñ\b\r\u0082\u0010÷;-¯l\u0014Xðz Õ\u008a\u0007Bç\u008a\b¹ßx{äFä\u0094\b±V \u00adSÃøÉ\u0010]\u001fr\u0098$É\u009d\u0096µåm:Í\u0010*¡\u0010ÆtS²ÃøÌ¼[à½¢Ñ\b\r\u0082\u0018úÁ¢\u0007\\ô\u009aÁ'm·üsr$øö¢Ì\u009b\u0080Mº|\u0010\u0088\u008dËÈpïIí?\\Ô\u0016Þ\u0013öJ\u0010e(x\u0089\u008f^\u0002øHæQÝÑ×\u008eÁ";
      int var7 = "æ\u001d\u0088Í\u0000åÿ\u009f«_  \r½\\;®ú\u0084\u0094/\u0000yÈ\u0018÷;-¯l\u0014XðlU\u0085\u0095u\u0097Y(æ\u008f¢\u008f\u0084öFo\u0010P\u0081ãÍ\u0007¾@Ð\u0084\u001düº¬¹\u0095°\u00183ÛÏ\u0003Û \u0018\u009bªEs-NÝ4\u0090\u0010åçx\u009a´]\u00ad\u0010÷;-¯l\u0014Xðz Õ\u008a\u0007Bç\u008a\b¹ßx{äFä\u0094\u0010?±.\u00864õ¼u¨]ð>x,ß~\u0018æ\u001d\u0088Í\u0000åÿ\u009f\u0015îü\u0006¡Ã|?Ó®g\u001bJ¤>\u0005\u0010e(x\u0089\u008f^\u0002øHæQÝÑ×\u008eÁ\u0010Ô¦y×öÒEr\u009bô¢p4=Çµ\u0018÷;-¯l\u0014XðlU\u0085\u0095u\u0097Y(æ\u008f¢\u008f\u0084öFo\u0010?±.\u00864õ¼u¨]ð>x,ß~\u0010Ô¦y×öÒErH,`û\u0089\u009eZ\u0015\b±V \u00adSÃøÉ\u0010\u0088\u008dËÈpïIí?\\Ô\u0016Þ\u0013öJ\u0018æ\u001d\u0088Í\u0000åÿ\u009f«_  \r½\\;®ú\u0084\u0094/\u0000yÈ\u0018|+\u009a\u0094a\u009fìUk\\\u0012wÎp\u0083wÉX\\\u0086`§\u00130\u0010Ô¦y×öÒEr\u009bô¢p4=Çµ\u0018æ\u001d\u0088Í\u0000åÿ\u009f\u0015îü\u0006¡Ã|?Ó®g\u001bJ¤>\u0005\u0010Ô¦y×öÒErH,`û\u0089\u009eZ\u0015\u0010ÆtS²ÃøÌ¼[à½¢Ñ\b\r\u0082\u0010÷;-¯l\u0014Xðz Õ\u008a\u0007Bç\u008a\b¹ßx{äFä\u0094\b±V \u00adSÃøÉ\u0010]\u001fr\u0098$É\u009d\u0096µåm:Í\u0010*¡\u0010ÆtS²ÃøÌ¼[à½¢Ñ\b\r\u0082\u0018úÁ¢\u0007\\ô\u009aÁ'm·üsr$øö¢Ì\u009b\u0080Mº|\u0010\u0088\u008dËÈpïIí?\\Ô\u0016Þ\u0013öJ\u0010e(x\u0089\u008f^\u0002øHæQÝÑ×\u008eÁ"
         .length();
      char var4 = 24;
      int var12 = -1;

      label28:
      while (true) {
         String var13 = var5.substring(++var12, var12 + var4);
         byte var10001 = -1;

         while (true) {
            byte[] var8 = var1.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = a(var8).intern();
            switch (var10001) {
               case 0:
                  var0[var6++] = var19;
                  if ((var12 += var4) >= var7) {
                     ety = FontManager.emc(var0[18], 8);
                     grb = FontManager.emc(var0[7], 9);
                     cbl = FontManager.emc(var0[7], 10);
                     cbi = FontManager.emc(var0[7], 11);
                     bsb = FontManager.emc(var0[7], 12);
                     arn = FontManager.emc(var0[7], 20);
                     bsf = FontManager.emc(var0[15], 8);
                     cqb = FontManager.emc(var0[0], 9);
                     dfk = FontManager.emc(var0[0], 10);
                     dot = FontManager.emc(var0[0], 11);
                     hij = FontManager.emc(var0[0], 16);
                     dyi = FontManager.emc(var0[0], 20);
                     bjr = FontManager.emc(var0[0], 32);
                     bkr = FontManager.emc(var0[6], 8);
                     gvf = FontManager.emc(var0[11], 20);
                     cfl = FontManager.emc(var0[26], 9);
                     euv = FontManager.emc(var0[2], 8);
                     dbi = FontManager.emc(var0[20], 8);
                     dlv = FontManager.emc(var0[25], 11);
                     bqd = FontManager.emc(var0[25], 20);
                     ezy = FontManager.emc(var0[24], 25);
                     aio = FontManager.emc(var0[29], 25);
                     ckg = FontManager.emc(var0[16], 25);
                     geh = FontManager.emc(var0[30], 15);
                     hdm = FontManager.emc(var0[3], 11);
                     aaq = FontManager.emc(var0[4], 8);
                     eiv = FontManager.emc(var0[21], 10);
                     aig = FontManager.emc(var0[21], 11);
                     eav = FontManager.emc(var0[21], 20);
                     fgr = FontManager.emc(var0[10], 8);
                     hhc = FontManager.emc(var0[1], 10);
                     dzn = FontManager.emc(var0[1], 11);
                     dgv = FontManager.emc(var0[1], 20);
                     acy = FontManager.emc(var0[23], 8);
                     enh = FontManager.emc(var0[13], 10);
                     amc = FontManager.emc(var0[13], 11);
                     cby = FontManager.emc(var0[13], 20);
                     ahh = FontManager.emc(var0[14], 8);
                     euz = FontManager.emc(var0[27], 10);
                     fnr = FontManager.emc(var0[27], 11);
                     cgd = FontManager.emc(var0[27], 20);
                     czc = FontManager.emc(var0[12], 8);
                     avo = FontManager.emc(var0[19], 10);
                     hfr = FontManager.emc(var0[19], 11);
                     dua = FontManager.emc(var0[19], 20);
                     aww = FontManager.emc(var0[9], 8);
                     dia = FontManager.emc(var0[17], 10);
                     got = FontManager.emc(var0[17], 11);
                     dun = FontManager.emc(var0[17], 20);
                     glf = FontManager.emc(var0[22], 8);
                     gau = FontManager.emc(var0[5], 10);
                     coz = FontManager.emc(var0[5], 11);
                     ham = FontManager.emc(var0[5], 20);
                     adc = FontManager.emc(var0[28], 8);
                     hjs = FontManager.emc(var0[8], 10);
                     dik = FontManager.emc(var0[8], 11);
                     bnb = FontManager.emc(var0[8], 20);
                     return;
                  }

                  var4 = var5.charAt(var12);
                  break;
               default:
                  var0[var6++] = var19;
                  if ((var12 += var4) < var7) {
                     var4 = var5.charAt(var12);
                     continue label28;
                  }

                  var5 = "|+\u009a\u0094a\u009fìU\u007f\u0087%P\fkq\u008e\u0010|+\u009a\u0094a\u009fìU\u007f\u0087%P\fkq\u008e";
                  var7 = "|+\u009a\u0094a\u009fìU\u007f\u0087%P\fkq\u008e\u0010|+\u009a\u0094a\u009fìU\u007f\u0087%P\fkq\u008e".length();
                  var4 = 16;
                  var12 = -1;
            }

            var13 = var5.substring(++var12, var12 + var4);
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
}
