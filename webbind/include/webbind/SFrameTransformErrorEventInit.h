#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(SFrameTransformErrorEventInit, EventInit);

SFrameTransformErrorEventType SFrameTransformErrorEventInit_errorType(const SFrameTransformErrorEventInit *self);

void SFrameTransformErrorEventInit_set_errorType(SFrameTransformErrorEventInit* self, SFrameTransformErrorEventType * value);

jb_Any SFrameTransformErrorEventInit_frame(const SFrameTransformErrorEventInit *self);

void SFrameTransformErrorEventInit_set_frame(SFrameTransformErrorEventInit* self, jb_Any * value);

jb_Any SFrameTransformErrorEventInit_keyID(const SFrameTransformErrorEventInit *self);

void SFrameTransformErrorEventInit_set_keyID(SFrameTransformErrorEventInit* self, jb_Any * value);

SFrameTransformErrorEventInit SFrameTransformErrorEventInit_new();

#ifdef __cplusplus
}
#endif
