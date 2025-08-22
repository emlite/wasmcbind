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
 * @brief Interface SVGPolylineElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGPolylineElement)
 */
DECLARE_EMLITE_TYPE(SVGPolylineElement, SVGGeometryElement);

/**
 * @brief Gets the `points` property. 
*/
SVGPointList SVGPolylineElement_points(const SVGPolylineElement *self);

/**
 * @brief Gets the `animatedPoints` property. 
*/
SVGPointList SVGPolylineElement_animatedPoints(const SVGPolylineElement *self);

#ifdef __cplusplus
}
#endif
