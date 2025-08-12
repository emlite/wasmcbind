#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

/** @brief Dictionary type NDEFWriteOptions */
DECLARE_EMLITE_TYPE(NDEFWriteOptions, em_Val);

/** @brief Getter of the overwrite property */
bool NDEFWriteOptions_overwrite(const NDEFWriteOptions *self);

/** @brief Setter of the overwrite property */
void NDEFWriteOptions_set_overwrite(NDEFWriteOptions* self, bool value);

/** @brief Getter of the signal property */
AbortSignal NDEFWriteOptions_signal(const NDEFWriteOptions *self);

/** @brief Setter of the signal property */
void NDEFWriteOptions_set_signal(NDEFWriteOptions* self, AbortSignal * value);

/** @brief Constructor of the NDEFWriteOptions dictionary type */
NDEFWriteOptions NDEFWriteOptions_new();

#ifdef __cplusplus
}
#endif
