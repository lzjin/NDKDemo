//
// Created by Administrator on 2019/3/6.
//

#include<jni.h>
#include<stdio.h>
//导入我们创建的头文件
#include "com_lzj_ndk_demo_fromc_OutText.h"
//-----------C语言具体方法的实现-----------
JNIEXPORT jstring JNICALL Java_com_lzj_ndk_demo_fromc_OutText_say(JNIEnv *env, jclass jclass){

   //返回一个字符串
   return (*env)->NewStringUTF(env,"小王贷款买了一辆车。后来，因不能及时还贷，银行开走了他的车。小王懊恼不已，拍着大腿说：“早知道会这样，当初我应该贷款结婚！");
}

JNIEXPORT jint JNICALL Java_com_lzj_ndk_demo_fromc_OutText_addNumber(JNIEnv * env, jclass jclass,
jint x, jint y){

    return   x + y;
}