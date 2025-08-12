#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSRule.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSRuleList CSSRuleList;


/**
 * @brief Interface CSSGroupingRule
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSGroupingRule)
 */
DECLARE_EMLITE_TYPE(CSSGroupingRule, CSSRule);

/**
 * @brief Gets the `cssRules` property. 
*/
CSSRuleList CSSGroupingRule_cssRules(const CSSGroupingRule *self);

/**
 * @brief Calls the `insertRule` method. 
*/
unsigned long CSSGroupingRule_insertRule0(CSSGroupingRule* self , jb_String * rule);

/**
 * @brief Calls the `insertRule` method. 
*/
unsigned long CSSGroupingRule_insertRule1(CSSGroupingRule* self , jb_String * rule, unsigned long index);

/**
 * @brief Calls the `deleteRule` method. 
*/
jb_Undefined CSSGroupingRule_deleteRule(CSSGroupingRule* self , unsigned long index);

#ifdef __cplusplus
}
#endif
