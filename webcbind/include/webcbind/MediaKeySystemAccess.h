#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaKeySystemConfiguration MediaKeySystemConfiguration;
typedef struct MediaKeys MediaKeys;


/**
 * @brief Interface MediaKeySystemAccess
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeySystemAccess)
 */
DECLARE_EMLITE_TYPE(MediaKeySystemAccess, em_Val);

/**
 * @brief Gets the `keySystem` property. 
*/
jb_String MediaKeySystemAccess_keySystem(const MediaKeySystemAccess *self);

/**
 * @brief Calls the `getConfiguration` method. 
*/
MediaKeySystemConfiguration MediaKeySystemAccess_getConfiguration(MediaKeySystemAccess* self );

/**
 * @brief Calls the `createMediaKeys` method. 
*/
jb_Promise MediaKeySystemAccess_createMediaKeys(MediaKeySystemAccess* self );

#ifdef __cplusplus
}
#endif
