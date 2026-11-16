package cc.astralis;


import java.lang.invoke.MethodHandles;


import net.minecraft.class_2246;
import net.minecraft.class_2338;
import net.minecraft.class_2428;
import net.minecraft.class_2680;

public class NoteBlock extends guu {


   public NoteBlock() {
      super(bfm.WORLD);
   }

   @gdz
   public void hco(fxx event) {
      class_2338 axx = chi.field_1724.method_24515();
      int[] var10000 = ClientSetup.abu();
      byte axxx = 5;
      int[] axxxx = var10000;

      for (class_2338 axxxxx : class_2338.method_10097(axx.method_10069(-axxx, -axxx, -axxx), axx.method_10069(axxx, axxx, axxx))) {
         label22: {
            class_2680 axxxxxx = chi.field_1687.method_8320(axxxxx);
            class_2680 var11 = axxxxxx;
            if (axxxxxx.method_26204() != class_2246.field_10179) {
               break label22;
            }

            var11 = axxxxxx;

            int axxxxxxx = (Integer)var11.method_11654(class_2428.field_11324);
            String var12 = axxxxx.method_23854();
            bpa.bez("Note block at " + var12 + " has note value: " + axxxxxxx);
         }

      }
   }

}
