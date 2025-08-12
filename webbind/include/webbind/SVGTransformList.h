#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGTransform SVGTransform;
typedef struct DOMMatrix2DInit DOMMatrix2DInit;


/**
 * @brief Interface SVGTransformList
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGTransformList)
 */
DECLARE_EMLITE_TYPE(SVGTransformList, em_Val);

/**
 * @brief Gets the `length` property. 
*/
unsigned long SVGTransformList_length(const SVGTransformList *self);

/**
 * @brief Gets the `numberOfItems` property. 
*/
unsigned long SVGTransformList_numberOfItems(const SVGTransformList *self);

/**
 * @brief Calls the `clear` method. 
*/
jb_Undefined SVGTransformList_clear(SVGTransformList* self );

/**
 * @brief Calls the `initialize` method. 
*/
SVGTransform SVGTransformList_initialize(SVGTransformList* self , SVGTransform * newItem);

/**
 * @brief Calls the `getItem` method. 
*/
SVGTransform SVGTransformList_getItem(SVGTransformList* self , unsigned long index);

/**
 * @brief Calls the `insertItemBefore` method. 
*/
SVGTransform SVGTransformList_insertItemBefore(SVGTransformList* self , SVGTransform * newItem, unsigned long index);

/**
 * @brief Calls the `replaceItem` method. 
*/
SVGTransform SVGTransformList_replaceItem(SVGTransformList* self , SVGTransform * newItem, unsigned long index);

/**
 * @brief Calls the `removeItem` method. 
*/
SVGTransform SVGTransformList_removeItem(SVGTransformList* self , unsigned long index);

/**
 * @brief Calls the `appendItem` method. 
*/
SVGTransform SVGTransformList_appendItem(SVGTransformList* self , SVGTransform * newItem);

/**
 * @brief Calls the `createSVGTransformFromMatrix` method. 
*/
SVGTransform SVGTransformList_createSVGTransformFromMatrix0(SVGTransformList* self );

/**
 * @brief Calls the `createSVGTransformFromMatrix` method. 
*/
SVGTransform SVGTransformList_createSVGTransformFromMatrix1(SVGTransformList* self , DOMMatrix2DInit * matrix);

/**
 * @brief Calls the `consolidate` method. 
*/
SVGTransform SVGTransformList_consolidate(SVGTransformList* self );

#ifdef __cplusplus
}
#endif
