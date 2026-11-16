package cc.astralis;


import java.lang.invoke.MethodHandles;


import net.minecraft.class_1297;
import net.minecraft.class_1309;
import net.minecraft.class_243;
import net.minecraft.class_2848;
import net.minecraft.class_746;
import net.minecraft.class_2848.class_2849;

public class Velocity extends guu {
   private final adu cnd;
   private final bes cyl;
   private final bes evs;
   private boolean hdk;
   private static final long a = 68628767459009L;


   public Velocity() {
      long a = Velocity.a ^ 90487867948822L;
      super(bfm.COMBAT);
      String[] var8 = new String[3];
      var8[0] = "W-Tap";
      var8[1] = "S-Tap";
      var8[2] = "Packet";
      a.cnd = new adu("Mode", "W-Tap", var8);
      a.cyl = (bes)new bes("Packets", 2.0F, 2.0F, 10.0F, 1.0F).bih(() -> {
         long ax = Velocity.a ^ 89174231249996L;
         return a.cnd.emb("Packet");
      });
      a.evs = new bes("Max Hurt Time", 1.0F, 1.0F, 10.0F, 1.0F);
      a.hdk = false;
      a.bfi(new ffn[]{a.cnd, a.cyl, a.evs});
   }

   @gdz
   public void dqa(fxx event) {
      a.hdk = false;
   }

   @gdz
   public void fav(eov event) {
      long ax = Velocity.a ^ 29104552126045L;
      int[] var10000 = ClientSetup.abu();
      class_1297 axx = a.hfw();
      int[] axxx = var10000;
      class_1297 var26 = axx;
      if (!(axx instanceof class_1309)) {
         return;
      }

      var26 = axx;

      class_1309 axxxx = (class_1309)var26;
      int var27 = axxxx.method_5805();
      if (var27 == 0) {
         return;
      }

      var27 = axxxx.field_6235;

      if (var27 < a.evs.dnp().intValue()) {
         class_746 axxxxx = chi.field_1724;
         var10000 = (int[])axxxxx;
         if (axxxxx == null) {
            return;
         }

         var10000 = (int[])a.cnd.dnp();

         String var7 = (String)var10000;
         byte var8 = -1;
         var29 = var7.hashCode();
         label223:
         switch (var29) {
            case -1911998296:
               var29 = var7.equals("Packet");

               if (var29 == 0) {
                  break;
               }

               var8 = 0;
               break;
            case 81770765:
               var29 = var7.equals("W-Tap");

               if (var29 == 0) {
                  break;
               }

               var8 = 1;
               break;
            case 78076681:
               var29 = var7.equals("S-Tap");

               if (var29 != 0) {
                  var8 = 2;
               }
         }

         var29 = var8;

         label244: {
            switch (var29) {
               case 0:
                  var29 = axxxxx.method_5624();
                  break;
               case 1:
               case 2:
                  break label244;
               default:
                  return;
            }

            if (var29 != 0) {
               gix.dsd(new class_2848(axxxxx, class_2849.field_12985));
            }

            var29 = 0;

            int axxxxxx = var29;

            label195: {
               while (axxxxxx < a.cyl.dnp().intValue() - 2) {
                  var30 = axxxxxx % 2;

                  class_2849 axxxxxxx = var30 == 0 ? class_2849.field_12981 : class_2849.field_12985;
                  gix.dsd(new class_2848(axxxxx, axxxxxxx));
                  axxxxxx++;
               }

               var30 = axxxxx.method_5624();
            }

            if (var30 != 0) {
               return;
            }

            gix.dsd(new class_2848(axxxxx, class_2849.field_12981));
            return;
         }

         label180: {
            label179: {
               label246: {
                  double var40;
                  int var31 = (var40 = axxxxx.field_6014 - 0.0) == 0.0 ? 0 : (var40 < 0.0 ? -1 : 1);
                  if (var31) {
                     break label179;
                  }

                  var32 = axxxxx;

                  double var41;
                  var31 = (var41 = axxxxx.field_5969 - 0.0) == 0.0 ? 0 : (var41 < 0.0 ? -1 : 1);

                  if (var31) {
                     break label179;
                  }

                  var32 = axxxxx;
               }

               var33 = var32.method_73189();
               break label180;
            }

            var33 = new class_243(axxxxx.field_6014, axxxxx.field_6036, axxxxx.field_5969);
         }

         class_243 axxxxxx;
         class_243 axxxxxxx;
         label166: {
            label165: {
               label248: {
                  axxxxxx = var33;
                  axxxxxxx = axxxxx.method_73189();
                  double var42;
                  int var34 = (var42 = axxxx.field_6014 - 0.0) == 0.0 ? 0 : (var42 < 0.0 ? -1 : 1);
                  if (var34) {
                     break label165;
                  }

                  var35 = axxxx;

                  double var43;
                  var34 = (var43 = axxxx.field_5969 - 0.0) == 0.0 ? 0 : (var43 < 0.0 ? -1 : 1);

                  if (var34) {
                     break label165;
                  }

                  var35 = axxxx;
               }

               var36 = var35.method_73189();
               break label166;
            }

            var36 = new class_243(axxxx.field_6014, axxxx.field_6036, axxxx.field_5969);
         }

         class_243 axxxxxxxx = var36;
         class_243 axxxxxxxxx = axxxx.method_73189();
         double axxxxxxxxxx = axxxxxxxxx.method_1020(axxxxxx).method_37267();
         double axxxxxxxxxxx = axxxxxxxxx.method_1020(axxxxxxx).method_37267();
         double axxxxxxxxxxxx = axxxxxxx.method_1020(axxxxxxxx).method_37267();
         double axxxxxxxxxxxxx = axxxxxxx.method_1020(axxxxxxxxx).method_37267();
         double var44;
         int var37 = (var44 = axxxxxxxxxx - axxxxxxxxxxx) == 0.0 ? 0 : (var44 < 0.0 ? -1 : 1);
         var37 = var37 > 0 ? 1 : 0;

         boolean axxxxxxxxxxxxxx = (boolean)var37;
         double var45;
         int var38 = (var45 = axxxxxxxxxxxx - axxxxxxxxxxxxx) == 0.0 ? 0 : (var45 < 0.0 ? -1 : 1);
         var38 = var38 > 0 ? 1 : 0;

         boolean axxxxxxxxxxxxxxx = (boolean)var38;
         int var39 = axxxxxxxxxxxxxx;
         if (axxxxxxxxxxxxxx == 0) {
            return;
         }

         var39 = axxxxxxxxxxxxxxx;

         if (var39 != 0) {
            a.hdk = true;
         }
      }
   }

   @gdz
   public void gfv(dfa event) {
      long ax = Velocity.a ^ 86134256942529L;
      int[] axx = ClientSetup.abu();
      Object var10000 = a;
      if (!a.hdk) {
         return;
      }

      var10000 = a.cnd.dnp();

      String var5 = (String)var10000;
      byte var6 = -1;
      var7 = var5.hashCode();
      label57:
      switch (var7) {
         case 81770765:
            var7 = var5.equals("W-Tap");

            if (var7 == 0) {
               break;
            }

            var6 = 0;
            break;
         case 78076681:
            var7 = var5.equals("S-Tap");

            if (var7 != 0) {
               var6 = 1;
            }
      }

      var7 = var6;

      switch (var7) {
         case 0:
            a.avm(0.0F);
            a.brl(0.0F);
            break;
         case 1:
            a.avm(a.aop() * -1.0F);
            a.brl(a.eyl() * -1.0F);
      }
   }

}
