package cc.astralis;

import astralis.mixin.accessor.EntityVelocityUpdateS2CPacketAccessor;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_2596;
import net.minecraft.class_2743;
import net.minecraft.class_2848;
import net.minecraft.class_2848.class_2849;

public class BlocksMC2 extends hcr {
   private static final long a = 49670393384133L;
   private static final String d;

   public BlocksMC2(guu parentClass) {
      long ax = BlocksMC2.a ^ 4433548127630L;
      super(a, d);
   }

   @gdz
   public void gvz(amo event) {
      long ax = BlocksMC2.a ^ 8229685481564L;
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
      if (axxxxx.getEntityId() != chi.field_1724.method_5628()) {
         return;
      }

      a.gmm(true);
      gix.dsd(new class_2848(chi.field_1724, class_2849.field_12985));

      gix.dsd(new class_2848(chi.field_1724, class_2849.field_12981));
   }

   static {
      long var0 = a ^ 60052240158593L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var4 = var2.doFinal("Blocks MC".getBytes("ISO-8859-1"));
      String var5 = a(var4).intern();
      d = var5;
   }

}
