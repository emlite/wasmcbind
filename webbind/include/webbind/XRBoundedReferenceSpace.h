#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "XRReferenceSpace.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMPointReadOnly DOMPointReadOnly;


/**
 * @brief Interface XRBoundedReferenceSpace
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRBoundedReferenceSpace)
 */
DECLARE_EMLITE_TYPE(XRBoundedReferenceSpace, XRReferenceSpace);

/**
 * @brief Gets the `boundsGeometry` property. 
*/
jb_Array XRBoundedReferenceSpace_boundsGeometry(const XRBoundedReferenceSpace *self);

#ifdef __cplusplus
}
#endif
