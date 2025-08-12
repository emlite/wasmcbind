#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WebGLShader WebGLShader;


/**
 * @brief Interface WEBGL_debug_shaders
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_debug_shaders)
 */
DECLARE_EMLITE_TYPE(WEBGL_debug_shaders, em_Val);

/**
 * @brief Calls the `getTranslatedShaderSource` method. 
*/
jb_String WEBGL_debug_shaders_getTranslatedShaderSource(WEBGL_debug_shaders* self , WebGLShader * shader);

#ifdef __cplusplus
}
#endif
