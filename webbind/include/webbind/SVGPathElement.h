#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SVGGeometryElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedNumber SVGAnimatedNumber;
typedef struct DOMPoint DOMPoint;
typedef struct SVGPathSegment SVGPathSegment;
typedef struct SVGPathDataSettings SVGPathDataSettings;


/**
 * @brief Interface SVGPathElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGPathElement)
 */
DECLARE_EMLITE_TYPE(SVGPathElement, SVGGeometryElement);

/**
 * @brief Gets the `pathLength` property. 
*/
SVGAnimatedNumber SVGPathElement_pathLength(const SVGPathElement *self);

/**
 * @brief Calls the `getTotalLength` method. 
*/
float SVGPathElement_getTotalLength(SVGPathElement* self );

/**
 * @brief Calls the `getPointAtLength` method. 
*/
DOMPoint SVGPathElement_getPointAtLength(SVGPathElement* self , float distance);

/**
 * @brief Calls the `getPathSegmentAtLength` method. 
*/
SVGPathSegment SVGPathElement_getPathSegmentAtLength(SVGPathElement* self , float distance);

/**
 * @brief Calls the `getPathData` method. 
*/
jb_Array SVGPathElement_getPathData0(SVGPathElement* self );

/**
 * @brief Calls the `getPathData` method. 
*/
jb_Array SVGPathElement_getPathData1(SVGPathElement* self , SVGPathDataSettings * settings);

/**
 * @brief Calls the `setPathData` method. 
*/
jb_Undefined SVGPathElement_setPathData(SVGPathElement* self , jb_Array * pathData);

#ifdef __cplusplus
}
#endif
