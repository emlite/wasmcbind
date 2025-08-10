#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

DECLARE_EMLITE_TYPE(NDEFScanOptions, em_Val);

AbortSignal NDEFScanOptions_signal(const NDEFScanOptions *self);

void NDEFScanOptions_set_signal(NDEFScanOptions* self, AbortSignal * value);

NDEFScanOptions NDEFScanOptions_new();

#ifdef __cplusplus
}
#endif
