#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

DECLARE_EMLITE_TYPE(SubscribeOptions, em_Val);

AbortSignal SubscribeOptions_signal(const SubscribeOptions *self);

void SubscribeOptions_set_signal(SubscribeOptions* self, AbortSignal * value);

SubscribeOptions SubscribeOptions_new();

#ifdef __cplusplus
}
#endif
