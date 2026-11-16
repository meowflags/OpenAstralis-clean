package cc.astralis;

import java.util.HashMap;
import java.util.Iterator;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public final class enn {
   private final HashMap<guu, erp> fap = new HashMap<>();
   private static final long a = 94736509487054L;
   private static final long b;

   public void aof() {
      long a = enn.a ^ 103226767061660L;
      int[] var10000 = ClientSetup.abu();
      Iterator var4 = ClientSetup.gqy().aws().dmc().iterator();
      int[] ax = var10000;

      while (var4.hasNext()) {
         guu axx = (guu)var4.next();
         a.fap.put(axx, new erp(dtw.EASE_IN_OUT_SINE, b));
      }
   }

   public erp gqv(guu module) {
      return a.fap.get(a);
   }

}
