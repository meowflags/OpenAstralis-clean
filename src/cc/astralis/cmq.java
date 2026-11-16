package cc.astralis;

import java.util.LinkedHashMap;
import java.util.Map.Entry;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

class cmq extends LinkedHashMap<Integer, agz> {
   private static final long a = 83227459676275L;
   private static final long b;

   cmq(int a, float a, boolean a) {
      super(a, a, a);
   }

   @Override
   protected boolean removeEldestEntry(Entry<Integer, agz> eldest) {
      int[] var4 = ClientSetup.abu();
      int var10000 = a.size();
      var10000 = var10000 > (int)b ? 1 : 0;

      return (boolean)var10000;
   }

}
