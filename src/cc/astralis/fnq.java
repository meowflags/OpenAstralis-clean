package cc.astralis;

import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public class fnq extends guu {
   public final cyx CloudConfigurations;
   private static final long a = 92157949010697L;
   private static final String g;

   public fnq() {
      long a = fnq.a ^ 48796540531651L;
      super(bfm.PLAYER);
      a.ffm = new cyx(g, new Ground(a), new Universal(a), new Vulcan2(a), new Watchdog3(a), new BlocksMC(a));
      a.beb(a.ffm);
   }

   @gdz
   public void czh(eih event) {
      a.efe(a.ffm.dnp().akm());
   }

   static {
      long var0 = a ^ 81097535258768L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var4 = var2.doFinal("Mode".getBytes("ISO-8859-1"));
      String var5 = d(var4).intern();
      g = var5;
   }

}
