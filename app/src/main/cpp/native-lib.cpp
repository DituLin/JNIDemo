#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring

JNICALL
Java_com_atu_jnidemo_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_atu_jnidemo_MainActivity_stringFromJNI2(JNIEnv *env, jobject instance) {

    // TODO
    std::string hello = "Hello from C++ 2";

    return env->NewStringUTF(hello.c_str());
}