#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface MLOperand
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MLOperand)
 */
DECLARE_EMLITE_TYPE(MLOperand, em_Val);

/**
 * @brief Gets the `dataType` property. 
*/
MLOperandDataType MLOperand_dataType(const MLOperand *self);

/**
 * @brief Gets the `shape` property. 
*/
jb_Array MLOperand_shape(const MLOperand *self);

#ifdef __cplusplus
}
#endif
