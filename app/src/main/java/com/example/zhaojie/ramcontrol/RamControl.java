package com.example.zhaojie.ramcontrol;

public class RamControl {
    public static RamControl mInstance;
    static {
        System.loadLibrary("ram-control-lib");
    }

    public static RamControl getInstance() {
        if(mInstance == null) {
            mInstance = new RamControl();
        }
        return mInstance;
    }

    public native void fillRam(int dsize);

    public native void freeRam();

}
