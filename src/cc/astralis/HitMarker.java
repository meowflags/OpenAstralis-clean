package cc.astralis;


import java.lang.invoke.MethodHandles;


import java.util.ArrayList;

import java.util.Iterator;


public class HitMarker extends guu {
   private final bes cff;
   private final bes dxe;
   private final ArrayList<eeh> eoa;
   private boolean hec;
   private static final long a = 38840377645629L;


   private static final long p;

   public HitMarker() {
      long a = HitMarker.a ^ 99362707610927L;
      super(bfm.VISUAL);
      a.cff = new bes("Circle Duration", 500.0F, 0.0F, 10000.0F, 1.0F);
      a.dxe = new bes("Max Radius", 3.0F, 0.0F, 10.0F, 0.1F);
      a.eoa = new ArrayList<>();
      a.hec = false;
      a.bfi(new ffn[]{a.cff, a.dxe});
   }

   @gdz
   public void hdo(eih event) {
      label26: {
         long ax = HitMarker.a ^ 95335315014646L;
         int[] axx = ClientSetup.abu();
         boolean var10000 = chi.field_1724.method_24828();
         if (!var10000) {
            break label26;
         }

         var10000 = a.hec;

         if (var10000) {
            return;
         }

         erp axxx = new erp(dtw.EASE_OUT_BACK, a.cff.dnp().longValue());
         axxx.bpt(0.0);
         axxx.gbi(a.dxe.dnp().floatValue());
         axxx.dsw();
         a.eoa.add(new eeh(chi.field_1724.method_73189(), axxx));
         a.hec = true;
         return;
      }

      a.hec = false;
   }

   @gdz
   public void esu(bsm event) {
      long ax = HitMarker.a ^ 137140300897637L;
      int[] var10000 = ClientSetup.abu();
      Iterator axx = a.eoa.iterator();
      int[] axxx = var10000;

      while (axx.hasNext()) {
         eeh axxxx;
         label47: {
            label46: {
               axxxx = (eeh)axx.next();
               boolean var10 = axxxx.csd;
               if (!axxxx.csd) {
                  axxxx.aee.dwm(axxxx.aee.hfn());
                  var11 = axxxx.aee;

                  if (!axxxx.aee.flo()) {
                     break label46;
                  }

                  axxxx.csd = true;
                  double axxxxx = axxxx.aee.hjo();
                  axxxx.aee.bpt(axxxxx);
                  axxxx.aee.gbi(0.0);
                  axxxx.aee.dsw();
                  break label46;
               }

               axxxx.aee.dwm(axxxx.aee.hfn());
               var11 = axxxx.aee;

               var10 = axxxx.aee.flo();

               if (var10) {
                  axx.remove();
                  continue;
               }
            }

            var11 = axxxx.aee;
         }

         float axxxxx = (float)var11.hjo();
         bqf.dd(a.bus(), axxxx.gid, axxxxx, (int)p);
      }
   }

   static {
      p = -4006925078070558495L;
   }

}
