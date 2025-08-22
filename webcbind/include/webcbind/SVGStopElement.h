#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "SVGElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedNumber SVGAnimatedNumber;


/**
 * @brief Interface SVGStopElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGStopElement)
 */
DECLARE_EMLITE_TYPE(SVGStopElement, SVGElement);

/**
 * @brief Gets the `offset` property. 
*/
SVGAnimatedNumber SVGStopElement_offset(const SVGStopElement *self);

#ifdef __cplusplus
}
#endif
