#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface SVGStringList
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGStringList)
 */
DECLARE_EMLITE_TYPE(SVGStringList, em_Val);

/**
 * @brief Gets the `length` property. 
*/
unsigned long SVGStringList_length(const SVGStringList *self);

/**
 * @brief Gets the `numberOfItems` property. 
*/
unsigned long SVGStringList_numberOfItems(const SVGStringList *self);

/**
 * @brief Calls the `clear` method. 
*/
jb_Undefined SVGStringList_clear(SVGStringList* self );

/**
 * @brief Calls the `initialize` method. 
*/
jb_String SVGStringList_initialize(SVGStringList* self , jb_String * newItem);

/**
 * @brief Calls the `getItem` method. 
*/
jb_String SVGStringList_getItem(SVGStringList* self , unsigned long index);

/**
 * @brief Calls the `insertItemBefore` method. 
*/
jb_String SVGStringList_insertItemBefore(SVGStringList* self , jb_String * newItem, unsigned long index);

/**
 * @brief Calls the `replaceItem` method. 
*/
jb_String SVGStringList_replaceItem(SVGStringList* self , jb_String * newItem, unsigned long index);

/**
 * @brief Calls the `removeItem` method. 
*/
jb_String SVGStringList_removeItem(SVGStringList* self , unsigned long index);

/**
 * @brief Calls the `appendItem` method. 
*/
jb_String SVGStringList_appendItem(SVGStringList* self , jb_String * newItem);

#ifdef __cplusplus
}
#endif
