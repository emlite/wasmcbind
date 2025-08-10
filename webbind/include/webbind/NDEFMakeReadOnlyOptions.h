#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

DECLARE_EMLITE_TYPE(NDEFMakeReadOnlyOptions, em_Val);

AbortSignal NDEFMakeReadOnlyOptions_signal(const NDEFMakeReadOnlyOptions *self);

void NDEFMakeReadOnlyOptions_set_signal(NDEFMakeReadOnlyOptions* self, AbortSignal * value);

NDEFMakeReadOnlyOptions NDEFMakeReadOnlyOptions_new();

#ifdef __cplusplus
}
#endif
