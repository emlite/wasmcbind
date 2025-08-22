#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "SVGElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedString SVGAnimatedString;


/**
 * @brief Interface SVGFEMergeNodeElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMergeNodeElement)
 */
DECLARE_EMLITE_TYPE(SVGFEMergeNodeElement, SVGElement);

/**
 * @brief Gets the `in1` property. 
*/
SVGAnimatedString SVGFEMergeNodeElement_in1(const SVGFEMergeNodeElement *self);

#ifdef __cplusplus
}
#endif
