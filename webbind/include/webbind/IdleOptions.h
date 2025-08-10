#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

DECLARE_EMLITE_TYPE(IdleOptions, em_Val);

long long IdleOptions_threshold(const IdleOptions *self);

void IdleOptions_set_threshold(IdleOptions* self, long long value);

AbortSignal IdleOptions_signal(const IdleOptions *self);

void IdleOptions_set_signal(IdleOptions* self, AbortSignal * value);

IdleOptions IdleOptions_new();

#ifdef __cplusplus
}
#endif
