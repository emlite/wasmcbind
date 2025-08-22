#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type BackgroundSyncOptions */
DECLARE_EMLITE_TYPE(BackgroundSyncOptions, em_Val);

/** @brief Getter of the minInterval property */
long long BackgroundSyncOptions_minInterval(const BackgroundSyncOptions *self);

/** @brief Setter of the minInterval property */
void BackgroundSyncOptions_set_minInterval(BackgroundSyncOptions* self, long long value);

/** @brief Constructor of the BackgroundSyncOptions dictionary type */
BackgroundSyncOptions BackgroundSyncOptions_new();

#ifdef __cplusplus
}
#endif
