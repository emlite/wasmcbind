#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGLength SVGLength;


/**
 * @brief Interface SVGLengthList
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGLengthList)
 */
DECLARE_EMLITE_TYPE(SVGLengthList, em_Val);

/**
 * @brief Gets the `length` property. 
*/
unsigned long SVGLengthList_length(const SVGLengthList *self);

/**
 * @brief Gets the `numberOfItems` property. 
*/
unsigned long SVGLengthList_numberOfItems(const SVGLengthList *self);

/**
 * @brief Calls the `clear` method. 
*/
jb_Undefined SVGLengthList_clear(SVGLengthList* self );

/**
 * @brief Calls the `initialize` method. 
*/
SVGLength SVGLengthList_initialize(SVGLengthList* self , SVGLength * newItem);

/**
 * @brief Calls the `getItem` method. 
*/
SVGLength SVGLengthList_getItem(SVGLengthList* self , unsigned long index);

/**
 * @brief Calls the `insertItemBefore` method. 
*/
SVGLength SVGLengthList_insertItemBefore(SVGLengthList* self , SVGLength * newItem, unsigned long index);

/**
 * @brief Calls the `replaceItem` method. 
*/
SVGLength SVGLengthList_replaceItem(SVGLengthList* self , SVGLength * newItem, unsigned long index);

/**
 * @brief Calls the `removeItem` method. 
*/
SVGLength SVGLengthList_removeItem(SVGLengthList* self , unsigned long index);

/**
 * @brief Calls the `appendItem` method. 
*/
SVGLength SVGLengthList_appendItem(SVGLengthList* self , SVGLength * newItem);

#ifdef __cplusplus
}
#endif
