package com.lzj.ndk.demo.fromc;

public class OutText {
    //加载.so库
    static {
        System.loadLibrary("OutText_jni");
    }
    //native方法
    public static native String say();
}
