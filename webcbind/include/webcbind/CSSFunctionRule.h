#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "CSSGroupingRule.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FunctionParameter FunctionParameter;


/**
 * @brief Interface CSSFunctionRule
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSFunctionRule)
 */
DECLARE_EMLITE_TYPE(CSSFunctionRule, CSSGroupingRule);

/**
 * @brief Gets the `name` property. 
*/
jb_String CSSFunctionRule_name(const CSSFunctionRule *self);

/**
 * @brief Calls the `getParameters` method. 
*/
jb_Array CSSFunctionRule_getParameters(CSSFunctionRule* self );

/**
 * @brief Gets the `returnType` property. 
*/
jb_String CSSFunctionRule_returnType(const CSSFunctionRule *self);

#ifdef __cplusplus
}
#endif
