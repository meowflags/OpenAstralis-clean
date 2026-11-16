package cc.astralis;

import io.github.humbleui.skija.Image;
import java.util.Objects;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

final class agz {
   final Image gac;
   final int bhz;
   final int gii;
   final boolean dow;
   private static final long a = 75902818305057L;
   private static final String b;

   agz(Image a, int a, int a, boolean a) {
      long ax = agz.a ^ 132246971127642L;
      super();
      a.gac = Objects.requireNonNull(a, b);
      a.bhz = a;
      a.gii = a;
      a.dow = a;
   }

   boolean aec(int a, int a, boolean a) {
      long ax = agz.a ^ 117798882058787L;
      int[] var6 = ClientSetup.abu();
      int var10000 = a.bhz;
      int var10001 = a;
      if (a.bhz != a) {
         return (boolean)0;
      }

      var10000 = a.gii;
      var10001 = a;

      if (var10000 != var10001) {
         return (boolean)0;
      }

      var10000 = a.dow;

      var10001 = a;

      return (boolean)(var10000 == var10001 ? 1 : 0);
   }

   static {
      long var0 = a ^ 59303461502583L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var4 = var2.doFinal("image".getBytes("ISO-8859-1"));
      String var5 = a(var4).intern();
      b = var5;
   }

}
