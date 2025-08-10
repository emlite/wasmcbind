#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCMediaSourceStats.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCVideoSourceStats, RTCMediaSourceStats);

unsigned long RTCVideoSourceStats_width(const RTCVideoSourceStats *self);

void RTCVideoSourceStats_set_width(RTCVideoSourceStats* self, unsigned long value);

unsigned long RTCVideoSourceStats_height(const RTCVideoSourceStats *self);

void RTCVideoSourceStats_set_height(RTCVideoSourceStats* self, unsigned long value);

unsigned long RTCVideoSourceStats_frames(const RTCVideoSourceStats *self);

void RTCVideoSourceStats_set_frames(RTCVideoSourceStats* self, unsigned long value);

double RTCVideoSourceStats_framesPerSecond(const RTCVideoSourceStats *self);

void RTCVideoSourceStats_set_framesPerSecond(RTCVideoSourceStats* self, double value);

RTCVideoSourceStats RTCVideoSourceStats_new();

#ifdef __cplusplus
}
#endif
