package cc.astralis;


import java.lang.invoke.MethodHandles;


import java.util.Arrays;


public class IrcCommand extends fso {
   private static final long a = 103713060117054L;


   public IrcCommand() {
      long a = IrcCommand.a ^ 18553199456414L;
      String[] var10001 = new String[2];
      var10001[0] = "irc";
      var10001[1] = "i";
      super(var10001, "Sends a message to all client users (.irc <message>");
   }

   @Override
   public void aov(String[] args, String message) {
      int[] axx = ClientSetup.abu();
      if (a.length >= 1) {
         String axxx = String.join(" ", Arrays.copyOfRange(a, 1, a.length));
         new cse(axxx).dak(ClientSetup.gqy().gp());
         new dfg(axxx).dak(ClientSetup.gqy().gp());
         return;
      }

      bpa.dhu("Wrong Usage .irc <Message>");
   }

}
