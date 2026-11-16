package cc.astralis;


import java.lang.invoke.MethodHandles;


import net.minecraft.class_2828;

public class NoFall extends guu {
   private final adu bub;
   private static final long a = 36101488060136L;


   public NoFall() {
      long a = NoFall.a ^ 68946068907723L;
      super(bfm.PLAYER);
      String[] var4 = new String[3];
      var4[0] = "Cancel";
      var4[1] = "Stop";
      var4[2] = "Stop 2";
      a.bub = new adu("Mode", "Cancel", var4);
      a.beb(a.bub);
   }

   @gdz
   public void ehh(fxx event) {
      int[] ax;
      int var7;
      int[] var10000 = ClientSetup.abu();
      String var5 = a.bub.dnp();
      ax = var10000;
      byte var6 = -1;
      var7 = var5.hashCode();
      label59:
      if (ax != null) {
         switch (var7) {
            case 2011110042:
               var7 = var5.equals("Cancel");
               if (ax == null) {
                  break label59;
               }

               if (var7 == 0) {
                  break;
               }

               var6 = 0;
               if (ax != null) {
                  break;
               }
            case 2587682:
               var7 = var5.equals("Stop");
               if (ax == null) {
                  break label59;
               }

               if (var7 == 0) {
                  break;
               }

               var6 = 1;
               if (ax != null) {
                  break;
               }
            case -1808203852:
               var7 = var5.equals("Stop 2");
               if (ax == null) {
                  break label59;
               }

               if (var7 != 0) {
                  var6 = 2;
               }
         }

         var7 = var6;
      }

      switch (var7) {
         case 0:
            a.gmm(true);
            if (ax != null) {
               break;
            }
         case 1:
         case 2:
            chi.field_1724.method_18800(0.0, 0.0, 0.0);
      }
   }

   @gdz
   public void atu(etk event) {
      long ax = NoFall.a ^ 49840035966693L;
      int[] var4 = ClientSetup.abu();
      if (!a.bub.emb("Stop")) {
         return;
      }

      a.dab = false;
      a.eeq = false;
      a.fgh = false;
      a.gvc = false;
      a.coh = false;
      a.bxg = false;

      a.aky = false;
   }

   @gdz
   public void big(eih event) {
      long ax = NoFall.a ^ 139785576645143L;
      if (a.bub.emb("Stop")) {
         a.gmm(true);
      }
   }

   @gdz
   public void gon(amo event) {
      long ax = NoFall.a ^ 89612487379753L;
      int[] var4 = ClientSetup.abu();
      if (a.cud() != gpy.RECEIVE && chi.field_1687 != null) {
         amo var5;
         label38: {
            boolean var10000 = a.bub.emb("Stop 2");
            if (!var10000) {
               return;
            }

            var5 = a;

            var10000 = a.bed() instanceof class_2828;

            if (!var10000) {
               return;
            }

            var5 = a;
         }

         var5.gmm(true);
      }
   }

}
