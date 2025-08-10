#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNodeOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(DelayOptions, AudioNodeOptions);

double DelayOptions_maxDelayTime(const DelayOptions *self);

void DelayOptions_set_maxDelayTime(DelayOptions* self, double value);

double DelayOptions_delayTime(const DelayOptions *self);

void DelayOptions_set_delayTime(DelayOptions* self, double value);

DelayOptions DelayOptions_new();

#ifdef __cplusplus
}
#endif
