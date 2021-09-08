/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class kraken_plugin_api_Client */

#ifndef _Included_kraken_plugin_api_Client
#define _Included_kraken_plugin_api_Client
#ifdef __cplusplus
extern "C" {
#endif
#undef kraken_plugin_api_Client_ATTACK
#define kraken_plugin_api_Client_ATTACK 0L
#undef kraken_plugin_api_Client_DEFENSE
#define kraken_plugin_api_Client_DEFENSE 1L
#undef kraken_plugin_api_Client_STRENGTH
#define kraken_plugin_api_Client_STRENGTH 2L
#undef kraken_plugin_api_Client_HITPOINTS
#define kraken_plugin_api_Client_HITPOINTS 3L
#undef kraken_plugin_api_Client_RANGE
#define kraken_plugin_api_Client_RANGE 4L
#undef kraken_plugin_api_Client_PRAYER
#define kraken_plugin_api_Client_PRAYER 5L
#undef kraken_plugin_api_Client_MAGIC
#define kraken_plugin_api_Client_MAGIC 6L
#undef kraken_plugin_api_Client_COOKING
#define kraken_plugin_api_Client_COOKING 7L
#undef kraken_plugin_api_Client_WOODCUTTING
#define kraken_plugin_api_Client_WOODCUTTING 8L
#undef kraken_plugin_api_Client_FLETCHING
#define kraken_plugin_api_Client_FLETCHING 9L
#undef kraken_plugin_api_Client_FISHING
#define kraken_plugin_api_Client_FISHING 10L
#undef kraken_plugin_api_Client_FIREMAKING
#define kraken_plugin_api_Client_FIREMAKING 11L
#undef kraken_plugin_api_Client_CRAFTING
#define kraken_plugin_api_Client_CRAFTING 12L
#undef kraken_plugin_api_Client_SMITHING
#define kraken_plugin_api_Client_SMITHING 13L
#undef kraken_plugin_api_Client_MINING
#define kraken_plugin_api_Client_MINING 14L
#undef kraken_plugin_api_Client_HERBLORE
#define kraken_plugin_api_Client_HERBLORE 15L
#undef kraken_plugin_api_Client_AGILITY
#define kraken_plugin_api_Client_AGILITY 16L
#undef kraken_plugin_api_Client_THIEVING
#define kraken_plugin_api_Client_THIEVING 17L
#undef kraken_plugin_api_Client_SLAYER
#define kraken_plugin_api_Client_SLAYER 18L
#undef kraken_plugin_api_Client_FARMING
#define kraken_plugin_api_Client_FARMING 19L
#undef kraken_plugin_api_Client_RUNECRAFTING
#define kraken_plugin_api_Client_RUNECRAFTING 20L
#undef kraken_plugin_api_Client_HUNTER
#define kraken_plugin_api_Client_HUNTER 21L
#undef kraken_plugin_api_Client_CONSTRUCTION
#define kraken_plugin_api_Client_CONSTRUCTION 22L
#undef kraken_plugin_api_Client_SUMMONING
#define kraken_plugin_api_Client_SUMMONING 23L
#undef kraken_plugin_api_Client_DUNGEONEERING
#define kraken_plugin_api_Client_DUNGEONEERING 24L
#undef kraken_plugin_api_Client_DIVINATION
#define kraken_plugin_api_Client_DIVINATION 25L
#undef kraken_plugin_api_Client_INVENTION
#define kraken_plugin_api_Client_INVENTION 26L
#undef kraken_plugin_api_Client_ARCHAEOLOGY
#define kraken_plugin_api_Client_ARCHAEOLOGY 27L
#undef kraken_plugin_api_Client_AT_LOGIN
#define kraken_plugin_api_Client_AT_LOGIN 10L
#undef kraken_plugin_api_Client_IN_LOBBY
#define kraken_plugin_api_Client_IN_LOBBY 20L
#undef kraken_plugin_api_Client_IN_GAME
#define kraken_plugin_api_Client_IN_GAME 30L
/*
 * Class:     kraken_plugin_api_Client
 * Method:    getState
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_kraken_plugin_api_Client_getState
  (JNIEnv *, jclass);

/*
 * Class:     kraken_plugin_api_Client
 * Method:    isLoading
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_kraken_plugin_api_Client_isLoading
  (JNIEnv *, jclass);

/*
 * Class:     kraken_plugin_api_Client
 * Method:    getStatById
 * Signature: (I)Lkraken/plugin/api/Stat;
 */
JNIEXPORT jobject JNICALL Java_kraken_plugin_api_Client_getStatById
  (JNIEnv *, jclass, jint);

/*
 * Class:     kraken_plugin_api_Client
 * Method:    getConVarById
 * Signature: (I)Lkraken/plugin/api/ConVar;
 */
JNIEXPORT jobject JNICALL Java_kraken_plugin_api_Client_getConVarById
  (JNIEnv *, jclass, jint);

/*
 * Class:     kraken_plugin_api_Client
 * Method:    getCurrentHealth
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_kraken_plugin_api_Client_getCurrentHealth
  (JNIEnv *, jclass);

/*
 * Class:     kraken_plugin_api_Client
 * Method:    getMaxHealth
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_kraken_plugin_api_Client_getMaxHealth
  (JNIEnv *, jclass);

/*
 * Class:     kraken_plugin_api_Client
 * Method:    getCurrentPrayer
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_kraken_plugin_api_Client_getCurrentPrayer
  (JNIEnv *, jclass);

/*
 * Class:     kraken_plugin_api_Client
 * Method:    getMaxPrayer
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_kraken_plugin_api_Client_getMaxPrayer
  (JNIEnv *, jclass);

/*
 * Class:     kraken_plugin_api_Client
 * Method:    worldToScreen
 * Signature: (Lkraken/plugin/api/Vector3;)Lkraken/plugin/api/Vector2i;
 */
JNIEXPORT jobject JNICALL Java_kraken_plugin_api_Client_worldToScreen
  (JNIEnv *, jclass, jobject);

/*
 * Class:     kraken_plugin_api_Client
 * Method:    worldToMinimap
 * Signature: (Lkraken/plugin/api/Vector3;)Lkraken/plugin/api/Vector2i;
 */
JNIEXPORT jobject JNICALL Java_kraken_plugin_api_Client_worldToMinimap
  (JNIEnv *, jclass, jobject);

#ifdef __cplusplus
}
#endif
#endif
