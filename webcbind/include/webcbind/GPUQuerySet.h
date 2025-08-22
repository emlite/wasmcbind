#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface GPUQuerySet
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GPUQuerySet)
 */
DECLARE_EMLITE_TYPE(GPUQuerySet, em_Val);

/**
 * @brief Calls the `destroy` method. 
*/
jb_Undefined GPUQuerySet_destroy(GPUQuerySet* self );

/**
 * @brief Gets the `type` property. 
*/
GPUQueryType GPUQuerySet_type(const GPUQuerySet *self);

/**
 * @brief Gets the `count` property. 
*/
jb_Any GPUQuerySet_count(const GPUQuerySet *self);

/**
 * @brief Gets the `label` property. 
*/
jb_String GPUQuerySet_label(const GPUQuerySet *self);

/**
 * @brief Sets the `label` property. 
*/
void GPUQuerySet_set_label(GPUQuerySet* self, jb_String * value);

#ifdef __cplusplus
}
#endif
