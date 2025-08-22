#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "CSSRule.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSStyleProperties CSSStyleProperties;


/**
 * @brief Interface CSSKeyframeRule
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSKeyframeRule)
 */
DECLARE_EMLITE_TYPE(CSSKeyframeRule, CSSRule);

/**
 * @brief Gets the `keyText` property. 
*/
jb_String CSSKeyframeRule_keyText(const CSSKeyframeRule *self);

/**
 * @brief Sets the `keyText` property. 
*/
void CSSKeyframeRule_set_keyText(CSSKeyframeRule* self, jb_String * value);

/**
 * @brief Gets the `style` property. 
*/
CSSStyleProperties CSSKeyframeRule_style(const CSSKeyframeRule *self);

#ifdef __cplusplus
}
#endif
