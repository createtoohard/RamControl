#include <jni.h>
#include <string>
#include "ram_control.h"
#include <android/log.h>

extern "C" JNIEXPORT jstring

JNICALL
Java_com_example_zhaojie_ramcontrol_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
extern "C"
JNIEXPORT void JNICALL
Java_com_example_zhaojie_ramcontrol_RamControl_fillRam(JNIEnv *env, jobject instance, jint dsize) {
    __android_log_print(ANDROID_LOG_DEBUG,"jni","fillMem");
    ram_control rc;
    rc.fillRam(dsize);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_example_zhaojie_ramcontrol_RamControl_freeRam(JNIEnv *env, jobject instance) {
    ram_control rc;
    rc.freeRam();
    // TODO

}
