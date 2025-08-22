#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

/** @brief Dictionary type NDEFMakeReadOnlyOptions */
DECLARE_EMLITE_TYPE(NDEFMakeReadOnlyOptions, em_Val);

/** @brief Getter of the signal property */
AbortSignal NDEFMakeReadOnlyOptions_signal(const NDEFMakeReadOnlyOptions *self);

/** @brief Setter of the signal property */
void NDEFMakeReadOnlyOptions_set_signal(NDEFMakeReadOnlyOptions* self, AbortSignal * value);

/** @brief Constructor of the NDEFMakeReadOnlyOptions dictionary type */
NDEFMakeReadOnlyOptions NDEFMakeReadOnlyOptions_new();

#ifdef __cplusplus
}
#endif
