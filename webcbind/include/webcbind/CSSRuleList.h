#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSRule CSSRule;


/**
 * @brief Interface CSSRuleList
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSRuleList)
 */
DECLARE_EMLITE_TYPE(CSSRuleList, em_Val);

/**
 * @brief Calls the `item` method. 
*/
CSSRule CSSRuleList_item(CSSRuleList* self , unsigned long index);

/**
 * @brief Gets the `length` property. 
*/
unsigned long CSSRuleList_length(const CSSRuleList *self);

#ifdef __cplusplus
}
#endif
