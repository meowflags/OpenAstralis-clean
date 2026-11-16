package cc.astralis;


import java.lang.invoke.MethodHandles;


public class SpeedCubecraft extends hcr {
   private final bes GuiMoveModernWatchdog;
   private static final long a = 101384501403359L;


   public SpeedCubecraft(guu parentClass) {
      long ax = SpeedCubecraft.a ^ 103396683638443L;
      super(a, "Cubecraft");
      a.bu = new bes("Speed", 1.0F, 0.0F, 10.0F, 0.05F);
      a.ebu(a.bu);
   }

   @gdz
   public void fsz(eih event) {
      long ax = SpeedCubecraft.a ^ 74879543833969L;
      int[] var4 = ClientSetup.abu();
      int var10000 = evd.dbj();
      if (var10000 == 0) {
         return;
      }

      var10000 = chi.field_1724.method_24828();

      if (var10000 != 0) {
         chi.field_1724.method_6043();
      }

      var10000 = chi.field_1724.field_5976;

      label70:
      if (var10000 == 0) {
         var10000 = hjr;

         switch (hjr) {
            case 1:
               bav.fym(bav.hai() - 0.5);
               break;
            case 5:
               bav.fym(bav.hai() - 0.4);
         }
      }

      var10000 = chi.field_1724.field_6235;

      if (var10000 != 0) {
         evd.dek(a.bu.dnp().floatValue());
         return;
      }

      var10000 = chi.field_1724.method_24828();

      evd.dek(var10000 != 0 ? 0.55 : evd.fzm());
   }

}
