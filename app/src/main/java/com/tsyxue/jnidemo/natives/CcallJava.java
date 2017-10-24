package com.tsyxue.jnidemo.natives;

import android.util.Log;
import android.widget.Toast;

/**
 * Created by 雪 on 2017/10/24.
 */

public class CcallJava {

    private static String TAG = "CcallJava" ;

    public native void callbackString();

    public native void callbackAdd();

    public void helloJava(){

        Log.d(TAG, "C :I COME FROM C ,to java");

    }

    public void helloAdd(int x , int y){
        int result = x + y ;
        Log.d(TAG, "helloAdd: result====="+ result);
    }

}
