//
// Created by 雪 on 2017/10/11.
//

#include <stdio.h>
#include <stdlib.h>
#include <jni.h>
#include "com_tsyxue_jnidemo_natives_JNI.h"
#include "com_tsyxue_jnidemo_natives_CcallJava.h"
//java 调用 C方法 得到返回值
jstring Java_com_tsyxue_jnidemo_natives_JNI_HelloC
  (JNIEnv* env, jobject jobj){

        char* str = "i from c !!!" ;

        //jstring     (*NewStringUTF)(JNIEnv*, const char*);
        return (*env) ->NewStringUTF(env , str) ;

};

//java 调用 C方法 得到返回值
jint Java_com_tsyxue_jnidemo_natives_JNI_add
        (JNIEnv *env , jobject obj, jint a, jint b){

        int result = a + b ;

        return result ;
};

//c 调用java
void Java_com_tsyxue_jnidemo_natives_CcallJava_callbackString
(JNIEnv *env, jobject jobj){
    jclass jcl = (*env)->FindClass(env,"com/tsyxue/jnidemo/natives/CcallJava");

    jmethodID jmethod = (*env)->GetMethodID(env,jcl,"helloJava","()V");

    (*env)->CallVoidMethod(env,jobj,jmethod);
};

void Java_com_tsyxue_jnidemo_natives_CcallJava_callbackAdd
(JNIEnv *env, jobject jobj){
    //得到该类的字节码
   // jclass      (*FindClass)(JNIEnv*, const char*);
    jclass jcla = (*env)->FindClass(env,"com/tsyxue/jnidemo/natives/CcallJava");
    //得到该类的方法  参数 : env  得到的类  调用的方法名  方法签名
    //jmethodID   (*GetMethodID)(JNIEnv*, jclass, const char*, const char*);
    jmethodID methodID = (*env)->GetMethodID(env,jcla ,"helloAdd" ,"(II)V");
    //实例化该类  void        (*CallVoidMethod)(JNIEnv*, jobject, jmethodID, ...);
    (*env)->CallVoidMethod(env , jobj ,methodID,18,23);

};

