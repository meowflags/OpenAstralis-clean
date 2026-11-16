package cc.astralis;

import com.google.gson.JsonElement;
import com.google.gson.JsonObject;
import com.google.gson.JsonParser;
import com.google.gson.JsonSyntaxException;
import com.google.gson.stream.JsonReader;
import java.io.EOFException;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.io.Reader;


import java.lang.invoke.MethodHandles;


import java.nio.file.Files;
import java.nio.file.StandardCopyOption;


public class flh extends ConfigManager {
   private final String eee;
   private static final long b = 58168959103719L;


   public flh(String configName) {
      a.eee = a;
   }

   @Override
   public void apo() {
      long a = b ^ 121666337963048L;
      JsonObject var10000 = gco.bbm();
      dvt.exy(var10000, new File(a.evx, a.eee + ".astralis").getAbsolutePath());
   }

   @Override
   public void fme() {
      long a = b ^ 10590000864692L;
      int[] var10000 = ClientSetup.abu();
      File ax = new File(a.evx, a.eee + ".astralis");
      int[] axx = var10000;
      if (ax.exists()) {
         try {
            try (Reader axxx = new FileReader(ax)) {
               JsonReader axxxx;
               label119: {
                  axxxx = new JsonReader(axxx);

                  try {
                     label113: {
                        axxxx.setLenient(true);
                        JsonElement axxxxx = JsonParser.parseReader(axxxx);

                        label86:
                        if (axxxxx != null) {
                           JsonElement var22 = axxxxx;
                           if (!axxxxx.isJsonObject()) {
                              break label86;
                           }

                           var22 = axxxxx;

                           JsonObject axxxxxx = var22.getAsJsonObject();
                           gco.axu(axxxxxx);
                           break label113;
                        }

                        ClientSetup.ecj.error("Config {} is not a JSON object. Skipping.", ax.getName());
                        break label119;
                     }
                  } catch (Throwable var15) {
                     try {
                        axxxx.close();
                     } catch (Throwable var14) {
                        var15.addSuppressed(var14);
                     }

                     throw var15;
                  }

                  axxxx.close();
                  return;
               }

               axxxx.close();
            }

            return;
         } catch (EOFException | JsonSyntaxException var17) {
            Exception axxx = var17;

            try {
               String var29 = ax.getAbsolutePath();
               File axxxx = new File(var29 + ".corrupt");
               Files.copy(ax.toPath(), axxxx.toPath(), StandardCopyOption.REPLACE_EXISTING);
               var29 = a.eee;
               String var33 = axxx.getMessage();
               String axxxxxx = axxxx.getName();
               String axxxxxxx = var33;
               String var11 = var29;
               bpa.dhu("§cConfig '" + var11 + "' is corrupted (" + axxxxxxx + "). A backup was saved as '" + axxxxxx + "'. Loading defaults.");
            } catch (IOException var12) {
               ClientSetup.ecj.error("Failed to backup corrupt config: {}", var12.getMessage());
            }

            a.apo();
         } catch (IOException var18) {
            ClientSetup.ecj.error("Failed to load config '{}': {}", ax.getName(), var18.getMessage());
         }

         return;
      }

      ClientSetup.ecj.warn("Config file {} not found, skipping load.", ax.getAbsolutePath());
   }

}
