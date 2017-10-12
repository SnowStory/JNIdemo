package com.tsyxue.jnidemo.natives;

/**
 * Created by 雪 on 2017/10/11.
 */
public class JNI {

    static {

        System.loadLibrary("hello");

    }

    public native String HelloC();

    public native int add(int a , int b);

}
