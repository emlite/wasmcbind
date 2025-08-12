#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface DOMStringList
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/DOMStringList)
 */
DECLARE_EMLITE_TYPE(DOMStringList, em_Val);

/**
 * @brief Gets the `length` property. 
*/
unsigned long DOMStringList_length(const DOMStringList *self);

/**
 * @brief Calls the `item` method. 
*/
jb_String DOMStringList_item(DOMStringList* self , unsigned long index);

/**
 * @brief Calls the `contains` method. 
*/
bool DOMStringList_contains(DOMStringList* self , jb_String * string);

#ifdef __cplusplus
}
#endif
