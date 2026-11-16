package cc.astralis;


import java.lang.invoke.MethodHandles;


import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.UUID;
import java.util.regex.Pattern;


import net.minecraft.class_1657;
import net.minecraft.class_638;

public class SuspiciousName extends guu {
   public final gbp bwv;
   public final gbp gfh;
   public final gbp esz;
   private final List<String> gfp;
   private final Pattern gro;
   private final Set<String> cke;
   private final HashMap<String, fwu> dmq;
   private final Map<UUID, alz> ezd;
   private static final long a = 129397321569703L;


   private static final long p;

   public SuspiciousName() {
      long a = SuspiciousName.a ^ 63128029353857L;
      super(bfm.CLIENT);
      a.bwv = new gbp("Send Chat message", false);
      a.gfh = new gbp("Send Notification", false);
      a.esz = new gbp("Alert if Suspicious Name", true);
      int[] var10000 = ClientSetup.abu();
      String[] var10002 = new String[4];
      var10002[0] = "Mikan_";
      var10002[1] = "tzi_";
      var10002[2] = "EKKOREE_";
      var10002[3] = "zzxgp_";
      a.gfp = Arrays.asList(var10002);
      a.gro = Pattern.compile("^([a-zA-Z]+_[a-zA-Z0-9]{5}_\\d{2}_\\d{2}$)|^[a-zA-Z0-9]{3}_[a-zA-Z0-9]{4}_[a-zA-Z0-9]{3}$|(^[a-zA-Z]{7}_[a-zA-Z]{7}\\d{2}$)");
      a.cke = new HashSet<>();
      int[] ax = var10000;
      a.dmq = new HashMap<>();
      a.ezd = new HashMap<>();
      a.bfi(new ffn[]{a.gfh, a.bwv, a.esz});

      for (fwu axx : List.of(new AutoBlockMode(), new csy(), new ScaffoldMode(), new PredictionMode())) {
         a.dmq.put(axx.bmv(), axx);
      }
   }

   @Override
   public void auj() {
      a.cke.clear();
      a.ezd.clear();
      super.auj();
   }

   @gdz
   public void cjn(eih event) {
      long ax = SuspiciousName.a ^ 8715781592457L;
      int[] axx = ClientSetup.abu();
      class_638 var10000 = chi.field_1687;
      if (chi.field_1687 == null) {
         return;
      }

      var10000 = chi.field_1687;

      for (class_1657 axxx : var10000.method_18456()) {
         class_1657 var14 = axxx;
         if (axxx == chi.field_1724) {
            continue;
         }

         var14 = axxx;

         if (var14.method_29504()) {
            continue;
         }

         var14 = axxx;

         String axxxx = var14.method_5477().getString();
         UUID axxxxx = axxx.method_5667();
         var10000 = a.esz.dnp();
         label123:
         label121:
         if (var10000) {
            var16 = a.gfp.stream().anyMatch(axxxxxx -> a.toLowerCase().startsWith(axxxxxx.toLowerCase()));
            label118:
            if (!var16) {
               var16 = a.gro.matcher(axxxx).matches();

               if (!var16) {
                  var16 = false;
                  break label118;
               }
            }

            var16 = true;

            boolean axxxxxx = var16;
            boolean var17 = axxxxxx;
            if (!axxxxxx) {
               break label121;
            }

            var10000 = a.cke;

            var17 = a.cke.contains(axxxx);

            if (!var17) {
               String axxxxxxx = "Suspicious player name detected: " + axxxx;
               boolean var18 = a.gfh.dnp();
               if (var18) {
                  fnb.hcp().ael(axxxxxxx, gge.WARNING).bvw((int)p).evs();
               }

               var18 = a.bwv.dnp();

               if (var18) {
                  bpa.dhu(axxxxxxx);
               }

               a.cke.add(axxxx);
            }
         }

         var10000 = a.ezd.computeIfAbsent(axxxxx, axxxxxxxx -> new alz());

         alz axxxxxxxx = (alz)var10000;
         axxxxxxxx.efg(axxx);
         axxxxxxxx.auw(axxx);
         axxxxxxxx.doa(axxx);
         Iterator var13 = a.dmq.values().iterator();

         while (true) {
            if (var13.hasNext()) {
               fwu axxxxxxxxx = (fwu)var13.next();
               axxxxxxxxx.acc(axxxxxxxx);
               axxxxxxxxx.ayy(a);

               continue;
            }

            break;
         }
      }
   }

   static {
      p = -344289929976609816L;
   }

}
