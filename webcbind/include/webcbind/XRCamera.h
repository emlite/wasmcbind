#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface XRCamera
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRCamera)
 */
DECLARE_EMLITE_TYPE(XRCamera, em_Val);

/**
 * @brief Gets the `width` property. 
*/
unsigned long XRCamera_width(const XRCamera *self);

/**
 * @brief Gets the `height` property. 
*/
unsigned long XRCamera_height(const XRCamera *self);

#ifdef __cplusplus
}
#endif
