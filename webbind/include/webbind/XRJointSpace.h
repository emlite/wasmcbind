#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "XRSpace.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface XRJointSpace
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRJointSpace)
 */
DECLARE_EMLITE_TYPE(XRJointSpace, XRSpace);

/**
 * @brief Gets the `jointName` property. 
*/
XRHandJoint XRJointSpace_jointName(const XRJointSpace *self);

#ifdef __cplusplus
}
#endif
