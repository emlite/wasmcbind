#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSStyleSheet CSSStyleSheet;


/**
 * @brief Interface CSSRule
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSRule)
 */
DECLARE_EMLITE_TYPE(CSSRule, em_Val);

/**
 * @brief Gets the `cssText` property. 
*/
jb_String CSSRule_cssText(const CSSRule *self);

/**
 * @brief Sets the `cssText` property. 
*/
void CSSRule_set_cssText(CSSRule* self, jb_String * value);

/**
 * @brief Gets the `parentRule` property. 
*/
CSSRule CSSRule_parentRule(const CSSRule *self);

/**
 * @brief Gets the `parentStyleSheet` property. 
*/
CSSStyleSheet CSSRule_parentStyleSheet(const CSSRule *self);

/**
 * @brief Gets the `type` property. 
*/
unsigned short CSSRule_type(const CSSRule *self);

#ifdef __cplusplus
}
#endif
