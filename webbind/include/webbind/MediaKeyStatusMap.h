#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface MediaKeyStatusMap
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeyStatusMap)
 */
DECLARE_EMLITE_TYPE(MediaKeyStatusMap, em_Val);

/**
 * @brief Gets the `size` property. 
*/
unsigned long MediaKeyStatusMap_size(const MediaKeyStatusMap *self);

/**
 * @brief Calls the `has` method. 
*/
bool MediaKeyStatusMap_has(MediaKeyStatusMap* self , jb_Any * keyId);

/**
 * @brief Calls the `get` method. 
*/
jb_Any MediaKeyStatusMap_get(MediaKeyStatusMap* self , jb_Any * keyId);

#ifdef __cplusplus
}
#endif
