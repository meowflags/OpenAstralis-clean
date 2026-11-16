package cc.astralis;

import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_2596;
import net.minecraft.class_2848;
import net.minecraft.class_2848.class_2849;

public class DisablerVulcanScaffold extends hcr {
   private static final long a = 81688966279230L;
   private static final String d;

   public DisablerVulcanScaffold(guu module) {
      long ax = DisablerVulcanScaffold.a ^ 123046175283752L;
      super(a, d);
   }

   @gdz
   public void cxg(amo event) {
      long ax = DisablerVulcanScaffold.a ^ 49473125817535L;
      int[] var10000 = ClientSetup.abu();
      class_2596 var6 = a.bed();
      int[] axx = var10000;
      class_2596 var7 = var6;
      if (!(var6 instanceof class_2848)) {
         return;
      }

      var7 = var6;

      label26: {
         class_2848 axxx = (class_2848)var7;
         class_2849 var8 = axxx.method_12365();
         class_2849 var10001 = class_2849.field_12981;
         if (var8 == class_2849.field_12981) {
            break label26;
         }

         var8 = axxx.method_12365();
         var10001 = class_2849.field_12985;

         if (var8 != var10001) {
            return;
         }
      }

      a.gmm(true);
   }

   @gdz
   public void bql(fxx event) {
      long ax = DisablerVulcanScaffold.a ^ 22351178312639L;
      if (((efx)ClientSetup.gqy().aws().diy(efx.class)).dsv()) {
         ;
      }
   }

   static {
      long var0 = a ^ 65442928451065L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var4 = var2.doFinal("Vulcan Scaffold".getBytes("ISO-8859-1"));
      String var5 = a(var4).intern();
      d = var5;
   }

}
