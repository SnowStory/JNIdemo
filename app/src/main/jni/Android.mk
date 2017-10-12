LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE:= hello
LOCAL_SRC_FILES:= hello.c
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)
LOCAL_EXPORT_LDLIBS := -llog

LOCAL_STATIC_LIBRARIES := cpufeatures android_native_app_glue

include $(BUILD_STATIC_LIBRARY)