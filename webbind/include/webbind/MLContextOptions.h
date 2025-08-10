#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLContextOptions, em_Val);

MLPowerPreference MLContextOptions_powerPreference(const MLContextOptions *self);

void MLContextOptions_set_powerPreference(MLContextOptions* self, MLPowerPreference * value);

MLContextOptions MLContextOptions_new();

#ifdef __cplusplus
}
#endif
