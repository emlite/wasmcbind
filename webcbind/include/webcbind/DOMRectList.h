#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMRect DOMRect;


/**
 * @brief Interface DOMRectList
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectList)
 */
DECLARE_EMLITE_TYPE(DOMRectList, em_Val);

/**
 * @brief Gets the `length` property. 
*/
unsigned long DOMRectList_length(const DOMRectList *self);

/**
 * @brief Calls the `item` method. 
*/
DOMRect DOMRectList_item(DOMRectList* self , unsigned long index);

#ifdef __cplusplus
}
#endif
