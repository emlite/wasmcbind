#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "CSSRule.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSFunctionDescriptors CSSFunctionDescriptors;


/**
 * @brief Interface CSSFunctionDeclarations
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSFunctionDeclarations)
 */
DECLARE_EMLITE_TYPE(CSSFunctionDeclarations, CSSRule);

/**
 * @brief Gets the `style` property. 
*/
CSSFunctionDescriptors CSSFunctionDeclarations_style(const CSSFunctionDeclarations *self);

#ifdef __cplusplus
}
#endif
