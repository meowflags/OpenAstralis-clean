package cc.astralis;

import java.security.PrivateKey;

/** Native-backed protocol cryptography removed pending a readable implementation. */
public final class fz {
    public static final PrivateKey czv = null;
    private static cdr[] values;
    private fz() { }
    private static UnsupportedOperationException removed() {
        return new UnsupportedOperationException("Native protocol implementation removed");
    }
    public static byte[] hgv(long seed) { throw removed(); }
    public static String dvr(String data, byte[] key, byte[] aad) { throw removed(); }
    public static String atc(String data, byte[] key, byte[] aad) { throw removed(); }
    public static String dsg(String data, byte[] key, long aad) { throw removed(); }
    public static String ati(String data, byte[] key, long aad) { throw removed(); }
    public static void gpz(cdr[] value) { values = value; }
    public static cdr[] dtf() { return values; }
}
