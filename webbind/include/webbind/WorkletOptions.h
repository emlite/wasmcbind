#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(WorkletOptions, em_Val);

RequestCredentials WorkletOptions_credentials(const WorkletOptions *self);

void WorkletOptions_set_credentials(WorkletOptions* self, RequestCredentials * value);

WorkletOptions WorkletOptions_new();

#ifdef __cplusplus
}
#endif
