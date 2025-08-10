#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(BackgroundSyncOptions, em_Val);

long long BackgroundSyncOptions_minInterval(const BackgroundSyncOptions *self);

void BackgroundSyncOptions_set_minInterval(BackgroundSyncOptions* self, long long value);

BackgroundSyncOptions BackgroundSyncOptions_new();

#ifdef __cplusplus
}
#endif
