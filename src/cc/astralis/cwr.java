package cc.astralis;

import com.google.gson.JsonElement;
import com.google.gson.JsonObject;
import com.google.gson.JsonParser;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.io.Reader;


import java.lang.invoke.MethodHandles;


import java.util.Map;
import java.util.Map.Entry;


public class cwr extends ConfigManager {
   private final File acu;
   private final boolean ggp;
   private static final long b = 96179620453212L;


   public cwr(boolean encryption) {
      super();
      a.acu = new File(a.bf, "alts.json");
      a.ggp = a;
   }

   @Override
   public void apo() {
      JsonObject a = new JsonObject();
      AltManager.emo().forEach(ax -> {
         long ax = b ^ 65553175828308L;
         JsonObject axx = new JsonObject();
         axx.addProperty("token", ax.gpj());
         axx.addProperty("uuid", ax.hal());
         axx.addProperty("encryption", a.ggp);
         a.add(ax.gwo(), axx);
      });
      dvt.exy(a, a.acu.getAbsolutePath());
   }

   @Override
   public void fme() {
      long a = b ^ 116821919609871L;
      int[] ax = ClientSetup.abu();

      try (Reader axx = new FileReader(a.acu.getAbsolutePath())) {
         JsonElement axxx = JsonParser.parseReader(axx);

         if (axxx.isJsonObject()) {
            JsonObject axxxx = axxx.getAsJsonObject();

            for (Entry<String, JsonElement> axxxxx : axxxx.entrySet()) {
               String axxxxxx = axxxxx.getKey();
               JsonObject axxxxxxx = axxxxx.getValue().getAsJsonObject();

               String var10003 = axxxxxxx.get("token").getAsString();
               String var15 = axxxxxxx.get("uuid").getAsString();
               gfv axxxxxxxx = new gfv(axxxxxx, var10003, var15, !axxxxxxx.get("token").getAsString().isEmpty());
               AltManager.emo().add(axxxxxxxx);
            }
         }
      } catch (IOException var14) {
         var14.printStackTrace();
      }
   }

}
