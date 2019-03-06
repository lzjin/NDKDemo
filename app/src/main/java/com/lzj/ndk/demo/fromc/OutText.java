package com.lzj.ndk.demo.fromc;

public class OutText {
    static {
        System.loadLibrary("OutText_jni");
    }
    public static native String say();
    public static native int addNumber(int x,int y);
}
