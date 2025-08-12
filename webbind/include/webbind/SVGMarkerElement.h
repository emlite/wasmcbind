#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SVGElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedLength SVGAnimatedLength;
typedef struct SVGAnimatedEnumeration SVGAnimatedEnumeration;
typedef struct SVGAnimatedAngle SVGAnimatedAngle;
typedef struct SVGAngle SVGAngle;
typedef struct SVGAnimatedRect SVGAnimatedRect;
typedef struct SVGAnimatedPreserveAspectRatio SVGAnimatedPreserveAspectRatio;


/**
 * @brief Interface SVGMarkerElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGMarkerElement)
 */
DECLARE_EMLITE_TYPE(SVGMarkerElement, SVGElement);

/**
 * @brief Gets the `refX` property. 
*/
SVGAnimatedLength SVGMarkerElement_refX(const SVGMarkerElement *self);

/**
 * @brief Gets the `refY` property. 
*/
SVGAnimatedLength SVGMarkerElement_refY(const SVGMarkerElement *self);

/**
 * @brief Gets the `markerUnits` property. 
*/
SVGAnimatedEnumeration SVGMarkerElement_markerUnits(const SVGMarkerElement *self);

/**
 * @brief Gets the `markerWidth` property. 
*/
SVGAnimatedLength SVGMarkerElement_markerWidth(const SVGMarkerElement *self);

/**
 * @brief Gets the `markerHeight` property. 
*/
SVGAnimatedLength SVGMarkerElement_markerHeight(const SVGMarkerElement *self);

/**
 * @brief Gets the `orientType` property. 
*/
SVGAnimatedEnumeration SVGMarkerElement_orientType(const SVGMarkerElement *self);

/**
 * @brief Gets the `orientAngle` property. 
*/
SVGAnimatedAngle SVGMarkerElement_orientAngle(const SVGMarkerElement *self);

/**
 * @brief Gets the `orient` property. 
*/
jb_String SVGMarkerElement_orient(const SVGMarkerElement *self);

/**
 * @brief Sets the `orient` property. 
*/
void SVGMarkerElement_set_orient(SVGMarkerElement* self, jb_String * value);

/**
 * @brief Calls the `setOrientToAuto` method. 
*/
jb_Undefined SVGMarkerElement_setOrientToAuto(SVGMarkerElement* self );

/**
 * @brief Calls the `setOrientToAngle` method. 
*/
jb_Undefined SVGMarkerElement_setOrientToAngle(SVGMarkerElement* self , SVGAngle * angle);

/**
 * @brief Gets the `viewBox` property. 
*/
SVGAnimatedRect SVGMarkerElement_viewBox(const SVGMarkerElement *self);

/**
 * @brief Gets the `preserveAspectRatio` property. 
*/
SVGAnimatedPreserveAspectRatio SVGMarkerElement_preserveAspectRatio(const SVGMarkerElement *self);

#ifdef __cplusplus
}
#endif
