#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GeolocationSensorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

DECLARE_EMLITE_TYPE(ReadOptions, GeolocationSensorOptions);

AbortSignal ReadOptions_signal(const ReadOptions *self);

void ReadOptions_set_signal(ReadOptions* self, AbortSignal * value);

ReadOptions ReadOptions_new();

#ifdef __cplusplus
}
#endif
