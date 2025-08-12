#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSStyleSheet CSSStyleSheet;


/**
 * @brief Interface StyleSheetList
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/StyleSheetList)
 */
DECLARE_EMLITE_TYPE(StyleSheetList, em_Val);

/**
 * @brief Calls the `item` method. 
*/
CSSStyleSheet StyleSheetList_item(StyleSheetList* self , unsigned long index);

/**
 * @brief Gets the `length` property. 
*/
unsigned long StyleSheetList_length(const StyleSheetList *self);

#ifdef __cplusplus
}
#endif
