package kraken.plugin.api;

/**
 * Provides time related utilities.
 */
public final class Time {

    private Time() {
    }

    /**
     * Calculates the amount per hour based on the total runtime and amount
     * already accumulated.
     */
    public static int perHour(long runtime, int amount) {
        return (int) ((double) amount * 3600000.0d / (double) runtime);
    }

    /**
     * Formats an elapsed time into a formatted readable string.
     *
     * @param runtime The elapsed time in milliseconds.
     * @return
     */
    public static String formatTime(long runtime) {
        long seconds = (runtime / 1000) % 60;
        long minutes = ((runtime / (1000 * 60)) % 60);
        long hours = ((runtime / (1000 * 60 * 60)) % 24);
        return hours + "h " + minutes + "m " + seconds + "s";
    }

}
