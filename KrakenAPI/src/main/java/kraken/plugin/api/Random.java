package kraken.plugin.api;

import java.util.concurrent.ThreadLocalRandom;

/**
 * Provides access to random numbers.
 */
public final class Random {

    private static final String RANDOM_CHARS_ALPHABET = "abcdefghijklmnopqrstuvwxyz";
    private static final String RANDOM_CHARS_NUMERICAL = "0123456789";
    private static final String RANDOM_CHARS_SYMBOLS = "!@#$%^&*()_+-=[]{};'\\:\"|,./<>?";

    public static final int OPT_ALPHABET = (1 << 0);
    public static final int OPT_NUMERICAL = (1 << 1);
    public static final int OPT_SYMBOLS = (1 << 2);
    public static final int OPT_SPACES = (1 << 3);

    private Random() {
    }

    public static boolean bool() {
        return ThreadLocalRandom.current().nextBoolean();
    }

    public static int i32() {
        return ThreadLocalRandom.current().nextInt();
    }

    public static int i32(int min, int max) {
        return ThreadLocalRandom.current().nextInt(min, max);
    }

    public static long i64(long min, long max) {
        return ThreadLocalRandom.current().nextLong(min, max);
    }

    public static float f32() {
        return ThreadLocalRandom.current().nextFloat();
    }

    public static double f32(float min, float max) {
        return (float)ThreadLocalRandom.current().nextDouble(min, max);
    }

    public static double f64() {
        return ThreadLocalRandom.current().nextDouble();
    }

    public static double f64(double min, double max) {
        return ThreadLocalRandom.current().nextDouble(min, max);
    }

    public static String string(int options) {
        String selections = "";
        StringBuilder sb = new StringBuilder();
        if ((options & OPT_ALPHABET) == OPT_ALPHABET) {
            selections += RANDOM_CHARS_ALPHABET;
        }

        if ((options & OPT_NUMERICAL) == OPT_NUMERICAL) {
            selections += RANDOM_CHARS_NUMERICAL;
        }

        if ((options & OPT_SYMBOLS) == OPT_SYMBOLS) {
            selections += RANDOM_CHARS_SYMBOLS;
        }

        if ((options & OPT_SPACES) == OPT_SPACES) {
            selections += ' ';
        }

        if (selections.isEmpty()) {
            throw new NoOptionsException();
        }

        sb.append(selections.charAt(i32() % selections.length()));
        return sb.toString();
    }
}
