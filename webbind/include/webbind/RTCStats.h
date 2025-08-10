#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCStats, em_Val);

jb_Any RTCStats_timestamp(const RTCStats *self);

void RTCStats_set_timestamp(RTCStats* self, jb_Any * value);

RTCStatsType RTCStats_type(const RTCStats *self);

void RTCStats_set_type(RTCStats* self, RTCStatsType * value);

jb_String RTCStats_id(const RTCStats *self);

void RTCStats_set_id(RTCStats* self, jb_String * value);

RTCStats RTCStats_new();

#ifdef __cplusplus
}
#endif
