#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GeolocationSensorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

/** @brief Dictionary type ReadOptions */
DECLARE_EMLITE_TYPE(ReadOptions, GeolocationSensorOptions);

/** @brief Getter of the signal property */
AbortSignal ReadOptions_signal(const ReadOptions *self);

/** @brief Setter of the signal property */
void ReadOptions_set_signal(ReadOptions* self, AbortSignal * value);

/** @brief Constructor of the ReadOptions dictionary type */
ReadOptions ReadOptions_new();

#ifdef __cplusplus
}
#endif
