package kraken.plugin.test;

import kraken.plugin.api.Stream;
import org.junit.Assert;
import org.junit.Test;

/**
 * Provides test for stream encoding/decoding.
 */
public class StreamTests {

    @Test
    public void readSignedByteTests() {
        byte[] backing = new byte[(Byte.MAX_VALUE * 2) + 1];
        Stream s = new Stream(backing);
        for (int i = Byte.MIN_VALUE; i < Byte.MAX_VALUE; i++) {
            s.writeByte(i);
        }
        Assert.assertFalse(s.hasRemaining());

        s.position(0);
        for (int i = Byte.MIN_VALUE; i < Byte.MAX_VALUE; i++) {
            Assert.assertEquals((byte)i, (byte)s.readByte());
        }
        Assert.assertFalse(s.hasRemaining());
    }

    @Test
    public void readUnsignedByteTests() {
        byte[] backing = new byte[(Byte.MAX_VALUE * 2) + 1];
        Stream s = new Stream(backing);
        for (int i = 0; i < (Byte.MAX_VALUE * 2) + 1; i++) {
            s.writeByte(i);
        }
        Assert.assertFalse(s.hasRemaining());

        s.position(0);
        for (int i = 0; i < (Byte.MAX_VALUE * 2) + 1; i++) {
            Assert.assertEquals(i, s.readByteUnsigned());
        }
        Assert.assertFalse(s.hasRemaining());
    }
    
    @Test
    public void readSignedShortTests() {
        byte[] backing = new byte[(((Short.MAX_VALUE * 2) + 1) * 2)];
        Stream s = new Stream(backing);
        for (int i = Short.MIN_VALUE; i < Short.MAX_VALUE; i++) {
            s.writeShort(i);
        }
        Assert.assertFalse(s.hasRemaining());

        s.position(0);
        for (int i = Short.MIN_VALUE; i < Short.MAX_VALUE; i++) {
            int x = s.readShort();
            Assert.assertEquals((short)i, (short)x);
        }
        Assert.assertFalse(s.hasRemaining());
    }

}
