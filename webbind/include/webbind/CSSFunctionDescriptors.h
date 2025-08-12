#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSStyleDeclaration.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSFunctionDescriptors
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSFunctionDescriptors)
 */
DECLARE_EMLITE_TYPE(CSSFunctionDescriptors, CSSStyleDeclaration);

/**
 * @brief Gets the `result` property. 
*/
jb_String CSSFunctionDescriptors_result(const CSSFunctionDescriptors *self);

/**
 * @brief Sets the `result` property. 
*/
void CSSFunctionDescriptors_set_result(CSSFunctionDescriptors* self, jb_String * value);

#ifdef __cplusplus
}
#endif
