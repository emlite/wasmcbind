#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRInputSourceEventInit XRInputSourceEventInit;
typedef struct XRFrame XRFrame;
typedef struct XRInputSource XRInputSource;

DECLARE_EMLITE_TYPE(XRInputSourceEvent, Event);

XRInputSourceEvent XRInputSourceEvent_new(jb_String * type, XRInputSourceEventInit * eventInitDict);

XRFrame XRInputSourceEvent_frame(const XRInputSourceEvent *self);

XRInputSource XRInputSourceEvent_inputSource(const XRInputSourceEvent *self);

#ifdef __cplusplus
}
#endif
