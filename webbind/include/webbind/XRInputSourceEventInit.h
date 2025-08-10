#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRFrame XRFrame;
typedef struct XRInputSource XRInputSource;

DECLARE_EMLITE_TYPE(XRInputSourceEventInit, EventInit);

XRFrame XRInputSourceEventInit_frame(const XRInputSourceEventInit *self);

void XRInputSourceEventInit_set_frame(XRInputSourceEventInit* self, XRFrame * value);

XRInputSource XRInputSourceEventInit_inputSource(const XRInputSourceEventInit *self);

void XRInputSourceEventInit_set_inputSource(XRInputSourceEventInit* self, XRInputSource * value);

XRInputSourceEventInit XRInputSourceEventInit_new();

#ifdef __cplusplus
}
#endif
