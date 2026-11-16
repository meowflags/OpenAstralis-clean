package cc.astralis;

import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import org.lwjgl.glfw.GLFW;

public class gzg {
   private static final long a = 64110481969401L;
   private static final String b;

   public static String azl() {
      long a = gzg.a ^ 119964272332747L;
      int[] var10000 = ClientSetup.abu();
      long ax = GLFW.glfwGetCurrentContext();
      int[] axx = var10000;
      long var5 = ax;
      if (ax == 0L) {
         System.err.println(b);
         return null;
      }

      var5 = ax;

      return GLFW.glfwGetClipboardString(var5);
   }

   static {
      long var0 = a ^ 19503967965429L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var4 = var2.doFinal("GLFW context is not available.".getBytes("ISO-8859-1"));
      String var5 = a(var4).intern();
      b = var5;
   }

}
