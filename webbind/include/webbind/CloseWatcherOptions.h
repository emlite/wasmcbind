#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

DECLARE_EMLITE_TYPE(CloseWatcherOptions, em_Val);

AbortSignal CloseWatcherOptions_signal(const CloseWatcherOptions *self);

void CloseWatcherOptions_set_signal(CloseWatcherOptions* self, AbortSignal * value);

CloseWatcherOptions CloseWatcherOptions_new();

#ifdef __cplusplus
}
#endif
