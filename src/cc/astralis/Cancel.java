package cc.astralis;

import astralis.mixin.accessor.EntityVelocityUpdateS2CPacketAccessor;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_2596;
import net.minecraft.class_2743;

public class Cancel extends hcr {
   private static final long a = 13177341634483L;
   private static final String d;

   public Cancel(guu parentClass) {
      long ax = Cancel.a ^ 22981739682929L;
      super(a, d);
   }

   @gdz
   public void egt(amo event) {
      long ax = Cancel.a ^ 89727437814421L;
      int[] axx = ClientSetup.abu();
      amo var10000 = a;
      if (a.cud() != gpy.RECEIVE) {
         return;
      }

      var10000 = a;

      class_2596 axxx = var10000.bed();
      if (!(axxx instanceof class_2743)) {
         return;
      }


      EntityVelocityUpdateS2CPacketAccessor axxxxx = (EntityVelocityUpdateS2CPacketAccessor)a.bed();
      if (axxxxx.getEntityId() == chi.field_1724.method_5628()) {
         a.gmm(true);
      }
   }

   static {
      long var0 = a ^ 5627140403545L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var4 = var2.doFinal("Cancel".getBytes("ISO-8859-1"));
      String var5 = a(var4).intern();
      d = var5;
   }

}
