#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface GPUExternalTexture
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GPUExternalTexture)
 */
DECLARE_EMLITE_TYPE(GPUExternalTexture, em_Val);

/**
 * @brief Gets the `label` property. 
*/
jb_String GPUExternalTexture_label(const GPUExternalTexture *self);

/**
 * @brief Sets the `label` property. 
*/
void GPUExternalTexture_set_label(GPUExternalTexture* self, jb_String * value);

#ifdef __cplusplus
}
#endif
