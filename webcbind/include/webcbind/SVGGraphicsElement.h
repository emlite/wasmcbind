#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "SVGElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedTransformList SVGAnimatedTransformList;
typedef struct DOMRect DOMRect;
typedef struct SVGBoundingBoxOptions SVGBoundingBoxOptions;
typedef struct DOMMatrix DOMMatrix;
typedef struct SVGStringList SVGStringList;


/**
 * @brief Interface SVGGraphicsElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGGraphicsElement)
 */
DECLARE_EMLITE_TYPE(SVGGraphicsElement, SVGElement);

/**
 * @brief Gets the `transform` property. 
*/
SVGAnimatedTransformList SVGGraphicsElement_transform(const SVGGraphicsElement *self);

/**
 * @brief Calls the `getBBox` method. 
*/
DOMRect SVGGraphicsElement_getBBox0(SVGGraphicsElement* self );

/**
 * @brief Calls the `getBBox` method. 
*/
DOMRect SVGGraphicsElement_getBBox1(SVGGraphicsElement* self , SVGBoundingBoxOptions * options);

/**
 * @brief Calls the `getCTM` method. 
*/
DOMMatrix SVGGraphicsElement_getCTM(SVGGraphicsElement* self );

/**
 * @brief Calls the `getScreenCTM` method. 
*/
DOMMatrix SVGGraphicsElement_getScreenCTM(SVGGraphicsElement* self );

/**
 * @brief Gets the `requiredExtensions` property. 
*/
SVGStringList SVGGraphicsElement_requiredExtensions(const SVGGraphicsElement *self);

/**
 * @brief Gets the `systemLanguage` property. 
*/
SVGStringList SVGGraphicsElement_systemLanguage(const SVGGraphicsElement *self);

#ifdef __cplusplus
}
#endif
