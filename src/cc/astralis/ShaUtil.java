package cc.astralis;


import java.lang.invoke.MethodHandles;


import java.nio.charset.StandardCharsets;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;


public class ShaUtil {
   private static final long a = 56688316365986L;


   public static String aru(String plainText) {
      int[] axx = ClientSetup.abu();

      try {
         MessageDigest axxx = MessageDigest.getInstance("SHA-512");
         byte[] axxxx = axxx.digest(a.getBytes(StandardCharsets.UTF_8));
         StringBuilder axxxxx = new StringBuilder();
         byte[] var7 = axxxx;
         int var8 = axxxx.length;
         int var9 = 0;

         while (true) {
            if (var9 < var8) {
               byte axxxxxx = var7[var9];
               var12 = axxxxx.append(String.format("%02x", axxxxxx));

               var9++;
               continue;
            }

            var12 = axxxxx;
            break;
         }

         return var12.toString();
      } catch (NoSuchAlgorithmException var11) {
         throw new RuntimeException("SHA-512 not supported", var11);
      }
   }

   public static boolean fqe(String plainText, String hash) {
      return aru(a).equalsIgnoreCase(a);
   }

}
