package com.tsyxue.jnidemo;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Toast;

import com.tsyxue.jnidemo.natives.CcallJava;
import com.tsyxue.jnidemo.natives.JNI;

public class MainActivity extends AppCompatActivity {

    static {
        System.loadLibrary("hello");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

    }

    public void callC(View view){
        JNI jni = new JNI();
        String result = jni.HelloC() ;

        Toast.makeText(this,"返回结果result==="+result,Toast.LENGTH_SHORT).show();


        int value = jni.add(3,5);

        Toast.makeText(this,"返回结果value==="+value,Toast.LENGTH_SHORT).show();
    }

    public void callJava(View view){
        CcallJava callJava = new CcallJava() ;
        callJava.callbackString();
        callJava.callbackAdd();

    }

}
