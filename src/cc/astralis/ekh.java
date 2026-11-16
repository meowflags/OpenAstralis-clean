package cc.astralis;

import io.github.humbleui.skija.Image;
import java.util.LinkedHashMap;
import java.util.Map.Entry;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

class ekh extends LinkedHashMap<String, Image> {
   private static final long a = 11005285218570L;
   private static final long b;

   ekh(int a, float a, boolean a) {
      super(a, a, a);
   }

   @Override
   protected boolean removeEldestEntry(Entry<String, Image> eldest) {
      int[] var4 = ClientSetup.abu();
      int var10000 = a.size();
      if (var10000 > (int)b) {
         a.getValue().close();
         return true;
      }

      var10000 = 0;

      return (boolean)var10000;
   }

}
