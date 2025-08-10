#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCStats.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCMediaSourceStats, RTCStats);

jb_String RTCMediaSourceStats_trackIdentifier(const RTCMediaSourceStats *self);

void RTCMediaSourceStats_set_trackIdentifier(RTCMediaSourceStats* self, jb_String * value);

jb_String RTCMediaSourceStats_kind(const RTCMediaSourceStats *self);

void RTCMediaSourceStats_set_kind(RTCMediaSourceStats* self, jb_String * value);

RTCMediaSourceStats RTCMediaSourceStats_new();

#ifdef __cplusplus
}
#endif
