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
 * @brief Interface XRPose
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRPose)
 */
DECLARE_EMLITE_TYPE(XRPose, em_Val);

/**
 * @brief Gets the `transform` property. 
*/
XRRigidTransform XRPose_transform(const XRPose *self);

/**
 * @brief Gets the `linearVelocity` property. 
*/
DOMPointReadOnly XRPose_linearVelocity(const XRPose *self);

/**
 * @brief Gets the `angularVelocity` property. 
*/
DOMPointReadOnly XRPose_angularVelocity(const XRPose *self);

/**
 * @brief Gets the `emulatedPosition` property. 
*/
bool XRPose_emulatedPosition(const XRPose *self);

#ifdef __cplusplus
}
#endif
