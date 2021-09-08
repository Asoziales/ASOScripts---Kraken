package kraken.plugin.api;

import java.util.Objects;

/**
 * A vector2 made up of integers.
 */
public class Vector2i {

    private int x;
    private int y;

    public Vector2i(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public Vector2i(Vector3i v) {
        this(v.getX(), v.getY());
    }

    public int getX() {
        return x;
    }

    public Vector2i setX(int x) {
        this.x = x;
        return this;
    }

    public int getY() {
        return y;
    }

    public Vector2i setY(int y) {
        this.y = y;
        return this;
    }

    /**
     * Calculates the distance between 2 vectors.
     */
    public int distance(Vector2i other) {
        return (int) Math.sqrt(Math.pow(other.getX() - x, 2) + Math.pow(other.getY() - y, 2));
    }

    /**
     * Calculates the distance between 2 vectors.
     */
    public int distance(Vector3i other) {
        return (int) Math.sqrt(Math.pow(other.getX() - x, 2) + Math.pow(other.getY() - y, 2));
    }

    @Override
    public String toString() {
        return "Vector2i{" +
                "x=" + x +
                ", y=" + y +
                '}';
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        Vector2i vector2i = (Vector2i) o;
        return x == vector2i.x &&
                y == vector2i.y;
    }

    @Override
    public int hashCode() {
        return Objects.hash(x, y);
    }
}
