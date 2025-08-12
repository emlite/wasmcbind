#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

/** @brief Dictionary type IdleOptions */
DECLARE_EMLITE_TYPE(IdleOptions, em_Val);

/** @brief Getter of the threshold property */
long long IdleOptions_threshold(const IdleOptions *self);

/** @brief Setter of the threshold property */
void IdleOptions_set_threshold(IdleOptions* self, long long value);

/** @brief Getter of the signal property */
AbortSignal IdleOptions_signal(const IdleOptions *self);

/** @brief Setter of the signal property */
void IdleOptions_set_signal(IdleOptions* self, AbortSignal * value);

/** @brief Constructor of the IdleOptions dictionary type */
IdleOptions IdleOptions_new();

#ifdef __cplusplus
}
#endif
