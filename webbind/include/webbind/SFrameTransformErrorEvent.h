#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SFrameTransformErrorEventInit SFrameTransformErrorEventInit;

DECLARE_EMLITE_TYPE(SFrameTransformErrorEvent, Event);

SFrameTransformErrorEvent SFrameTransformErrorEvent_new(jb_String * type, SFrameTransformErrorEventInit * eventInitDict);

SFrameTransformErrorEventType SFrameTransformErrorEvent_errorType(const SFrameTransformErrorEvent *self);

jb_Any SFrameTransformErrorEvent_keyID(const SFrameTransformErrorEvent *self);

jb_Any SFrameTransformErrorEvent_frame(const SFrameTransformErrorEvent *self);

#ifdef __cplusplus
}
#endif
