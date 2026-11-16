package cc.astralis;

import imgui.ImGui;
import java.io.File;


import java.lang.invoke.MethodHandles;


import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.ArrayList;

import java.util.List;

import java.util.Objects;
import java.util.Stack;


public class FileExplorer {
   private String gcd;
   private final String gzv;
   private String cap;
   private boolean guz = false;
   private String awl = null;
   private final List<eix> cmi = new ArrayList<>();
   private final Stack<String> equ = new Stack<>();
   private final Stack<String> cod = new Stack<>();
   private boolean ase = false;
   private static final long a = 60487388769246L;


   public FileExplorer(String initialPath, String fileExtensionFilter) {
      a.gcd = Paths.get(a).toAbsolutePath().toString();
      a.gzv = a;
      a.ftu();
   }

   public void dut() {
      long a = FileExplorer.a ^ 21986926510196L;
      int[] var10000 = ClientSetup.abu();
      ImGui.text("Current Path: " + a.gcd);
      int[] ax = var10000;
      ImGui.separator();
      ImGui.beginDisabled(a.equ.isEmpty());
      boolean var8 = ImGui.button("Back");
      if (var8) {
         a.ecf();
      }

      ImGui.endDisabled();
      ImGui.sameLine();
      ImGui.beginDisabled(a.cod.isEmpty());
      var8 = ImGui.button("Forward");

      if (var8) {
         a.got();
      }

      ImGui.endDisabled();
      ImGui.sameLine();
      var8 = ImGui.button("Up");

      label187:
      if (var8) {
         var8 = a.gcd.equals("/");

         if (!var8) {
            a.axr();
         }
      }

      ImGui.sameLine();
      var8 = ImGui.button("Refresh");

      if (var8) {
         a.ftu();
      }

      ImGui.separator();
      var8 = ImGui.beginChild("Directory Contents", 0.0F, 300.0F, true);

      label179:
      if (var8) {
         for (eix axx : new ArrayList<>(a.cmi)) {
            var8 = a.gzv.equalsIgnoreCase(axx.ewu);

            label171:
            if (!var8) {
               var8 = axx.fde;

               if (!axx.fde) {
                  var8 = a.gzv.isBlank();

                  if (!var8) {
                     continue;
                  }
               }
            }

            eu.ady();
            ImGui.text(String.valueOf(axx.aof));
            ImGui.sameLine();
            eu.efl();
            var8 = axx.fde;

            label161: {
               if (var8) {
                  if (!ImGui.selectable(axx.cnk + "/", false, 1)) {
                     break label161;
                  }

                  a.dfw(axx.fcf.toString());
                  break label161;
               }

               var8 = ImGui.selectable(axx.cnk, Objects.equals(a.cap, axx.fcf.toString()));

               if (var8) {
                  a.awl = axx.fcf.toString();
                  a.guz = true;
               }
            }

         }

         ImGui.endChild();
      }

      var8 = a.guz;

      if (!var8) {
         return;
      }

      ImGui.openPopup("Confirm Selection");
      ImGui.setNextWindowSize(400.0F, 140.0F);
      var8 = ImGui.beginPopupModal("Confirm Selection", 2);

      if (!var8) {
         return;
      }

      ImGui.text("Confirm selection of:");
      ImGui.textWrapped(a.awl);
      ImGui.dummy(0.0F, 5.0F);
      ImGui.separator();
      ImGui.dummy(0.0F, 5.0F);
      var8 = ImGui.button("Confirm", 120.0F, 0.0F);

      label132: {
         label196: {
            if (var8) {
               a.cap = a.awl;
               a.ase = true;
               a.guz = false;
               ImGui.closeCurrentPopup();
            }

            ImGui.sameLine();

            var8 = ImGui.button("Cancel", 120.0F, 0.0F);

            if (!var8) {
               break label132;
            }

            a.awl = null;
            a.guz = false;
         }

         ImGui.closeCurrentPopup();
      }

      ImGui.endPopup();
   }

   private void ModuleManager(String a) {
      long ax = FileExplorer.a ^ 5134428675849L;
      int[] var10000 = ClientSetup.abu();
      Path axx = Paths.get(a).normalize().toAbsolutePath();
      int[] axxx = var10000;
      String var6 = axx.toString();
      if (var6.equals(a.gcd)) {
         return;
      }

      a.equ.push(a.gcd);

      a.cod.clear();
      a.gcd = axx.toString();
      ClientSetup.ecj.error(a.gcd);
      a.ftu();
   }

   private void ecf() {
      long a = FileExplorer.a ^ 101865857157960L;
      int[] var3 = ClientSetup.abu();
      if (a.equ.isEmpty()) {
         return;
      }

      a.cod.push(a.gcd);

      a.gcd = a.equ.pop();
      a.ftu();
   }

   private void got() {
      long a = FileExplorer.a ^ 14730001056871L;
      int[] var3 = ClientSetup.abu();
      if (a.cod.isEmpty()) {
         return;
      }

      a.equ.push(a.gcd);

      a.gcd = a.cod.pop();
      a.ftu();
   }

   private void axr() {
      long a = FileExplorer.a ^ 72590540080077L;
      Path ax = Paths.get(a.gcd).getParent();
      a.dfw(ax.toString());
   }

   private synchronized void ftu() {
      long a = FileExplorer.a ^ 3377093693234L;
      ArrayList ax = new ArrayList();
      int[] var10000 = ClientSetup.abu();
      a.cap = null;
      File axx = new File(a.gcd);
      int[] axxx = var10000;
      boolean var13 = axx.exists();
      if (var13) {
         boolean var14 = axx.isDirectory();

         if (var14) {
            File[] axxxx = axx.listFiles();

            if (axxxx != null) {
               File[] var7 = axxxx;
               int var8 = axxxx.length;
               int var9 = 0;

               label76: {
                  while (var9 < var8) {
                     File axxxxx = var7[var9];
                     var15 = axxxxx.isDirectory();

                     if (var15 != 0) {
                        ax.add(new eix(axxxxx.getName(), true, axxxxx.toPath()));
                     }

                     var9++;

                  }

                  var7 = axxxx;
                  var8 = axxxx.length;
                  var15 = 0;
               }

               var9 = var15;

               while (var9 < var8) {
                  File axxxxxx = var7[var9];
                  boolean var16 = axxxxxx.isDirectory();

                  if (!var16) {
                     ax.add(new eix(axxxxxx.getName(), false, axxxxxx.toPath()));
                  }

                  var9++;

               }
            }
         }
      }

      a.cmi.clear();
      a.cmi.addAll(ax);
   }

   public void bla() {
      a.ase = false;
      a.cap = null;
   }

   public String aes() {
      return a.cap;
   }

   public boolean etz() {
      return a.guz;
   }

   public boolean abc() {
      return a.ase;
   }

}
