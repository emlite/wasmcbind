#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "SVGGraphicsElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface SVGGElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGGElement)
 */
DECLARE_EMLITE_TYPE(SVGGElement, SVGGraphicsElement);

#ifdef __cplusplus
}
#endif
