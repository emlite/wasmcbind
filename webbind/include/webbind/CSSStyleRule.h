#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSGroupingRule.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSStyleProperties CSSStyleProperties;
typedef struct StylePropertyMap StylePropertyMap;


/**
 * @brief Interface CSSStyleRule
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleRule)
 */
DECLARE_EMLITE_TYPE(CSSStyleRule, CSSGroupingRule);

/**
 * @brief Gets the `selectorText` property. 
*/
jb_String CSSStyleRule_selectorText(const CSSStyleRule *self);

/**
 * @brief Sets the `selectorText` property. 
*/
void CSSStyleRule_set_selectorText(CSSStyleRule* self, jb_String * value);

/**
 * @brief Gets the `style` property. 
*/
CSSStyleProperties CSSStyleRule_style(const CSSStyleRule *self);

/**
 * @brief Gets the `styleMap` property. 
*/
StylePropertyMap CSSStyleRule_styleMap(const CSSStyleRule *self);

#ifdef __cplusplus
}
#endif
