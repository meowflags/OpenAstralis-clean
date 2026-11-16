package cc.astralis;

import imgui.ImGui;
import imgui.type.ImString;
import java.io.File;


import java.lang.invoke.MethodHandles;


import java.util.Objects;


public class fsq {
   private ImString eqo;
   private static final long a = 117792821924803L;


   public void gdt() {
      long a;
      int[] ax;
      short var10;
      a = fsq.a ^ 77706811313535L;
      ax = ClientSetup.abu();
      var10 = 12703;
      var10 = ImGui.beginChild("ConfigFilesChild", 200.0F, 200.0F, true);
      label110:
      if (ax != null) {
         if (var10) {
            label113: {
               label114: {
                  File axx = ClientSetup.gqy().dy().ail;
                  boolean var11 = axx.exists();
                  if (ax != null) {
                     if (!var11) {
                        break label113;
                     }

                     var12 = axx;
                     if (ax == null) {
                        break label114;
                     }

                     var11 = axx.isDirectory();
                  }

                  if (!var11) {
                     break label113;
                  }

                  var12 = Objects.requireNonNull(axx.listFiles());
               }

               File[] var5 = (File[])var12;
               int var6 = var5.length;
               int var7 = 0;

               while (var7 < var6) {
                  File axxx = var5[var7];
                  label95:
                  if (ax != null) {
                     var10 = axxx.isFile();
                     if (ax == null) {
                        break label110;
                     }

                     label92:
                     if (var10) {
                        String var13 = axxx.toString();
                        String var19 = ".astralis";
                        if (ax != null) {
                           if (!var13.endsWith(".astralis")) {
                              break label92;
                           }

                           var13 = axxx.getName();
                           var19 = ".astralis";
                        }

                        String axxxx = var13.replace(var19, "");
                        boolean var14 = ImGui.button(axxxx + "##" + axxxx);
                        if (ax != null) {
                           if (var14) {
                              ClientSetup.gqy().dy().esg(axxxx);
                           }

                           ImGui.sameLine();
                           if (ax == null) {
                              break label95;
                           }

                           var14 = ImGui.button("Delete##" + axxxx);
                        }

                        if (var14) {
                           ClientSetup.gqy().dy().bgb(axxxx);
                        }
                     }

                     var7++;
                  }

                  if (ax == null) {
                     break;
                  }
               }
            }

            ImGui.endChild();
         }

         var10 = 16136;
         ImGui.inputTextWithHint("##ConfigName", "Config Name", a.eqo, 0);
         var10 = 3560;
         ImGui.sameLine();
         var10 = ImGui.button("Save");
      }

      if (ax != null) {
         if (var10) {
            ClientSetup.gqy().dy().flb(a.eqo.get());
            ClientSetup.gqy().dy().adk();
         }

         ImGui.sameLine();
         var10 = 19276;
         var10 = ImGui.button("Load");
      }

      if (var10) {
         ClientSetup.gqy().dy().esg(a.eqo.get());
      }
   }

   public fsq(ImString configName) {
      a.eqo = a;
   }

}
