#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "CSSRule.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSPositionTryDescriptors CSSPositionTryDescriptors;


/**
 * @brief Interface CSSPositionTryRule
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryRule)
 */
DECLARE_EMLITE_TYPE(CSSPositionTryRule, CSSRule);

/**
 * @brief Gets the `name` property. 
*/
jb_String CSSPositionTryRule_name(const CSSPositionTryRule *self);

/**
 * @brief Gets the `style` property. 
*/
CSSPositionTryDescriptors CSSPositionTryRule_style(const CSSPositionTryRule *self);

#ifdef __cplusplus
}
#endif
