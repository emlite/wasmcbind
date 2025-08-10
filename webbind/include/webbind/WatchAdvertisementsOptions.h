#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

DECLARE_EMLITE_TYPE(WatchAdvertisementsOptions, em_Val);

AbortSignal WatchAdvertisementsOptions_signal(const WatchAdvertisementsOptions *self);

void WatchAdvertisementsOptions_set_signal(WatchAdvertisementsOptions* self, AbortSignal * value);

WatchAdvertisementsOptions WatchAdvertisementsOptions_new();

#ifdef __cplusplus
}
#endif
