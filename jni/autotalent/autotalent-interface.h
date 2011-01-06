/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_sourceforge_autotalent_Autotalent */

#ifndef _Included_net_sourceforge_autotalent_Autotalent
#define _Included_net_sourceforge_autotalent_Autotalent
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     net_sourceforge_autotalent_Autotalent
 * Method:    instantiateAutoTalent
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_net_sourceforge_autotalent_Autotalent_instantiateAutoTalent
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_sourceforge_autotalent_Autotalent
 * Method:    initializeAutoTalent
 * Signature: (FCFFFFFIFFFFIIFF)V
 */
JNIEXPORT void JNICALL Java_net_sourceforge_autotalent_Autotalent_initializeAutoTalent
  (JNIEnv *, jclass, jfloat, jchar, jfloat, jfloat, jfloat, jfloat, jfloat, jint, jfloat, jfloat, jfloat, jfloat, jint, jint, jfloat, jfloat);

/*
 * Class:     net_sourceforge_autotalent_Autotalent
 * Method:    processSamples
 * Signature: ([SI)V
 */
JNIEXPORT void JNICALL Java_net_sourceforge_autotalent_Autotalent_processSamples
  (JNIEnv *, jclass, jshortArray, jint);

/*
 * Class:     net_sourceforge_autotalent_Autotalent
 * Method:    processMixSamples
 * Signature: ([S[SI)V
 */
JNIEXPORT void JNICALL Java_net_sourceforge_autotalent_Autotalent_processMixSamples
  (JNIEnv *, jclass, jshortArray, jshortArray, jint);

/*
 * Class:     net_sourceforge_autotalent_Autotalent
 * Method:    destroyAutoTalent
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_sourceforge_autotalent_Autotalent_destroyAutoTalent
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif