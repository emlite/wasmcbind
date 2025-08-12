#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SVGGradientElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedLength SVGAnimatedLength;


/**
 * @brief Interface SVGRadialGradientElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGRadialGradientElement)
 */
DECLARE_EMLITE_TYPE(SVGRadialGradientElement, SVGGradientElement);

/**
 * @brief Gets the `cx` property. 
*/
SVGAnimatedLength SVGRadialGradientElement_cx(const SVGRadialGradientElement *self);

/**
 * @brief Gets the `cy` property. 
*/
SVGAnimatedLength SVGRadialGradientElement_cy(const SVGRadialGradientElement *self);

/**
 * @brief Gets the `r` property. 
*/
SVGAnimatedLength SVGRadialGradientElement_r(const SVGRadialGradientElement *self);

/**
 * @brief Gets the `fx` property. 
*/
SVGAnimatedLength SVGRadialGradientElement_fx(const SVGRadialGradientElement *self);

/**
 * @brief Gets the `fy` property. 
*/
SVGAnimatedLength SVGRadialGradientElement_fy(const SVGRadialGradientElement *self);

/**
 * @brief Gets the `fr` property. 
*/
SVGAnimatedLength SVGRadialGradientElement_fr(const SVGRadialGradientElement *self);

#ifdef __cplusplus
}
#endif
