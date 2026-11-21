package dev.opalV2;

/** Compatibility signature retained while native implementations are reconstructed. */
public final class Loader {
    private Loader() { }
    public static void registerNativesForClass(int index, Class<?> type) {
        throw new UnsupportedOperationException("Native implementation removed; recover Java code first");
    }
}
