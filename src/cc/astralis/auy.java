package cc.astralis;

import astralis.mixin.accessor.IdentifierAccessor;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1011;
import net.minecraft.class_2960;

public class auy implements dlc {
   public static final Map<String, class_2960> fsc;
   private static final long a = 121191837260163L;
   private static final String b;

   public static class_2960 cyz(String imagePath) throws IOException {
      int[] axx = ClientSetup.abu();
      Map var10000 = fsc;
      String var10001 = a;
      if (!fsc.containsKey(a)) {
         File axxx = new File(a);

         class_2960 var8;
         try (InputStream axxxx = new FileInputStream(axxx)) {
            class_1011 axxxxx = class_1011.method_4309(axxxx);
            class_2960 axxxxxx = IdentifierAccessor.createIdentifier(b, a);
            chi.method_1531().method_65875(axxxxxx);
            fsc.put(a, axxxxxx);
            var8 = axxxxxx;
         }

         return var8;
      }

      var10000 = fsc;
      var10001 = a;

      return (class_2960)var10000.get(var10001);
   }

   public static void grf() {
      fsc.values().forEach(a -> chi.method_1531().method_4615(a));
      fsc.clear();
   }

   static {
      long var0 = a ^ 114687881070919L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var4 = var2.doFinal("astralis".getBytes("ISO-8859-1"));
      String var5 = a(var4).intern();
      b = var5;
      fsc = new HashMap<>();
   }

}
