#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSRule.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSRuleList CSSRuleList;
typedef struct CSSKeyframeRule CSSKeyframeRule;


/**
 * @brief Interface CSSKeyframesRule
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSKeyframesRule)
 */
DECLARE_EMLITE_TYPE(CSSKeyframesRule, CSSRule);

/**
 * @brief Gets the `name` property. 
*/
jb_String CSSKeyframesRule_name(const CSSKeyframesRule *self);

/**
 * @brief Sets the `name` property. 
*/
void CSSKeyframesRule_set_name(CSSKeyframesRule* self, jb_String * value);

/**
 * @brief Gets the `cssRules` property. 
*/
CSSRuleList CSSKeyframesRule_cssRules(const CSSKeyframesRule *self);

/**
 * @brief Gets the `length` property. 
*/
unsigned long CSSKeyframesRule_length(const CSSKeyframesRule *self);

/**
 * @brief Calls the `appendRule` method. 
*/
jb_Undefined CSSKeyframesRule_appendRule(CSSKeyframesRule* self , jb_String * rule);

/**
 * @brief Calls the `deleteRule` method. 
*/
jb_Undefined CSSKeyframesRule_deleteRule(CSSKeyframesRule* self , jb_String * select);

/**
 * @brief Calls the `findRule` method. 
*/
CSSKeyframeRule CSSKeyframesRule_findRule(CSSKeyframesRule* self , jb_String * select);

#ifdef __cplusplus
}
#endif
