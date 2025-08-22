#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type XRLightProbeInit */
DECLARE_EMLITE_TYPE(XRLightProbeInit, em_Val);

/** @brief Getter of the reflectionFormat property */
XRReflectionFormat XRLightProbeInit_reflectionFormat(const XRLightProbeInit *self);

/** @brief Setter of the reflectionFormat property */
void XRLightProbeInit_set_reflectionFormat(XRLightProbeInit* self, XRReflectionFormat * value);

/** @brief Constructor of the XRLightProbeInit dictionary type */
XRLightProbeInit XRLightProbeInit_new();

#ifdef __cplusplus
}
#endif
