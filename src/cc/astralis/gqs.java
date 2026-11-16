package cc.astralis;

import com.google.gson.JsonElement;
import com.google.gson.JsonObject;
import com.google.gson.JsonParser;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.io.Reader;


import java.lang.invoke.MethodHandles;


import java.util.Iterator;
import java.util.Map;
import java.util.Map.Entry;


public class gqs extends ConfigManager {
   private final File boa;
   private static final long b = 33044126901290L;


   public gqs() {
      long a = b ^ 139950668338483L;
      super();
      a.boa = new File(a.bf, "drag.json");
   }

   @Override
   public void apo() {
      long a = b ^ 75099877944037L;
      JsonObject ax = new JsonObject();
      int[] var10000 = ClientSetup.abu();
      Iterator var5 = fjk.bfv.iterator();
      int[] axx = var10000;

      while (true) {
         if (var5.hasNext()) {
            env axxx = (env)var5.next();
            JsonObject axxxx = new JsonObject();
            axxxx.addProperty("xPos", axxx.grp());
            axxxx.addProperty("yPos", axxx.azb());
            ax.add(axxx.cdc(), axxxx);

            continue;
         }

         dvt.exy(ax, a.boa.getAbsolutePath());
         break;
      }
   }

   @Override
   public void fme() {
      long a = b ^ 38807284714361L;
      int[] ax = ClientSetup.abu();

      try (Reader axx = new FileReader(a.boa.getAbsolutePath())) {
         JsonElement axxx = JsonParser.parseReader(axx);

         if (axxx.isJsonObject()) {
            JsonObject axxxx = axxx.getAsJsonObject();
            Iterator var7 = axxxx.entrySet().iterator();

            label71:
            do {
               boolean var10000 = var7.hasNext();

               while (var10000) {
                  Entry<String, JsonElement> axxxxx = (Entry<String, JsonElement>)var7.next();
                  String axxxxxx = axxxxx.getKey();
                  JsonObject axxxxxxx = axxxxx.getValue().getAsJsonObject();

                  Iterator var11 = fjk.bfv.iterator();

                  while (true) {
                     if (!var11.hasNext()) {
                        continue label71;
                     }

                     label63: {
                        env axxxxxxxx = (env)var11.next();
                        env var16 = axxxxxxxx;
                        var10000 = axxxxxxxx.cdc().equalsIgnoreCase(axxxxxx);

                        if (!var10000) {
                           break label63;
                        }

                        axxxxxxxx.biu(axxxxxxx.get("xPos").getAsFloat());
                        var16 = axxxxxxxx;

                        var16.dfy(axxxxxxx.get("yPos").getAsFloat());
                     }

                  }
               }
               break;
            } while (ax != null);
         }
      } catch (IOException var15) {
         var15.printStackTrace();
      }
   }

}
