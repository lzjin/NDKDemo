LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := OutText_jni
LOCAL_SRC_FILES := story.c
include $(BUILD_SHARED_LIBRARY)