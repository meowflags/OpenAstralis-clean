package cc.astralis;

import dev.redstones.mediaplayerinfo.IMediaSession;
import dev.redstones.mediaplayerinfo.MediaPlayerInfo;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.Executors;
import java.util.concurrent.TimeUnit;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public final class fow {
   public static IMediaSession cza;
   private static final long a = 102672385528637L;
   private static final String b;

   public static void fjs() {
      Executors.newSingleThreadScheduledExecutor().scheduleAtFixedRate(() -> {
         long a = fow.a ^ 24815551286971L;
         List ax = MediaPlayerInfo.Instance.getMediaSessions();
         int[] var10000 = ClientSetup.abu();
         IMediaSession axx = null;
         int[] axxx = var10000;
         Iterator var5 = ax.iterator();

         while (true) {
            if (var5.hasNext()) {
               IMediaSession axxxx = (IMediaSession)var5.next();
               var7 = axxxx;

               if (!axxxx.getMedia().getPlaying()) {
                  continue;
               }

               var7 = axxxx;

               axx = var7;
               continue;
            }

            var7 = axx;
            break;
         }

         cza = var7;
      }, 0L, 1L, TimeUnit.SECONDS);
   }

   private fow() {
      long a = fow.a ^ 97594188962829L;
      super();
      throw new UnsupportedOperationException(b);
   }

   static {
      long var0 = a ^ 18617040861240L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var4 = var2.doFinal("This is a utility class and cannot be instantiated".getBytes("ISO-8859-1"));
      String var5 = a(var4).intern();
      b = var5;
   }

}
