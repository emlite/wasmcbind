#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface XRViewport
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRViewport)
 */
DECLARE_EMLITE_TYPE(XRViewport, em_Val);

/**
 * @brief Gets the `x` property. 
*/
long XRViewport_x(const XRViewport *self);

/**
 * @brief Gets the `y` property. 
*/
long XRViewport_y(const XRViewport *self);

/**
 * @brief Gets the `width` property. 
*/
long XRViewport_width(const XRViewport *self);

/**
 * @brief Gets the `height` property. 
*/
long XRViewport_height(const XRViewport *self);

#ifdef __cplusplus
}
#endif
