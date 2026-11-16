package cc.astralis;

import java.util.Iterator;
import java.util.concurrent.ConcurrentLinkedQueue;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_2596;
import net.minecraft.class_2743;
import net.minecraft.class_6373;
import net.minecraft.class_746;

public class WatchdogFull extends hcr {
   private final ConcurrentLinkedQueue<class_2596<?>> dsb;
   private boolean did;
   private static final long a = 112124828419992L;
   private static final String d;

   public WatchdogFull(guu parentClass) {
      long ax = WatchdogFull.a ^ 98939073323687L;
      super(a, d);
      a.dsb = new ConcurrentLinkedQueue<>();
   }

   @Override
   public void dil() {
      long a = WatchdogFull.a ^ 111361066107658L;
      int[] var10000 = ClientSetup.abu();
      super.dil();
      int[] ax = var10000;

      for (class_2596<?> axx : a.dsb) {
         gix.fcd(axx);
         a.dsb.remove(axx);
      }
   }

   @gdz
   public void bnv(fnt event) {
      long ax = WatchdogFull.a ^ 63967891636997L;
      int[] axx = ClientSetup.abu();
      if (a.cud() != gpy.POST) {
         label123: {
            class_746 var10000 = chi.field_1724;
            if (chi.field_1724 == null) {
               break label123;
            }

            var10000 = chi.field_1724;

            int var14 = var10000.field_6012;
            if (var10000.field_6012 <= 1) {
               break label123;
            }

            var14 = chi.field_1724.method_31549().field_7478;

            if (var14 != 0) {
               break label123;
            }

            var14 = ((dtd)ClientSetup.gqy().aws().diy(dtd.class)).dsv();

            if (var14 != 0) {
               break label123;
            }

            var14 = ((dtd)ClientSetup.gqy().aws().diy(dtd.class)).dsv();

            if (var14 != 0) {
               return;
            }

            var14 = chi.field_1724.method_24828();

            label116: {
               if (var14 == 0) {
                  return;
               }

               var15 = a;

               var14 = a.did;

               if (var14 == 0) {
                  return;
               }

               var15 = a;
            }

            var15.did = false;
            double axxx = chi.field_1724.method_18798().field_1352;
            double axxxx = chi.field_1724.method_18798().field_1351;
            double axxxxx = chi.field_1724.method_18798().field_1350;

            for (class_2596<?> axxxxxx : a.dsb) {
               gix.fcd(axxxxxx);
               a.dsb.remove(axxxxxx);

            }

            chi.field_1724.method_18800(axxx, axxxx, axxxxx);
            return;
         }

         for (class_2596<?> axxx : a.dsb) {
            gix.fcd(axxx);
            a.dsb.remove(axxx);
         }
      }
   }

   @gdz
   public void djj(amo event) {
      long ax = WatchdogFull.a ^ 54208483533928L;
      int[] axx = ClientSetup.abu();
      if (a.cud() == gpy.RECEIVE) {
         label118: {
            class_746 var10000 = chi.field_1724;
            if (chi.field_1724 == null) {
               break label118;
            }

            var10000 = chi.field_1724;

            int var9 = var10000.field_6012;
            if (var10000.field_6012 <= 1) {
               break label118;
            }

            var9 = chi.field_1724.method_31549().field_7478;

            if (var9 != 0) {
               break label118;
            }

            var9 = ((dtd)ClientSetup.gqy().aws().diy(dtd.class)).dsv();

            if (var9 != 0) {
               break label118;
            }

            var9 = ((dtd)ClientSetup.gqy().aws().diy(dtd.class)).dsv();

            if (var9 != 0) {
               return;
            }

            class_2596 axxx = a.bed();
            boolean var10 = axxx instanceof class_2743;
            if (var10) {
               class_2743 axxxx = (class_2743)axxx;
               int var11 = axxxx.method_11818();
               if (var11 != chi.field_1724.method_5628()) {
                  return;
               }

               a.did = true;
               a.dsb.add(a.bed());

               a.gmm(true);
            }

            var10 = a.bed() instanceof class_6373;

            if (!var10) {
               return;
            }

            var10 = a.did;

            if (!var10) {
               return;
            }

            a.dsb.add(a.bed());

            a.gmm(true);
            return;
         }

         for (class_2596<?> axxxx : a.dsb) {
            gix.fcd(axxxx);
            a.dsb.remove(axxxx);
         }
      }
   }

   @gdz
   public void gxh(dgk event) {
      long ax = WatchdogFull.a ^ 84720048106883L;
      int[] var10000 = ClientSetup.abu();
      Iterator var5 = a.dsb.iterator();
      int[] axx = var10000;

      while (var5.hasNext()) {
         class_2596<?> axxx = (class_2596<?>)var5.next();
         gix.fcd(axxx);
         a.dsb.remove(axxx);
      }
   }

   static {
      long var0 = a ^ 50735639076749L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var4 = var2.doFinal("Watchdog Full".getBytes("ISO-8859-1"));
      String var5 = a(var4).intern();
      d = var5;
   }

}
