package cc.astralis;

import io.github.humbleui.skija.BackendRenderTarget;
import io.github.humbleui.skija.impl.Stats;


import java.lang.invoke.MethodHandles;


import org.jetbrains.annotations.NotNull;

public final class gbl extends BackendRenderTarget {
   private final duz hhu;
   private final long AirWalk;
   private static final long a = 42381225352908L;


   private gbl(@NotNull duz a, long a) {
      super(a);
      a.hhu = a;
      a.adm = a;
   }

   public static gbl gri(@NotNull duz specs) {
      Stats.onNativeCall();
      long ax = BackendRenderTarget._nMakeGL(a.gqz(), a.bqx(), a.cjo(), a.cjq(), a.bmo(), a.frs().bui());
      return new gbl(a, ax);
   }

   public int brx() {
      return a.hhu.gqz();
   }

   public int eng() {
      return a.hhu.bqx();
   }

   public String toString() {
      long a = gbl.a ^ 77789937911721L;
      int var10000 = a.hhu.gqz();
      int var10001 = a.hhu.bqx();
      int var10002 = a.hhu.cjo();
      int var10003 = a.hhu.cjq();
      int var10004 = a.hhu.bmo();
      String var10005 = String.valueOf(a.hhu.frs());
      String ax = Long.toHexString(a.adm);
      String axx = var10005;
      int axxx = var10004;
      int axxxx = var10003;
      int axxxxx = var10002;
      int axxxxxx = var10001;
      int var9 = var10000;
      return "GLBackendTarget{size="
         + var9
         + "x"
         + axxxxxx
         + ", samples="
         + axxxxx
         + ", stencilBits="
         + axxxx
         + ", fbId="
         + axxx
         + ", fbFormat="
         + axx
         + ", ptr=0x"
         + ax
         + "}";
   }

}
