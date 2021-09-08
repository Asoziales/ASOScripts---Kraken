/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class kraken_plugin_api_Players */

#ifndef _Included_kraken_plugin_api_Players
#define _Included_kraken_plugin_api_Players
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     kraken_plugin_api_Players
 * Method:    self
 * Signature: ()Lkraken/plugin/api/Player;
 */
JNIEXPORT jobject JNICALL Java_kraken_plugin_api_Players_self
  (JNIEnv *, jclass);

/*
 * Class:     kraken_plugin_api_Players
 * Method:    closest
 * Signature: (Lkraken/plugin/api/Filter;)Lkraken/plugin/api/Player;
 */
JNIEXPORT jobject JNICALL Java_kraken_plugin_api_Players_closest
  (JNIEnv *, jclass, jobject);

/*
 * Class:     kraken_plugin_api_Players
 * Method:    forEach
 * Signature: (Lkraken/plugin/api/Action1;)V
 */
JNIEXPORT void JNICALL Java_kraken_plugin_api_Players_forEach
  (JNIEnv *, jclass, jobject);

/*
 * Class:     kraken_plugin_api_Players
 * Method:    all
 * Signature: ()[Lkraken/plugin/api/Player;
 */
JNIEXPORT jobjectArray JNICALL Java_kraken_plugin_api_Players_all
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
