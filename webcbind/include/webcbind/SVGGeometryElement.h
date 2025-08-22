#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "SVGGraphicsElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedNumber SVGAnimatedNumber;
typedef struct DOMPointInit DOMPointInit;
typedef struct DOMPoint DOMPoint;


/**
 * @brief Interface SVGGeometryElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGGeometryElement)
 */
DECLARE_EMLITE_TYPE(SVGGeometryElement, SVGGraphicsElement);

/**
 * @brief Gets the `pathLength` property. 
*/
SVGAnimatedNumber SVGGeometryElement_pathLength(const SVGGeometryElement *self);

/**
 * @brief Calls the `isPointInFill` method. 
*/
bool SVGGeometryElement_isPointInFill0(SVGGeometryElement* self );

/**
 * @brief Calls the `isPointInFill` method. 
*/
bool SVGGeometryElement_isPointInFill1(SVGGeometryElement* self , DOMPointInit * point);

/**
 * @brief Calls the `isPointInStroke` method. 
*/
bool SVGGeometryElement_isPointInStroke0(SVGGeometryElement* self );

/**
 * @brief Calls the `isPointInStroke` method. 
*/
bool SVGGeometryElement_isPointInStroke1(SVGGeometryElement* self , DOMPointInit * point);

/**
 * @brief Calls the `getTotalLength` method. 
*/
float SVGGeometryElement_getTotalLength(SVGGeometryElement* self );

/**
 * @brief Calls the `getPointAtLength` method. 
*/
DOMPoint SVGGeometryElement_getPointAtLength(SVGGeometryElement* self , float distance);

#ifdef __cplusplus
}
#endif
