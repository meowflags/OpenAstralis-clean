package cc.astralis;

import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_310;
import org.lwjgl.glfw.GLFW;

public class Freecam extends guu {
   private float dfu = 0.0F;
   private float gsr = 0.0F;
   private float eyw = 0.0F;
   private static final long a = 118555617952967L;
   private static final long g;

   public Freecam() {
      super(bfm.VISUAL);
   }

   @Override
   public void auj() {
      a.eyw = ((Integer)chi.field_1690.method_41808().method_41753()).intValue();
      a.dfu = a.eyw;
      a.gsr = a.eyw;
      super.auj();
   }

   @Override
   public void frg() {
      a.dfu = a.eyw;
      a.gsr = a.eyw;
      super.frg();
   }

   public float czi(float currentFov) {
      int[] axx = ClientSetup.abu();
      class_310 var10000 = chi;
      if (chi.field_1755 != null) {
         return a;
      }

      var10000 = chi;

      int var7 = GLFW.glfwGetKey(var10000.method_22683().method_4490(), (int)g);
      var7 = var7 == 1 ? 1 : 0;

      boolean axxx = (boolean)var7;
      float var9;
      int var8 = (var9 = a.eyw - 0.0F) == 0.0F ? 0 : (var9 < 0.0F ? -1 : 1);
      if (var8 == 0) {
         a.eyw = a;
         a.dfu = a;
      }

      var8 = axxx;

      if (var8 != 0) {
         a.gsr = 30.0F;
         float axxxx = 0.05F;
         a.dfu = a.dfu + (a.gsr - a.dfu) * axxxx;
         return a.dfu;
      } else {
         a.dfu = a;
         return a;
      }
   }

}
