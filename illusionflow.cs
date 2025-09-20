using System;

public class IllusionFlow64 {
  public ulong a;
  public ulong b;
  public ulong c;
  public ulong d;
  public ulong e;
  public ulong f;

  public ulong Next() {
    ulong mix = (d << 25) | (d >> 39);

    d = c;
    c = b;
    f += e;
    e += b;
    b = a + 111111111111111111;
    a = f ^ mix;
    return a ^ (b >> 1);
  }
}

public class IllusionFlow32 {
  public uint a;
  public uint b;
  public uint c;
  public uint d;
  public uint e;
  public uint f;

  public uint Next() {
    uint mix = (d << 13) | (d >> 19);

    d = c;
    c = b;
    f += e;
    e += b;
    b = a + 111111111;
    a = f ^ mix;
    return a ^ (b >> 1);
  }
}

public class IllusionFlow16 {
  public ushort a;
  public ushort b;
  public ushort c;
  public ushort d;
  public ushort e;
  public ushort f;

  public ushort Next() {
    ushort mix = (ushort) ((d << 6) | (d >> 10));

    d = c;
    c = b;
    f += e;
    e += b;
    b = (ushort) (a + 1111);
    a = (ushort) (f ^ mix);
    return (ushort) (a ^ (b >> 1));
  }
}

public class IllusionFlow8 {
  public byte a;
  public byte b;
  public byte c;
  public byte d;
  public byte e;
  public byte f;

  public byte Next() {
    byte mix = (byte) ((d << 3) | (d >> 5));

    d = c;
    c = b;
    f += e;
    e += b;
    b = (byte) (a + 111);
    a = (byte) (f ^ mix);
    return (byte) (a ^ (b >> 1));
  }
}
