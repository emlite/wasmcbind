#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface GPURenderBundle
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderBundle)
 */
DECLARE_EMLITE_TYPE(GPURenderBundle, em_Val);

/**
 * @brief Gets the `label` property. 
*/
jb_String GPURenderBundle_label(const GPURenderBundle *self);

/**
 * @brief Sets the `label` property. 
*/
void GPURenderBundle_set_label(GPURenderBundle* self, jb_String * value);

#ifdef __cplusplus
}
#endif
