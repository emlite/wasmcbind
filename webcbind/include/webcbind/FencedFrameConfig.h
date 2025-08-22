#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface FencedFrameConfig
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/FencedFrameConfig)
 */
DECLARE_EMLITE_TYPE(FencedFrameConfig, em_Val);

/**
 * @brief Creates a new `FencedFrameConfig` object. 
*/
FencedFrameConfig FencedFrameConfig_new(jb_String * url);

/**
 * @brief Calls the `setSharedStorageContext` method. 
*/
jb_Undefined FencedFrameConfig_setSharedStorageContext(FencedFrameConfig* self , jb_String * contextString);

#ifdef __cplusplus
}
#endif
