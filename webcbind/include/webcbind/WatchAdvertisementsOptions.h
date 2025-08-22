#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

/** @brief Dictionary type WatchAdvertisementsOptions */
DECLARE_EMLITE_TYPE(WatchAdvertisementsOptions, em_Val);

/** @brief Getter of the signal property */
AbortSignal WatchAdvertisementsOptions_signal(const WatchAdvertisementsOptions *self);

/** @brief Setter of the signal property */
void WatchAdvertisementsOptions_set_signal(WatchAdvertisementsOptions* self, AbortSignal * value);

/** @brief Constructor of the WatchAdvertisementsOptions dictionary type */
WatchAdvertisementsOptions WatchAdvertisementsOptions_new();

#ifdef __cplusplus
}
#endif
