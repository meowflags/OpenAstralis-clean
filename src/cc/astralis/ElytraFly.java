package cc.astralis;

import imgui.type.ImFloat;


import java.lang.invoke.MethodHandles;


import net.minecraft.class_1304;
import net.minecraft.class_1799;
import net.minecraft.class_1802;
import net.minecraft.class_3675;
import net.minecraft.class_746;

public class ElytraFly extends guu {
   private final bes bco;
   private final bes egq;
   private final gbp gvd;
   private static final long a = 49298318435946L;


   private static final long p;

   public ElytraFly() {
      long a = ElytraFly.a ^ 37547127334459L;
      super(bfm.MOVEMENT);
      a.bco = new bes("Speed", 1.5F, 0.1F, 5.0F, 0.1F);
      a.egq = new bes("Vertical Speed", 0.8F, 0.1F, 2.0F, 0.1F);
      a.gvd = new gbp("Only With Elytra", true);
      a.bfi(new ffn[]{a.bco, a.egq, a.gvd});
   }

   @gdz
   public void btd(fnt event) {
      long ax = ElytraFly.a ^ 47451484599422L;
      int[] var4 = ClientSetup.abu();
      if (!a.ekn()) {
         return;
      }

      chi.field_1690.field_1832.method_23481(false);
   }

   @gdz
   public void cfz(elx event) {
      long ax = ElytraFly.a ^ 60824303240505L;
      int[] axx = ClientSetup.abu();
      Object var10000 = a;
      if (!a.ekn()) {
         return;
      }

      var10000 = a.bco.dnp();

      float axxx = ((ImFloat)var10000).floatValue();
      double axxxx = Math.toRadians(chi.field_1724.method_36454());
      int var16 = chi.field_1690.field_1894.method_1434();
      var16 = var16 != 0 ? 1 : 0;

      int var10001 = chi.field_1690.field_1881.method_1434();
      var10001 = var10001 != 0 ? 1 : 0;

      int axxxxx = var16 - var10001;
      int var17 = chi.field_1690.field_1849.method_1434();
      var17 = var17 != 0 ? -1 : 0;

      var10001 = chi.field_1690.field_1913.method_1434();
      var10001 = var10001 != 0 ? -1 : 0;

      double axxxxxx;
      double axxxxxxx;
      double axxxxxxxx;
      label64: {
         int axxxxxxxxx = var17 - var10001;
         axxxxxx = (axxxxx * -Math.sin(axxxx) + axxxxxxxxx * Math.cos(axxxx)) * axxx;
         axxxxxxx = (axxxxx * Math.cos(axxxx) + axxxxxxxxx * Math.sin(axxxx)) * axxx;
         axxxxxxxx = 0.0;
         boolean var18 = chi.field_1690.field_1903.method_1434();
         if (var18) {
            axxxxxxxx = a.egq.dnp().floatValue();
            break label64;
         }

         var18 = class_3675.method_15987(chi.method_22683(), (int)p);

         if (var18) {
            axxxxxxxx -= a.egq.dnp().floatValue();
         }
      }

      a.dof(axxxxxx);
      a.ftl(axxxxxxxx);
      a.gni(axxxxxxx);
   }

   @Override
   public void auj() {
      long a = ElytraFly.a ^ 43671764068269L;
      int[] var3 = ClientSetup.abu();
      ElytraFly var10000 = a;
      label24:
      if (a.ekn()) {
         class_746 var4 = chi.field_1724;
         if (chi.field_1724.method_6128()) {
            break label24;
         }

         var4 = chi.field_1724;

         var4.method_23669();
      }

      var10000 = a;

      var10000.auj();
   }

   @Override
   public void frg() {
      long a = ElytraFly.a ^ 51818261999870L;
      int[] var3 = ClientSetup.abu();
      if (chi.field_1724 != null) {
         evd.eeo();
      }

      super.frg();
   }

   private boolean ekn() {
      long a = ElytraFly.a ^ 130055069722257L;
      int[] ax = ClientSetup.abu();
      Object var10000 = chi.field_1724;
      if (chi.field_1724 == null) {
         return false;
      }

      var10000 = a.gvd.dnp();

      boolean var5 = (Boolean)var10000;
      if (var5) {
         class_1799 axx = chi.field_1724.method_6118(class_1304.field_6174);
         var10000 = axx;

         var10000 = axx;

         if (var10000.method_7909() != class_1802.field_8833) {
            return false;
         }
      }

      var5 = chi.field_1724.method_6128();

      return var5;
   }

   static {
      p = -192556251601698476L;
   }

}
