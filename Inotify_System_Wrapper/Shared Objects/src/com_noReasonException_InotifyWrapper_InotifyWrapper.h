/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_noReasonException_InotifyWrapper_InotifyWrapper */

#ifndef _Included_com_noReasonException_InotifyWrapper_InotifyWrapper
#define _Included_com_noReasonException_InotifyWrapper_InotifyWrapper
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_noReasonException_InotifyWrapper_InotifyWrapper
 * Method:    initializeInotify
 * Signature: ([B)I
 */
JNIEXPORT jint JNICALL Java_com_noReasonException_InotifyWrapper_InotifyWrapper_initializeInotify
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     com_noReasonException_InotifyWrapper_InotifyWrapper
 * Method:    waitForFileEvent
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_noReasonException_InotifyWrapper_InotifyWrapper_waitForFileEvent
  (JNIEnv *, jobject);

/*
 * Class:     com_noReasonException_InotifyWrapper_InotifyWrapper
 * Method:    getLastModifiedFile
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_noReasonException_InotifyWrapper_InotifyWrapper_getLastModifiedFile
  (JNIEnv *, jobject);

/*
 * Class:     com_noReasonException_InotifyWrapper_InotifyWrapper
 * Method:    getLastModifiedType
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_noReasonException_InotifyWrapper_InotifyWrapper_getLastModifiedType
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
