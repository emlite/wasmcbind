#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCMediaSourceStats.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCAudioSourceStats, RTCMediaSourceStats);

double RTCAudioSourceStats_audioLevel(const RTCAudioSourceStats *self);

void RTCAudioSourceStats_set_audioLevel(RTCAudioSourceStats* self, double value);

double RTCAudioSourceStats_totalAudioEnergy(const RTCAudioSourceStats *self);

void RTCAudioSourceStats_set_totalAudioEnergy(RTCAudioSourceStats* self, double value);

double RTCAudioSourceStats_totalSamplesDuration(const RTCAudioSourceStats *self);

void RTCAudioSourceStats_set_totalSamplesDuration(RTCAudioSourceStats* self, double value);

double RTCAudioSourceStats_echoReturnLoss(const RTCAudioSourceStats *self);

void RTCAudioSourceStats_set_echoReturnLoss(RTCAudioSourceStats* self, double value);

double RTCAudioSourceStats_echoReturnLossEnhancement(const RTCAudioSourceStats *self);

void RTCAudioSourceStats_set_echoReturnLossEnhancement(RTCAudioSourceStats* self, double value);

RTCAudioSourceStats RTCAudioSourceStats_new();

#ifdef __cplusplus
}
#endif
