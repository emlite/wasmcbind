#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface DOMTokenList
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/DOMTokenList)
 */
DECLARE_EMLITE_TYPE(DOMTokenList, em_Val);

/**
 * @brief Gets the `length` property. 
*/
unsigned long DOMTokenList_length(const DOMTokenList *self);

/**
 * @brief Calls the `item` method. 
*/
jb_String DOMTokenList_item(DOMTokenList* self , unsigned long index);

/**
 * @brief Calls the `contains` method. 
*/
bool DOMTokenList_contains(DOMTokenList* self , jb_String * token);

/**
 * @brief Calls the `add` method. 
*/
jb_Undefined DOMTokenList_add(DOMTokenList* self , jb_String * tokens);

/**
 * @brief Calls the `remove` method. 
*/
jb_Undefined DOMTokenList_remove(DOMTokenList* self , jb_String * tokens);

/**
 * @brief Calls the `toggle` method. 
*/
bool DOMTokenList_toggle0(DOMTokenList* self , jb_String * token);

/**
 * @brief Calls the `toggle` method. 
*/
bool DOMTokenList_toggle1(DOMTokenList* self , jb_String * token, bool force);

/**
 * @brief Calls the `replace` method. 
*/
bool DOMTokenList_replace(DOMTokenList* self , jb_String * token, jb_String * newToken);

/**
 * @brief Calls the `supports` method. 
*/
bool DOMTokenList_supports(DOMTokenList* self , jb_String * token);

/**
 * @brief Gets the `value` property. 
*/
jb_String DOMTokenList_value(const DOMTokenList *self);

/**
 * @brief Sets the `value` property. 
*/
void DOMTokenList_set_value(DOMTokenList* self, jb_String * value);

#ifdef __cplusplus
}
#endif
