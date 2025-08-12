#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMPoint DOMPoint;


/**
 * @brief Interface SVGPointList
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGPointList)
 */
DECLARE_EMLITE_TYPE(SVGPointList, em_Val);

/**
 * @brief Gets the `length` property. 
*/
unsigned long SVGPointList_length(const SVGPointList *self);

/**
 * @brief Gets the `numberOfItems` property. 
*/
unsigned long SVGPointList_numberOfItems(const SVGPointList *self);

/**
 * @brief Calls the `clear` method. 
*/
jb_Undefined SVGPointList_clear(SVGPointList* self );

/**
 * @brief Calls the `initialize` method. 
*/
DOMPoint SVGPointList_initialize(SVGPointList* self , DOMPoint * newItem);

/**
 * @brief Calls the `getItem` method. 
*/
DOMPoint SVGPointList_getItem(SVGPointList* self , unsigned long index);

/**
 * @brief Calls the `insertItemBefore` method. 
*/
DOMPoint SVGPointList_insertItemBefore(SVGPointList* self , DOMPoint * newItem, unsigned long index);

/**
 * @brief Calls the `replaceItem` method. 
*/
DOMPoint SVGPointList_replaceItem(SVGPointList* self , DOMPoint * newItem, unsigned long index);

/**
 * @brief Calls the `removeItem` method. 
*/
DOMPoint SVGPointList_removeItem(SVGPointList* self , unsigned long index);

/**
 * @brief Calls the `appendItem` method. 
*/
DOMPoint SVGPointList_appendItem(SVGPointList* self , DOMPoint * newItem);

#ifdef __cplusplus
}
#endif
