#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface GPUSampler
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GPUSampler)
 */
DECLARE_EMLITE_TYPE(GPUSampler, em_Val);

/**
 * @brief Gets the `label` property. 
*/
jb_String GPUSampler_label(const GPUSampler *self);

/**
 * @brief Sets the `label` property. 
*/
void GPUSampler_set_label(GPUSampler* self, jb_String * value);

#ifdef __cplusplus
}
#endif
