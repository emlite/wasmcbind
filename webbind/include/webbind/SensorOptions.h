#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(SensorOptions, em_Val);

double SensorOptions_frequency(const SensorOptions *self);

void SensorOptions_set_frequency(SensorOptions* self, double value);

SensorOptions SensorOptions_new();

#ifdef __cplusplus
}
#endif
