#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRRigidTransform XRRigidTransform;
typedef struct DOMPointReadOnly DOMPointReadOnly;


/**
 * @brief Interface XRRay
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRRay)
 */
DECLARE_EMLITE_TYPE(XRRay, em_Val);

/**
 * @brief Creates a new `XRRay` object. 
*/
XRRay XRRay_new(XRRigidTransform * transform);

/**
 * @brief Gets the `origin` property. 
*/
DOMPointReadOnly XRRay_origin(const XRRay *self);

/**
 * @brief Gets the `direction` property. 
*/
DOMPointReadOnly XRRay_direction(const XRRay *self);

/**
 * @brief Gets the `matrix` property. 
*/
jb_Float32Array XRRay_matrix(const XRRay *self);

#ifdef __cplusplus
}
#endif
