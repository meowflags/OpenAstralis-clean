package cc.astralis;

import imgui.type.ImFloat;


import java.lang.invoke.MethodHandles;


public class SpeedVanilla extends hcr {
   private final bes eu;
   private static final long a = 98363493837992L;


   public SpeedVanilla(guu parentClass) {
      long ax = SpeedVanilla.a ^ 55175287340525L;
      super(a, "Vanilla");
      a.eu = new bes("Speed", 1.0F, 0.0F, 10.0F, 0.1F);
      a.ebu(a.eu);
   }

   @gdz
   public void fqy(eih event) {
      long ax = SpeedVanilla.a ^ 106982251449698L;
      int[] var4 = ClientSetup.abu();
      Object var10000 = chi.field_1724;
      if (chi.field_1724.method_24828()) {
         chi.field_1724.method_6043();
      }

      var10000 = a.eu.dnp();

      evd.dek(((ImFloat)var10000).floatValue());
   }

}
