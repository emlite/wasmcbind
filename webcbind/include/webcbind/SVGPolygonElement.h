#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "SVGGeometryElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGPointList SVGPointList;


/**
 * @brief Interface SVGPolygonElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGPolygonElement)
 */
DECLARE_EMLITE_TYPE(SVGPolygonElement, SVGGeometryElement);

/**
 * @brief Gets the `points` property. 
*/
SVGPointList SVGPolygonElement_points(const SVGPolygonElement *self);

/**
 * @brief Gets the `animatedPoints` property. 
*/
SVGPointList SVGPolygonElement_animatedPoints(const SVGPolygonElement *self);

#ifdef __cplusplus
}
#endif
