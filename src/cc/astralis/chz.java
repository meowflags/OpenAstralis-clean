package cc.astralis;

import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;


import java.lang.invoke.MethodHandles;


public final class chz {
   private final int aaq = 1;
   private static final long a = 29708345993456L;


   public static chz dgg(InputStream is) {
      return new chz(a);
   }

   public static chz clj(String filePath) {
      long ax = chz.a ^ 110303245805239L;
      return new chz("/assets/astralis/" + a);
   }

   public static chz gcm(String absoluteFilePath) {
      long ax = chz.a ^ 79054071483396L;

      try {
         chz var4;
         try (FileInputStream axx = new FileInputStream(a)) {
            var4 = new chz(axx);
         }

         return var4;
      } catch (IOException var8) {
         throw new RuntimeException("Failed to load image from: " + a, var8);
      }
   }

   private chz(InputStream a) {
   }

   private chz(String a) {
      this(chz.class.getResourceAsStream(a));
   }

   public int dod() {
      return a.aaq;
   }

}
