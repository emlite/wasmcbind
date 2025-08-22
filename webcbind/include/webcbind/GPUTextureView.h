#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface GPUTextureView
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GPUTextureView)
 */
DECLARE_EMLITE_TYPE(GPUTextureView, em_Val);

/**
 * @brief Gets the `label` property. 
*/
jb_String GPUTextureView_label(const GPUTextureView *self);

/**
 * @brief Sets the `label` property. 
*/
void GPUTextureView_set_label(GPUTextureView* self, jb_String * value);

#ifdef __cplusplus
}
#endif
