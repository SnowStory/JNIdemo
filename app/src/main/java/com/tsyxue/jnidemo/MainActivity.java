package com.tsyxue.jnidemo;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.Toast;

import com.tsyxue.jnidemo.natives.JNI;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        JNI jni = new JNI();
        String result = jni.HelloC() ;

        Toast.makeText(this,"返回结果result==="+result,Toast.LENGTH_SHORT).show();

    }
}
