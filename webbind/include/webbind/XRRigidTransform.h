#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMPointInit DOMPointInit;
typedef struct DOMPointReadOnly DOMPointReadOnly;


/**
 * @brief Interface XRRigidTransform
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRRigidTransform)
 */
DECLARE_EMLITE_TYPE(XRRigidTransform, em_Val);

/**
 * @brief Creates a new `XRRigidTransform` object. 
*/
XRRigidTransform XRRigidTransform_new0();

/**
 * @brief Creates a new `XRRigidTransform` object. 
*/
XRRigidTransform XRRigidTransform_new1(DOMPointInit * position);

/**
 * @brief Creates a new `XRRigidTransform` object. 
*/
XRRigidTransform XRRigidTransform_new2(DOMPointInit * position, DOMPointInit * orientation);

/**
 * @brief Gets the `position` property. 
*/
DOMPointReadOnly XRRigidTransform_position(const XRRigidTransform *self);

/**
 * @brief Gets the `orientation` property. 
*/
DOMPointReadOnly XRRigidTransform_orientation(const XRRigidTransform *self);

/**
 * @brief Gets the `matrix` property. 
*/
jb_Float32Array XRRigidTransform_matrix(const XRRigidTransform *self);

/**
 * @brief Gets the `inverse` property. 
*/
XRRigidTransform XRRigidTransform_inverse(const XRRigidTransform *self);

#ifdef __cplusplus
}
#endif
