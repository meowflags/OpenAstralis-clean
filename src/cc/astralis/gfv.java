package cc.astralis;

import com.mojang.util.UndashedUuid;
import java.util.UUID;


import net.minecraft.class_320;

public class gfv {
   private AccountsScreen ez = new AccountsScreen();
   private String goz;
   private String dyh;
   private String ezo;
   private boolean gmr;
   private static String gr;
   private static final long a = 3456503866442L;

   public gfv(String name, String token, String uuid, boolean premium) {
      a.ezo = a;
      a.goz = a;
      a.dyh = a;
      a.gmr = a;
   }

   public gfv(String name, String token, String uuid) {
      a.ezo = a;
      a.goz = a;
      a.dyh = a;
      a.gmr = false;
   }

   public gfv(class_320 session) {
      super();
      a.ez = new AccountsScreen();
      a.ezo = a.method_1676();
      int[] var10000 = ClientSetup.abu();
      a.goz = a.method_1674();
      int[] var4 = var10000;
      a.dyh = UndashedUuid.toString(a.method_44717());
      boolean var10001 = a.method_1674().isEmpty();
      var10001 = !var10001;

      a.gmr = var10001;
   }

   public UUID dic() {
      return SessionHelper.duo(a.dyh);
   }

   public AccountsScreen ern() {
      return a.ez;
   }

   public String gpj() {
      return a.goz;
   }

   public String hal() {
      return a.dyh;
   }

   public String gwo() {
      return a.ezo;
   }

   public boolean cit() {
      return a.gmr;
   }

   public void fxi(AccountsScreen altGUI) {
      a.ez = a;
   }

   public void gfe(String token) {
      a.goz = a;
   }

   public void gtk(String uuid) {
      a.dyh = a;
   }

   public void Mush(String name) {
      a.ezo = a;
   }

   public void apq(boolean premium) {
      a.gmr = a;
   }

   public static void dsc(String var0) {
      gr = var0;
   }

   public static String btd() {
      return gr;
   }

}
