#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface MLTensor
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MLTensor)
 */
DECLARE_EMLITE_TYPE(MLTensor, em_Val);

/**
 * @brief Gets the `dataType` property. 
*/
MLOperandDataType MLTensor_dataType(const MLTensor *self);

/**
 * @brief Gets the `shape` property. 
*/
jb_Array MLTensor_shape(const MLTensor *self);

/**
 * @brief Gets the `readable` property. 
*/
bool MLTensor_readable(const MLTensor *self);

/**
 * @brief Gets the `writable` property. 
*/
bool MLTensor_writable(const MLTensor *self);

/**
 * @brief Gets the `constant` property. 
*/
bool MLTensor_constant(const MLTensor *self);

/**
 * @brief Calls the `destroy` method. 
*/
jb_Undefined MLTensor_destroy(MLTensor* self );

#ifdef __cplusplus
}
#endif
