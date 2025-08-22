#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRSpace XRSpace;


/**
 * @brief Interface XRLightProbe
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRLightProbe)
 */
DECLARE_EMLITE_TYPE(XRLightProbe, EventTarget);

/**
 * @brief Gets the `probeSpace` property. 
*/
XRSpace XRLightProbe_probeSpace(const XRLightProbe *self);

/**
 * @brief Gets the `onreflectionchange` property. 
*/
jb_Any XRLightProbe_onreflectionchange(const XRLightProbe *self);

/**
 * @brief Sets the `onreflectionchange` property. 
*/
void XRLightProbe_set_onreflectionchange(XRLightProbe* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
