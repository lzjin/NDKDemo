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
   return (*env)->NewStringUTF(env,"故事...");
}
