#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(XRSessionInit, em_Val);

jb_Array XRSessionInit_requiredFeatures(const XRSessionInit *self);

void XRSessionInit_set_requiredFeatures(XRSessionInit* self, jb_Array * value);

jb_Array XRSessionInit_optionalFeatures(const XRSessionInit *self);

void XRSessionInit_set_optionalFeatures(XRSessionInit* self, jb_Array * value);

XRSessionInit XRSessionInit_new();

#ifdef __cplusplus
}
#endif
