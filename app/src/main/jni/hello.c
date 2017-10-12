//
// Created by 雪 on 2017/10/11.
//

#include <stdio.h>
#include <stdlib.h>
#include <jni.h>
#include "com_tsyxue_jnidemo_natives_JNI.h"

jstring Java_com_tsyxue_jnidemo_natives_JNI_HelloC
  (JNIEnv* env, jobject jobj){

        char* str = "i from c !!!" ;

        //jstring     (*NewStringUTF)(JNIEnv*, const char*);
        return (*env) ->NewStringUTF(env , str) ;

  };


jint Java_com_tsyxue_jnidemo_natives_JNI_add
        (JNIEnv *env , jobject obj, jint a, jint b){

        int result = a + b ;

        return result ;
};


