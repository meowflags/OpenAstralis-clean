package cc.astralis;

import com.google.gson.JsonObject;
import java.net.URI;
import java.util.concurrent.TimeUnit;
import org.java_websocket.client.WebSocketClient;
import org.java_websocket.handshake.ServerHandshake;

/** Disabled remote channel. No native initialization, timers or reconnect task. */
public final class hdl extends WebSocketClient {
    public final cbm cqa = new cbm();
    public final cbm efz = new cbm();
    private static boolean disabled;

    public hdl() { super(URI.create("ws://127.0.0.1:9/")); }
    public hdl(String ignored) { this(); }

    @Override public void connect() { throw removed(); }
    @Override public boolean connectBlocking() throws InterruptedException { throw removed(); }
    @Override public boolean connectBlocking(long timeout, TimeUnit unit)
            throws InterruptedException { throw removed(); }
    @Override public void reconnect() { throw removed(); }
    @Override public boolean reconnectBlocking() throws InterruptedException { throw removed(); }

    private static UnsupportedOperationException removed() {
        return new UnsupportedOperationException("Remote channel removed");
    }
    public void cat() { }
    public void has() { }
    @Override public void onMessage(String ignored) { }
    @Override public void onOpen(ServerHandshake ignored) { }
    @Override public void onError(Exception ignored) { }
    @Override public void onClose(int code, String reason, boolean remote) { }
    public JsonObject cal() { return new JsonObject(); }
    public static void hkg(boolean value) { disabled = value; }
    public static boolean edc() { return disabled; }
    public static boolean guk() { return !disabled; }
}
