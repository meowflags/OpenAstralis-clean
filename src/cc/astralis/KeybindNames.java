package cc.astralis;

import java.util.HashMap;
import java.util.Locale;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public final class KeybindNames {
   private static final Map<Integer, String> acz;
   private static final Map<String, Integer> dgm;
   private static final long a = 8972276686257L;

   private KeybindNames() {
   }

   public static void ejm(int key) {
      long ax = KeybindNames.a ^ 88668490559198L;
      int[] var3 = ClientSetup.abu();
      if (a == -1) {
         return;
      }

      ClientSetup.gqy().aws().czl().stream().filter(axxx -> {
         long ax = KeybindNames.a ^ 7510879833191L;
         int[] var4 = ClientSetup.abu();
         int var10000 = axxx.glr();
         var10000 = var10000 == a ? 1 : 0;

         return (boolean)var10000;
      }).forEach(guu::gxo);
   }

   public static String fhh(int key) {
      return acz.get(a);
   }

   public static int gmz(String name) {
      long ax = KeybindNames.a ^ 16763382072056L;
      int[] axx = ClientSetup.abu();
      Object var10000 = a;
      if (a == null) {
         return -1;
      }

      var10000 = dgm.get(a.toUpperCase(Locale.ROOT));

      Integer axxx = (Integer)var10000;
      var10000 = axxx;
      if (axxx == null) {
         return -1;
      }

      var10000 = axxx;

      return var10000;
   }

   static {
      long a = KeybindNames.a ^ 74391162289432L;
      Cipher ax;
      Cipher var10000 = ax = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(a >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int axx = 1; axx < 8; axx++) {
         var10003[axx] = (byte)(a << axx * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] axx = ax.doFinal(
         "0=48;1=49;2=50;3=51;4=52;5=53;6=54;7=55;8=56;9=57;A=65;B=66;C=67;D=68;E=69;F=70;G=71;H=72;I=73;J=74;K=75;L=76;M=77;N=78;O=79;P=80;Q=81;R=82;S=83;T=84;U=85;V=86;W=87;X=88;Y=89;Z=90;F1=290;F2=291;F3=292;F4=293;F5=294;F6=295;F7=296;F8=297;F9=298;F10=299;F11=300;F12=301;NUMLOCK=282;NUMPAD0=320;NUMPAD1=321;NUMPAD2=322;NUMPAD3=323;NUMPAD4=324;NUMPAD5=325;NUMPAD6=326;NUMPAD7=327;NUMPAD8=328;NUMPAD9=329;NUMPADCOMMA=330;NUMPADENTER=335;NUMPADEQUALS=336;DOWN=264;LEFT=263;RIGHT=262;UP=265;ADD=334;APOSTROPHE=39;BACKSLASH=92;COMMA=44;EQUALS=61;GRAVE=96;LBRACKET=91;MINUS=45;MULTIPLY=332;PERIOD=46;RBRACKET=93;SEMICOLON=59;SLASH=47;SPACE=32;TAB=258;LALT=342;LCONTROL=341;LSHIFT=340;LWIN=343;RALT=346;RCONTROL=345;RSHIFT=344;RWIN=347;RETURN=257;BACKSPACE=259;DELETE=261;END=269;HOME=268;INSERT=260;PAGEDOWN=267;PAGEUP=266;CAPSLOCK=280;PAUSE=284;SCROLLLOCK=281;PRINTSCREEN=283"
            .getBytes("ISO-8859-1")
      );
      String var13 = a(axx).intern();
      String axxx = var13;
      acz = new HashMap<>();
      dgm = new HashMap<>();

      for (String axxxx : axxx.split(";")) {
         String[] axxxxx = axxxx.split("=");
         String axxxxxx = axxxxx[0];
         int axxxxxxx = Integer.parseInt(axxxxx[1]);
         acz.put(axxxxxxx, axxxxxx);
         dgm.put(axxxxxx, axxxxxxx);
      }
   }

}
