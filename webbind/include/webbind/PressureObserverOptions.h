#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PressureObserverOptions, em_Val);

unsigned long PressureObserverOptions_sampleInterval(const PressureObserverOptions *self);

void PressureObserverOptions_set_sampleInterval(PressureObserverOptions* self, unsigned long value);

PressureObserverOptions PressureObserverOptions_new();

#ifdef __cplusplus
}
#endif
