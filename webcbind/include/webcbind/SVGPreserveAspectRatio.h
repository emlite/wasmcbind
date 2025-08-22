#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface SVGPreserveAspectRatio
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SVGPreserveAspectRatio)
 */
DECLARE_EMLITE_TYPE(SVGPreserveAspectRatio, em_Val);

/**
 * @brief Gets the `align` property. 
*/
unsigned short SVGPreserveAspectRatio_align(const SVGPreserveAspectRatio *self);

/**
 * @brief Sets the `align` property. 
*/
void SVGPreserveAspectRatio_set_align(SVGPreserveAspectRatio* self, unsigned short value);

/**
 * @brief Gets the `meetOrSlice` property. 
*/
unsigned short SVGPreserveAspectRatio_meetOrSlice(const SVGPreserveAspectRatio *self);

/**
 * @brief Sets the `meetOrSlice` property. 
*/
void SVGPreserveAspectRatio_set_meetOrSlice(SVGPreserveAspectRatio* self, unsigned short value);

#ifdef __cplusplus
}
#endif
