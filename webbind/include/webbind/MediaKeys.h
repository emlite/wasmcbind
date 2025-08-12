#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaKeySession MediaKeySession;
typedef struct MediaKeysPolicy MediaKeysPolicy;


/**
 * @brief Interface MediaKeys
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeys)
 */
DECLARE_EMLITE_TYPE(MediaKeys, em_Val);

/**
 * @brief Calls the `createSession` method. 
*/
MediaKeySession MediaKeys_createSession0(MediaKeys* self );

/**
 * @brief Calls the `createSession` method. 
*/
MediaKeySession MediaKeys_createSession1(MediaKeys* self , MediaKeySessionType * sessionType);

/**
 * @brief Calls the `getStatusForPolicy` method. 
*/
jb_Promise MediaKeys_getStatusForPolicy0(MediaKeys* self );

/**
 * @brief Calls the `getStatusForPolicy` method. 
*/
jb_Promise MediaKeys_getStatusForPolicy1(MediaKeys* self , MediaKeysPolicy * policy);

/**
 * @brief Calls the `setServerCertificate` method. 
*/
jb_Promise MediaKeys_setServerCertificate(MediaKeys* self , jb_Any * serverCertificate);

#ifdef __cplusplus
}
#endif
