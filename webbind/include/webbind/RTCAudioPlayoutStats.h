#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCStats.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCAudioPlayoutStats, RTCStats);

jb_String RTCAudioPlayoutStats_kind(const RTCAudioPlayoutStats *self);

void RTCAudioPlayoutStats_set_kind(RTCAudioPlayoutStats* self, jb_String * value);

double RTCAudioPlayoutStats_synthesizedSamplesDuration(const RTCAudioPlayoutStats *self);

void RTCAudioPlayoutStats_set_synthesizedSamplesDuration(RTCAudioPlayoutStats* self, double value);

unsigned long RTCAudioPlayoutStats_synthesizedSamplesEvents(const RTCAudioPlayoutStats *self);

void RTCAudioPlayoutStats_set_synthesizedSamplesEvents(RTCAudioPlayoutStats* self, unsigned long value);

double RTCAudioPlayoutStats_totalSamplesDuration(const RTCAudioPlayoutStats *self);

void RTCAudioPlayoutStats_set_totalSamplesDuration(RTCAudioPlayoutStats* self, double value);

double RTCAudioPlayoutStats_totalPlayoutDelay(const RTCAudioPlayoutStats *self);

void RTCAudioPlayoutStats_set_totalPlayoutDelay(RTCAudioPlayoutStats* self, double value);

long long RTCAudioPlayoutStats_totalSamplesCount(const RTCAudioPlayoutStats *self);

void RTCAudioPlayoutStats_set_totalSamplesCount(RTCAudioPlayoutStats* self, long long value);

RTCAudioPlayoutStats RTCAudioPlayoutStats_new();

#ifdef __cplusplus
}
#endif
