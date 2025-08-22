#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface WEBGL_compressed_texture_astc
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_compressed_texture_astc)
 */
DECLARE_EMLITE_TYPE(WEBGL_compressed_texture_astc, em_Val);

/**
 * @brief Calls the `getSupportedProfiles` method. 
*/
jb_Array WEBGL_compressed_texture_astc_getSupportedProfiles(WEBGL_compressed_texture_astc* self );

#ifdef __cplusplus
}
#endif
