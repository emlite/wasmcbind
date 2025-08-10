#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PositionOptions, em_Val);

bool PositionOptions_enableHighAccuracy(const PositionOptions *self);

void PositionOptions_set_enableHighAccuracy(PositionOptions* self, bool value);

unsigned long PositionOptions_timeout(const PositionOptions *self);

void PositionOptions_set_timeout(PositionOptions* self, unsigned long value);

unsigned long PositionOptions_maximumAge(const PositionOptions *self);

void PositionOptions_set_maximumAge(PositionOptions* self, unsigned long value);

PositionOptions PositionOptions_new();

#ifdef __cplusplus
}
#endif
