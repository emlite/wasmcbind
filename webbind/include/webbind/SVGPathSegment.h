#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface SVGPathSegment
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGPathSegment)
 */
DECLARE_EMLITE_TYPE(SVGPathSegment, em_Val);

/**
 * @brief Gets the `type` property. 
*/
jb_String SVGPathSegment_type(const SVGPathSegment *self);

/**
 * @brief Sets the `type` property. 
*/
void SVGPathSegment_set_type(SVGPathSegment* self, jb_String * value);

/**
 * @brief Gets the `values` property. 
*/
jb_Array SVGPathSegment_values(const SVGPathSegment *self);

/**
 * @brief Sets the `values` property. 
*/
void SVGPathSegment_set_values(SVGPathSegment* self, jb_Array * value);

#ifdef __cplusplus
}
#endif
