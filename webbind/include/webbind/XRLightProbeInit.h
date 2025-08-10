#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(XRLightProbeInit, em_Val);

XRReflectionFormat XRLightProbeInit_reflectionFormat(const XRLightProbeInit *self);

void XRLightProbeInit_set_reflectionFormat(XRLightProbeInit* self, XRReflectionFormat * value);

XRLightProbeInit XRLightProbeInit_new();

#ifdef __cplusplus
}
#endif
