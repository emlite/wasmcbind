#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

/** @brief Dictionary type SubscribeOptions */
DECLARE_EMLITE_TYPE(SubscribeOptions, em_Val);

/** @brief Getter of the signal property */
AbortSignal SubscribeOptions_signal(const SubscribeOptions *self);

/** @brief Setter of the signal property */
void SubscribeOptions_set_signal(SubscribeOptions* self, AbortSignal * value);

/** @brief Constructor of the SubscribeOptions dictionary type */
SubscribeOptions SubscribeOptions_new();

#ifdef __cplusplus
}
#endif
