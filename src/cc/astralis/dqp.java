package cc.astralis;

import java.util.ArrayList;
import java.util.Comparator;
import java.util.Iterator;
import java.util.List;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public class dqp extends bmd {
   private final bfm dwz;
   private final List<cbc> afg;

   private static final int fwb;e float bbj;
   private float dxn;
   private static final long a = 98276579202062L;

   public dqp(bfm category, float width, float height) {
      long ax = dqp.a ^ 108798968583392L;
      super();
      int[] var10000 = ClientSetup.abu();
      a.afg = new ArrayList<>();
      a.dwz = a;
      a.fqg(a);
      a.fuo(a);
      int[] axx = var10000;

      for (guu axxx : ClientSetup.gqy().aws().gtd(a).stream().sorted(Comparator.comparing(guu::clp)).toList()) {
         cbc axxxx = new cbc(axxx, a - 14.0F, 31.0F);
         a.afg.add(axxxx);
      }
   }

   @Override
   public void ckn(float x, float y, float mouseX, float mouseY) {
      long ax = dqp.a ^ 72743052357869L;
      a.fji(a);
      a.axc(a);
      a.bws = a;
      a.bbj = a;
      int[] var10000 = ClientSetup.abu();
      float axx = 7.0F;
      int[] axxx = var10000;
      Iterator axxxx = a.afg.iterator();

      while (true) {
         if (axxxx.hasNext()) {
            cbc axxxxx = (cbc)axxxx.next();
            var14 = axx + (axxxxx.ajg() + 7.0F);

            axx = var14;
            continue;
         }

         var14 = a.ajg();
         break;
      }

      float axxxxxx = var14;
      a.dxn = Math.clamp(a.dxn, 0.0F, Math.max(axx, axxxxxx) - axxxxxx);
      float axxxxxxx = a + 7.0F;
      float[] axxxxxxxx = new float[]{a + 7.0F - a.dxn};
      dmp.abh(a, a, a.arq(), a.ajg(), () -> {
         long ax = dqp.a ^ 25110237316502L;
         int[] var10000x = ClientSetup.abu();
         Iterator var8x = a.afg.iterator();
         int[] axx = var10000x;

         while (var8x.hasNext()) {
            cbc axxx = (cbc)var8x.next();
            axxx.ckn(a, a[0], a, a);
            a[0] += axxx.ajg() + 7.0F;
         }
      });
   }

   @Override
   public void gdj(double mouseX, double mouseY, int button) {
      long ax = dqp.a ^ 75309586464097L;
      int[] axx = ClientSetup.abu();
      if (fuv.bfm(a, a, a.aqy(), a.gpn(), a.arq(), a.ajg())) {
         for (cbc axxx : a.afg) {
            axxx.gdj(a, a, a);
         }
      }
   }

   @Override
   public void euk(double mouseX, double mouseY, int button) {
      long ax = dqp.a ^ 17767223674306L;
      int[] var10000 = ClientSetup.abu();
      Iterator var9 = a.afg.iterator();
      int[] axx = var10000;

      while (var9.hasNext()) {
         cbc axxx = (cbc)var9.next();
         axxx.euk(a, a, a);
      }
   }

   @Override
   public void bof(double amount) {
      long ax = dqp.a ^ 59197041077561L;
      int[] var5 = ClientSetup.abu();
      dqp var10000 = a;
      if (!fuv.bfm(a.bws, a.bbj, a.aqy(), a.gpn(), a.arq(), a.ajg())) {
         return;
      }

      var10000 = a;

      var10000.dxn += (float)(a * 20.0);
   }

}
