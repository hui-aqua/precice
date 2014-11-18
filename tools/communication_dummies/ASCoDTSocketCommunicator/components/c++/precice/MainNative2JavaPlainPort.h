#ifndef PRECICE_MAIN2NATIVE2JAVAPLAINPORT_H_
#define PRECICE_MAIN2NATIVE2JAVAPLAINPORT_H_ 

#include "precice/Main.h"
#include <jni.h> 
#include <iostream>
//
// ASCoDT - Advanced Scientific Computing Development Toolkit
//
// This file was generated by ASCoDT's simplified SIDL compiler.
//
// Authors: Tobias Weinzierl, Atanas Atanasov   
//
#ifdef __cplusplus
  extern "C" {
#endif


          
JNIEXPORT void JNICALL Java_precice_MainNative2JavaPlainPort_createInstance(JNIEnv *env, jobject obj);
JNIEXPORT void JNICALL Java_precice_MainNative2JavaPlainPort_destroyInstance(JNIEnv *env, jobject obj,jlong ref);

#ifdef __cplusplus
  }
#endif




namespace precice { 

     class MainNative2JavaPlainPort;
}

class precice::MainNative2JavaPlainPort: public precice::Main{
  private:
    JavaVM* _jvm;
    jobject _obj;
  public:
    MainNative2JavaPlainPort(JavaVM* jvm,jobject obj);
    ~MainNative2JavaPlainPort();
    void main();  
    void mainParallel();
   
};
#endif