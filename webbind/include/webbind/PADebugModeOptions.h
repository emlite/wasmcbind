#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PADebugModeOptions, em_Val);

long long PADebugModeOptions_debugKey(const PADebugModeOptions *self);

void PADebugModeOptions_set_debugKey(PADebugModeOptions* self, long long value);

PADebugModeOptions PADebugModeOptions_new();

#ifdef __cplusplus
}
#endif
