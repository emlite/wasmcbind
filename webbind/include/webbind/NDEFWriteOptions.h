#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

DECLARE_EMLITE_TYPE(NDEFWriteOptions, em_Val);

bool NDEFWriteOptions_overwrite(const NDEFWriteOptions *self);

void NDEFWriteOptions_set_overwrite(NDEFWriteOptions* self, bool value);

AbortSignal NDEFWriteOptions_signal(const NDEFWriteOptions *self);

void NDEFWriteOptions_set_signal(NDEFWriteOptions* self, AbortSignal * value);

NDEFWriteOptions NDEFWriteOptions_new();

#ifdef __cplusplus
}
#endif
