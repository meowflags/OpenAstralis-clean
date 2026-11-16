package cc.astralis;

import imgui.ImGui;


import java.lang.invoke.MethodHandles;


public class dqe {
   private String her;
   private static final long a = 125281307911970L;


   public dqe() {
      long a = dqe.a ^ 73018070386802L;
      super();
      a.her = "None";
   }

   public void dcv() {
      long a = dqe.a ^ 44573939815911L;
      int[] ax = ClientSetup.abu();
      if (ImGui.beginPopup("Font Picker")) {
         for (fv axx : dvt.bru()) {

            label30: {
               if (!ImGui.button(axx.cao())) {
                  break label30;
               }

               a.her = axx.aws();

               ImGui.closeCurrentPopup();
            }

         }

         ImGui.endPopup();
      }
   }

   public String aqa() {
      return a.her;
   }

}
