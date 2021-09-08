/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class kraken_plugin_api_Input */

#ifndef _Included_kraken_plugin_api_Input
#define _Included_kraken_plugin_api_Input
#ifdef __cplusplus
extern "C" {
#endif
#undef kraken_plugin_api_Input_MOUSE_LEFT
#define kraken_plugin_api_Input_MOUSE_LEFT 0L
#undef kraken_plugin_api_Input_MOUSE_RIGHT
#define kraken_plugin_api_Input_MOUSE_RIGHT 1L
#undef kraken_plugin_api_Input_MOUSE_MIDDLE
#define kraken_plugin_api_Input_MOUSE_MIDDLE 2L
/*
 * Class:     kraken_plugin_api_Input
 * Method:    key
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_kraken_plugin_api_Input_key
  (JNIEnv *, jclass, jint);

/*
 * Class:     kraken_plugin_api_Input
 * Method:    moveMouse
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_kraken_plugin_api_Input_moveMouse
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     kraken_plugin_api_Input
 * Method:    clickMouse
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_kraken_plugin_api_Input_clickMouse
  (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif