package cc.astralis;

import java.io.File;
import java.io.PrintStream;


import java.lang.invoke.MethodHandles;


import java.util.Iterator;


import net.minecraft.class_310;

public class ListCommand extends fso {
   private static final long a = 114465874048425L;
   private static final String[] c;
   private static final String[] d;

   public ListCommand() {
      long a = ListCommand.a ^ 38744700719775L;
      String[] var10001 = new String[2];
      var10001[0] = "config";
      var10001[1] = "c";
      super(var10001, "Manages configurations: .config <save|relod|load|delete> <name>");
   }

   @Override
   public void aov(String[] args, String message) {
      int[] var10000 = ClientSetup.abu();
      String[] axx = a.split(" ");
      int[] axxx = var10000;
      String[] var15 = axx;
      if (axx.length < 2) {
         bpa.dhu("Usage: #config <save|load|delete|reload|folder|list> <name>");
         return;
      }

      var15 = axx;

      String axxxx;
      String axxxxx = var15[1].toLowerCase();
      axxxx = axx.length > 2 ? a.substring(a.indexOf(axxxxx) + axxxxx.length()).trim() : null;
      ClientSetup.gqy().dy().adk();
      byte var10 = -1;
      var16 = axxxxx.hashCode();
      label212:
      switch (var16) {
         case -1268966290:
            var16 = axxxxx.equals("folder");

            if (var16 == 0) {
               break;
            }

            var10 = 0;
            break;
         case 3322014:
            var16 = axxxxx.equals("list");

            if (var16 == 0) {
               break;
            }

            var10 = 1;
            break;
         case 3522941:
            var16 = axxxxx.equals("save");

            if (var16 == 0) {
               break;
            }

            var10 = 2;
            break;
         case 3327206:
            var16 = axxxxx.equals("load");

            if (var16 == 0) {
               break;
            }

            var10 = 3;
            break;
         case -1335458389:
            var16 = axxxxx.equals("delete");

            if (var16 != 0) {
               var10 = 4;
            }
      }

      var16 = var10;

      label183: {
         label238: {
            label228: {
               label178: {
                  switch (var16) {
                     case 0:
                        if (SysInfo.eta() == fxm.WIN) {
                           File var50 = class_310.method_1551().field_1697;
                           String var57 = "Astralis".toLowerCase();
                           File axxxxxx = new File(var50, "/" + var57 + "/Configs");

                           try {
                              Runtime var18 = Runtime.getRuntime();
                              String var36 = axxxxxx.getAbsolutePath();
                              var18.exec("explorer.exe  /select," + var36);
                           } catch (Exception var13) {
                              PrintStream var17 = System.out;
                              String var35 = String.valueOf(var13);
                              var17.println("Error - " + var35);
                           }

                           return;
                        }

                        bpa.dhu("This command is only available for windows users.");
                        return;
                     case 1:
                        bpa.dhu("available configs: ");
                        Iterator var14 = ClientSetup.gqy().dy().ddp.keySet().iterator();

                        while (true) {
                           if (var14.hasNext()) {
                              String axxxxxx = (String)var14.next();
                              bpa.dhu(axxxxxx);

                              continue;
                           }

                           return;
                           break;
                        }
                     case 2:
                        var21 = axxxx;

                        if (axxxx == null) {
                           break label178;
                        }

                        String var22 = axxxx;
                        if (axxxx.isEmpty()) {
                           break label178;
                        }

                        ClientSetup.gqy().dy().flb(axxxx);
                        var22 = "Saved config: " + axxxx;

                        bpa.dhu(var22);
                        return;
                     case 3:
                        var23 = axxxx;

                        if (axxxx == null || axxxx.isEmpty()) {
                           var23 = "Usage: #config load <name>";
                           break label238;
                        }

                        ClientSetup.gqy().dy().esg(axxxx);
                        return;
                     case 4:
                        var24 = axxxx;

                        if (axxxx == null) {
                           break;
                        }

                        String var25 = axxxx;
                        if (axxxx.isEmpty()) {
                           break;
                        }

                        ClientSetup.gqy().dy().bgb(axxxx);
                        var25 = "Deleted config: " + axxxx;

                        bpa.dhu(var25);
                        return;
                     default:
                        bpa.dhu("Invalid action. Use save, load, delete, folder, or list");
                        return;
                  }

                  var24 = "Usage: #config delete <name>";
                  break label228;
               }

               var21 = "Usage: #config save <name>";
               break label183;
            }

            bpa.dhu(var24);
            return;
         }

         bpa.dhu(var23);
         return;
      }

      bpa.dhu(var21);
   }

   static {
      c = new String[]{"+ThÎñuëT4õD6à$¸ÿØÔ¸\\©Èpº\u001cG\tø", "Y½Sî¦ö", "ñÂ\u001a¿º\u0016­\u0014.fð}\"?à\u0004¨¶\u0001m\\ë¥\u0019K·î", "³\u0007ÚÕ8d´", "×ý£½»ÊñÐ", ">1\u000eåøädòh½\u0013Øè", "ä(Àjú\u0014þÊ>g¼:³¾3ê]\u00195#þ", "z;$©þG©=\nz\u0008WîR
åÍúëHj×óê¿4ÈE¶°\u0015\"Fj\nzä?UDþVò\u0003;pkTº\u0003õö°", "BRñGÄóýä", "ã\u000b[\u00009)\u0014Ü\u000cuócðÁðÂ)­QG\u0005\u000b\u0012@Ð.,\u0015", "\t,_÷Üì\"¥`)PO\rUÚË2L÷T8é [Y=ÇÏzdÌ\u0006¡~¨SK'¡Ü0\u0008¨¥\u001bà´õÒã\u000b", "ºDdãßÌÜÁ£­B\u001fêüáßaËp", "ùÒáÕ6\u0007¸\u00178d5¤", "Û)\u0015\u0011üÅÐ­##Ìí*LÔÒ\u001f\u001f\u0017Õ\u0019¡-W\u000b| º¶S¶a¬¹c!H3®U_Ç)¤n§lÂ¾jÿ¶\u0000\u0012y\u0017", ";ñ~j¶zîgèýP½\u000fù*d\u0015Ti/où©ÈÌ\u0000ÿî.ä:$àè°' [(\u001b<ÑD£ûp¶±\u000eR\"^Ñ\u001e\u001f=", "²&ýÙ\u0012ïSùPÂ\u0010épâR~:ÓÜ]", "Z$\u0013\u0018kØ¼ÿ±W¦\"", "ZÖF7\u0008¨.", "n2¢@ÌáÉ\u0018uÅY(p\u0016", "\u0000ÙËtòô?"};
   }

}
