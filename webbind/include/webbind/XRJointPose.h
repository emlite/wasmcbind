#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "XRPose.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface XRJointPose
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRJointPose)
 */
DECLARE_EMLITE_TYPE(XRJointPose, XRPose);

/**
 * @brief Gets the `radius` property. 
*/
float XRJointPose_radius(const XRJointPose *self);

#ifdef __cplusplus
}
#endif
