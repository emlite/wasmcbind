#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(XRDOMOverlayState, em_Val);

XRDOMOverlayType XRDOMOverlayState_type(const XRDOMOverlayState *self);

void XRDOMOverlayState_set_type(XRDOMOverlayState* self, XRDOMOverlayType * value);

XRDOMOverlayState XRDOMOverlayState_new();

#ifdef __cplusplus
}
#endif
