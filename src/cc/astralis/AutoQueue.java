package cc.astralis;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_2596;
import net.minecraft.class_7439;

public class AutoQueue extends guu {
   private final gbp ghu;
   private final gbp gov;
   private final adu all;
   private static final long a = 119870586904640L;
   private static final String[] g;
   private static final String[] h;
   private static final Map i = new HashMap(13);
   private static final long p;

   public AutoQueue() {
      long a = AutoQueue.a ^ 29811826906499L;
      super(bfm.PLAYER);
      a.ghu = new gbp("Auto Set Language", true);
      a.gov = new gbp("Auto Play", true);
      String[] var8 = new String[(int)p];
      var8[0] = "Skywars Normal";
      var8[1] = "Skywars Insane";
      var8[2] = "Bedwars Solo";
      var8[3] = "Bedwars Duo";
      var8[4] = "Bedwars Trio";
      var8[5] = "Bedwars Squad";
      a.all = new adu("Auto Play Mode", "Skywars Normal", var8);
      a.bfi(new ffn[]{a.ghu, a.gov, a.all.bih(a.gov::dnp)});
   }

   @gdz
   public void bdq(fmj event) {
      long ax = AutoQueue.a ^ 44942172487315L;
      int[] var4 = dar.abu();
      if (var4 != null) {
         if (!a.ghu.dnp()) {
            return;
         }

         bpa.dhu("set language");
         chi.field_1724.field_3944.method_45729("/language english");
      }
   }

   @gdz
   public void bha(amo packetEvent) {
      long ax = AutoQueue.a ^ 132500186647771L;
      int[] axx = dar.abu();
      if (a.gov.dnp()) {
         class_2596 axxx = a.bed();
         class_2596 var10000 = axxx;
         if (axx != null) {
            if (!(axxx instanceof class_7439)) {
               return;
            }

            var10000 = axxx;
         }

         class_7439 axxxx = (class_7439)var10000;
         var10 = axxxx.comp_763().getString();
         label131:
         if (axx != null) {
            if (!var10.equalsIgnoreCase("You have been eliminated!")) {
               var10 = axxxx.comp_763().getString();
               if (axx == null) {
                  break label131;
               }

               if (!var10.equalsIgnoreCase("You died! Want to play again? Click here! ")) {
                  return;
               }
            }

            var10 = a.all.dnp();
         }

         String var7 = var10;
         byte var8 = -1;
         var11 = var7.hashCode();
         label97:
         if (axx != null) {
            switch (var11) {
               case 765058203:
                  var11 = var7.equals("Skywars Normal");
                  if (axx == null) {
                     break label97;
                  }

                  if (var11 == 0) {
                     break;
                  }

                  var8 = 0;
                  if (axx != null) {
                     break;
                  }
               case 621007582:
                  var11 = var7.equals("Skywars Insane");
                  if (axx == null) {
                     break label97;
                  }

                  if (var11 == 0) {
                     break;
                  }

                  var8 = 1;
                  if (axx != null) {
                     break;
                  }
               case -1014563277:
                  var11 = var7.equals("Bedwars Solo");
                  if (axx == null) {
                     break label97;
                  }

                  if (var11 == 0) {
                     break;
                  }

                  var8 = 2;
                  if (axx != null) {
                     break;
                  }
               case -864026070:
                  var11 = var7.equals("Bedwars Duo");
                  if (axx == null) {
                     break label97;
                  }

                  if (var11 == 0) {
                     break;
                  }

                  var8 = 3;
                  if (axx != null) {
                     break;
                  }
               case -1014530696:
                  var11 = var7.equals("Bedwars Trio");
                  if (axx == null) {
                     break label97;
                  }

                  if (var11 == 0) {
                     break;
                  }

                  var8 = 4;
                  if (axx != null) {
                     break;
                  }
               case -1386622618:
                  var11 = var7.equals("Bedwars Squad");
                  if (axx == null) {
                     break label97;
                  }

                  if (var11 != 0) {
                     var8 = 5;
                  }
            }

            var11 = var8;
         }
         String axxxxx = switch (var11) {
            case 0 -> {
               yield "/play solo_normal";
            }
            case 1 -> {
               yield "/play solo_insane";
            }
            case 2 -> {
               yield "/play bedwars_eight_one";
            }
            case 3 -> {
               yield "/play bedwars_eight_two";
            }
            case 4 -> {
               yield "/play bedwars_four_three";
            }
            case 5 -> {
               yield "/play bedwars_four_four";
            }
            default -> null;
         };
         if (axxxxx != null) {
            chi.field_1724.field_3944.method_45729(axxxxx);
         }
      }
   }

   static {
      long var5 = a ^ 15134739823257L;
      Cipher var7;
      Cipher var10000 = var7 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var5 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var8 = 1; var8 < 8; var8++) {
         var10003[var8] = (byte)(var5 << var8 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var14 = new String[25];
      int var12 = 0;
      String var11 = "\u009f¾¨ÿ;íèQ\u0004~*¤¿\u0084¿¦\u0087õ°{K£j×ãã<r\u007f\u00069å ½²Q\u0084bò\u0082zOý¤új¯j\u0085å\u0092í¦ÍP®2\u009dw\u0000\u008f$EÚç(y\u0003¿\u0093OÎÛ\u0017]bv&TýbñA>E2\u001e\u0087\u001bª÷u}\u009f\u001e\u0019êAÝ\bqV3ps÷(üd(¯\u000b*ÊÕ\u009dùÔZI©Ûøè\u009d\b±\u0089Ëf\u0092è\u0010Ê3qâÔq\u001dã\u0004\u0013O¢vu ´£\u0085*5Vâ_óÈ|Ù1\u00943úPY¿\u009ea¦¾(ÉÒ3\u000bÀ\u009a\fX(Nï\u001fµÿ'l\u008bÌNYi/\u0005¯@Fá9\fÌ\u0000Â:!¯¢4F£gÞºWÛ\u001cö\u001fjÛP\\D\u0013\u0018DÉL\u001azÃú\u0086*.¬Uª\u0007¼|\u009f2Åi\u009eÈ¤iâÕ°\u0092\u007f\u0095\u0098ËÒ\r\u008a(äKGY¨\u001e8n+w\u008e\u0087¥Û\u0098èÍú\u0012\u0007Æìò±HTì´\t%£rSÕ§\u0098?©¦É( %\t}·N5A~\u0010z¤;-\u0002Gt\u0013\u0086sþ\u009dtM\u0095Gè®\u0010\u0017\u001b\u001by\u001f\u0093pìá\u0002ò ªx@ñp×\u001b½ò´U\u0016È\u001b\u0012dæ:ÙXÓ·@ßD¹M\u0010è\u0007ÝÝ8Nå§sì\u0000Ë\f6T*û+6ì\u001d\b\u0004~ãõ!»\u000f\u0087ÿ\u0010\u0003ð\u008bðÃÅö\u0013}ÜóWÍM\u0088\bz\u009a2\u0091s\u0001\u0010\u000e33¶8c &\u0001¯\u0089%ql\u008e\u0005ÌTT>Ø+_\u009aN\u009b\u001bþÜeuïÌð\u0004\u0006éV\u0092\u0018\u0096\u0000¦Ø(º¤UÐ\u0094wD©$\u008cRie\\|ÎT9ä8b\u000b\f\u008a5òÌ?·/P2*\u0087\u008b\u0005ßký\u009f_Á}ðâ6§z\tF\u009d\u0083nÃÖî\u0016\u000eó¨¿\u0000~Ì\u0017µ½1\u0083nÐÙP°\u0094¥ \u0006AkwÑÉ±I\tj^ìy\u001bBëEx\u009e\"\u000b=B4²\u0005](â0eN\u0018N\r;ÁH\u008d\u000f&«hV9±fZ§\u0098@±w\u000e\u0002ß«\u0018_ú Ò«\u0085 já\u0001ÿà¨mQT#FnïChaÀ §\u0091Ý´\u0011\u0014\u0014ìÍ1\u008b?Ù^`\u00182ø\u0085;HÃ¹\u0016\u0004\u0082 \u0090>\u008fN7\u0018Ò\u0010\u008f4î\u0098D\u0094ò|»\u0086ý  \u0080y®Ûýp0ß\u0092(|¢\u009f+/90¥â\u0090ë¤\u007f' ¥7WþÁ°ê_(\u0085\"l´\u0095>W\u000bF\u009c\u001c&\u009d%\u0000\u0002\u0018SQc\u009a}på2Þ±¹Æó\u0096ç\u0082Ç\u0084,\u001d\u0016±A\u0084 \u0091Ê\fè0²o¢§*ø/\u0096·\u0013qàéD'oÎØ\u0098\u000fDÁ*\u0093uü\u0003(q±j\u0082p\u0010Ñ\u0098÷¶À\u000b²µ\u0019\t\u0095YÆ¢]\të~¢|\u0015\u0002õ3\u001fÃ\u0003\u00ad\u007f0}ÁJ6\u0018eÂ(\f\u009b¾×n\u0080$Ò\u0094Ùä\u0094Ýß\u001b\u001c\u008fÏ\u0098¢\u0085";
      int var13 = "\u009f¾¨ÿ;íèQ\u0004~*¤¿\u0084¿¦\u0087õ°{K£j×ãã<r\u007f\u00069å ½²Q\u0084bò\u0082zOý¤új¯j\u0085å\u0092í¦ÍP®2\u009dw\u0000\u008f$EÚç(y\u0003¿\u0093OÎÛ\u0017]bv&TýbñA>E2\u001e\u0087\u001bª÷u}\u009f\u001e\u0019êAÝ\bqV3ps÷(üd(¯\u000b*ÊÕ\u009dùÔZI©Ûøè\u009d\b±\u0089Ëf\u0092è\u0010Ê3qâÔq\u001dã\u0004\u0013O¢vu ´£\u0085*5Vâ_óÈ|Ù1\u00943úPY¿\u009ea¦¾(ÉÒ3\u000bÀ\u009a\fX(Nï\u001fµÿ'l\u008bÌNYi/\u0005¯@Fá9\fÌ\u0000Â:!¯¢4F£gÞºWÛ\u001cö\u001fjÛP\\D\u0013\u0018DÉL\u001azÃú\u0086*.¬Uª\u0007¼|\u009f2Åi\u009eÈ¤iâÕ°\u0092\u007f\u0095\u0098ËÒ\r\u008a(äKGY¨\u001e8n+w\u008e\u0087¥Û\u0098èÍú\u0012\u0007Æìò±HTì´\t%£rSÕ§\u0098?©¦É( %\t}·N5A~\u0010z¤;-\u0002Gt\u0013\u0086sþ\u009dtM\u0095Gè®\u0010\u0017\u001b\u001by\u001f\u0093pìá\u0002ò ªx@ñp×\u001b½ò´U\u0016È\u001b\u0012dæ:ÙXÓ·@ßD¹M\u0010è\u0007ÝÝ8Nå§sì\u0000Ë\f6T*û+6ì\u001d\b\u0004~ãõ!»\u000f\u0087ÿ\u0010\u0003ð\u008bðÃÅö\u0013}ÜóWÍM\u0088\bz\u009a2\u0091s\u0001\u0010\u000e33¶8c &\u0001¯\u0089%ql\u008e\u0005ÌTT>Ø+_\u009aN\u009b\u001bþÜeuïÌð\u0004\u0006éV\u0092\u0018\u0096\u0000¦Ø(º¤UÐ\u0094wD©$\u008cRie\\|ÎT9ä8b\u000b\f\u008a5òÌ?·/P2*\u0087\u008b\u0005ßký\u009f_Á}ðâ6§z\tF\u009d\u0083nÃÖî\u0016\u000eó¨¿\u0000~Ì\u0017µ½1\u0083nÐÙP°\u0094¥ \u0006AkwÑÉ±I\tj^ìy\u001bBëEx\u009e\"\u000b=B4²\u0005](â0eN\u0018N\r;ÁH\u008d\u000f&«hV9±fZ§\u0098@±w\u000e\u0002ß«\u0018_ú Ò«\u0085 já\u0001ÿà¨mQT#FnïChaÀ §\u0091Ý´\u0011\u0014\u0014ìÍ1\u008b?Ù^`\u00182ø\u0085;HÃ¹\u0016\u0004\u0082 \u0090>\u008fN7\u0018Ò\u0010\u008f4î\u0098D\u0094ò|»\u0086ý  \u0080y®Ûýp0ß\u0092(|¢\u009f+/90¥â\u0090ë¤\u007f' ¥7WþÁ°ê_(\u0085\"l´\u0095>W\u000bF\u009c\u001c&\u009d%\u0000\u0002\u0018SQc\u009a}på2Þ±¹Æó\u0096ç\u0082Ç\u0084,\u001d\u0016±A\u0084 \u0091Ê\fè0²o¢§*ø/\u0096·\u0013qàéD'oÎØ\u0098\u000fDÁ*\u0093uü\u0003(q±j\u0082p\u0010Ñ\u0098÷¶À\u000b²µ\u0019\t\u0095YÆ¢]\të~¢|\u0015\u0002õ3\u001fÃ\u0003\u00ad\u007f0}ÁJ6\u0018eÂ(\f\u009b¾×n\u0080$Ò\u0094Ùä\u0094Ýß\u001b\u001c\u008fÏ\u0098¢\u0085"
         .length();
      char var10 = ' ';
      int var17 = -1;

      label37:
      while (true) {
         String var18 = var11.substring(++var17, var17 + var10);
         byte var10001 = -1;

         while (true) {
            byte[] var15 = var7.doFinal(var18.getBytes("ISO-8859-1"));
            String var26 = d(var15).intern();
            switch (var10001) {
               case 0:
                  var14[var12++] = var26;
                  if ((var17 += var10) >= var13) {
                     g = var14;
                     h = new String[25];
                     Cipher var0;
                     var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var5 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var5 << var1 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long var2 = -2512409817124522889L;
                     byte[] var4 = var0.doFinal(
                        new byte[]{
                           (byte)(var2 >>> 56),
                           (byte)(var2 >>> 48),
                           (byte)(var2 >>> 40),
                           (byte)(var2 >>> 32),
                           (byte)(var2 >>> 24),
                           (byte)(var2 >>> 16),
                           (byte)(var2 >>> 8),
                           (byte)var2
                        }
                     );
                     long var30 = (var4[0] & 255L) << 56
                        | (var4[1] & 255L) << 48
                        | (var4[2] & 255L) << 40
                        | (var4[3] & 255L) << 32
                        | (var4[4] & 255L) << 24
                        | (var4[5] & 255L) << 16
                        | (var4[6] & 255L) << 8
                        | var4[7] & 255L;
                     var10001 = -1;
                     p = var30;
                     return;
                  }

                  var10 = var11.charAt(var17);
                  break;
               default:
                  var14[var12++] = var26;
                  if ((var17 += var10) < var13) {
                     var10 = var11.charAt(var17);
                     continue label37;
                  }

                  var11 = "¢ÞÒl\u00ad\u001e#®ª\u00ad\u0002Íûh\u0005óß\u000b\u001b\u0094kÿ'a:É&/Îx\\:\u0018¸\u0004\u00168§õvO\u0087ìQ\"\u0011Ë\u0019¾í,\u0094\u009c/Âñ©";
                  var13 = "¢ÞÒl\u00ad\u001e#®ª\u00ad\u0002Íûh\u0005óß\u000b\u001b\u0094kÿ'a:É&/Îx\\:\u0018¸\u0004\u00168§õvO\u0087ìQ\"\u0011Ë\u0019¾í,\u0094\u009c/Âñ©"
                     .length();
                  var10 = ' ';
                  var17 = -1;
            }

            var18 = var11.substring(++var17, var17 + var10);
            var10001 = 0;
         }
      }
   }

   private static String d(byte[] var0) {
      int var1 = 0;
      int var2;
      char[] var3 = new char[var2 = var0.length];

      for (int var4 = 0; var4 < var2; var4++) {
         int var5;
         if ((var5 = 255 & var0[var4]) < 192) {
            var3[var1++] = (char)var5;
         } else if (var5 < 224) {
            char var6 = (char)((char)(var5 & 31) << 6);
            byte var8 = var0[++var4];
            var6 = (char)(var6 | (char)(var8 & 63));
            var3[var1++] = var6;
         } else if (var4 < var2 - 2) {
            char var12 = (char)((char)(var5 & 15) << '\f');
            byte var9 = var0[++var4];
            var12 = (char)(var12 | (char)(var9 & 63) << 6);
            var9 = var0[++var4];
            var12 = (char)(var12 | (char)(var9 & 63));
            var3[var1++] = var12;
         }
      }

      return new String(var3, 0, var1);
   }

   private static String b(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 23811;
      if (h[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])i.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               i.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("cc/astralis/alk", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = g[var5].getBytes("ISO-8859-1");
         h[var5] = d(((Cipher)var4[0]).doFinal(var9));
      }

      return h[var5];
   }

   private static Object b(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = b(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static CallSite b(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("b".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("cc/astralis/alk" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }
}
