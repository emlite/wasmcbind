#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "CSSGroupingRule.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSPageDescriptors CSSPageDescriptors;


/**
 * @brief Interface CSSPageRule
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageRule)
 */
DECLARE_EMLITE_TYPE(CSSPageRule, CSSGroupingRule);

/**
 * @brief Gets the `selectorText` property. 
*/
jb_String CSSPageRule_selectorText(const CSSPageRule *self);

/**
 * @brief Sets the `selectorText` property. 
*/
void CSSPageRule_set_selectorText(CSSPageRule* self, jb_String * value);

/**
 * @brief Gets the `style` property. 
*/
CSSPageDescriptors CSSPageRule_style(const CSSPageRule *self);

#ifdef __cplusplus
}
#endif
