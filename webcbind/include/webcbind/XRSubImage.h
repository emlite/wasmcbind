#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRViewport XRViewport;


/**
 * @brief Interface XRSubImage
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRSubImage)
 */
DECLARE_EMLITE_TYPE(XRSubImage, em_Val);

/**
 * @brief Gets the `viewport` property. 
*/
XRViewport XRSubImage_viewport(const XRSubImage *self);

#ifdef __cplusplus
}
#endif
