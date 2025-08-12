#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

/** @brief Dictionary type CloseWatcherOptions */
DECLARE_EMLITE_TYPE(CloseWatcherOptions, em_Val);

/** @brief Getter of the signal property */
AbortSignal CloseWatcherOptions_signal(const CloseWatcherOptions *self);

/** @brief Setter of the signal property */
void CloseWatcherOptions_set_signal(CloseWatcherOptions* self, AbortSignal * value);

/** @brief Constructor of the CloseWatcherOptions dictionary type */
CloseWatcherOptions CloseWatcherOptions_new();

#ifdef __cplusplus
}
#endif
