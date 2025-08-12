#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGNumber SVGNumber;


/**
 * @brief Interface SVGNumberList
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGNumberList)
 */
DECLARE_EMLITE_TYPE(SVGNumberList, em_Val);

/**
 * @brief Gets the `length` property. 
*/
unsigned long SVGNumberList_length(const SVGNumberList *self);

/**
 * @brief Gets the `numberOfItems` property. 
*/
unsigned long SVGNumberList_numberOfItems(const SVGNumberList *self);

/**
 * @brief Calls the `clear` method. 
*/
jb_Undefined SVGNumberList_clear(SVGNumberList* self );

/**
 * @brief Calls the `initialize` method. 
*/
SVGNumber SVGNumberList_initialize(SVGNumberList* self , SVGNumber * newItem);

/**
 * @brief Calls the `getItem` method. 
*/
SVGNumber SVGNumberList_getItem(SVGNumberList* self , unsigned long index);

/**
 * @brief Calls the `insertItemBefore` method. 
*/
SVGNumber SVGNumberList_insertItemBefore(SVGNumberList* self , SVGNumber * newItem, unsigned long index);

/**
 * @brief Calls the `replaceItem` method. 
*/
SVGNumber SVGNumberList_replaceItem(SVGNumberList* self , SVGNumber * newItem, unsigned long index);

/**
 * @brief Calls the `removeItem` method. 
*/
SVGNumber SVGNumberList_removeItem(SVGNumberList* self , unsigned long index);

/**
 * @brief Calls the `appendItem` method. 
*/
SVGNumber SVGNumberList_appendItem(SVGNumberList* self , SVGNumber * newItem);

#ifdef __cplusplus
}
#endif
