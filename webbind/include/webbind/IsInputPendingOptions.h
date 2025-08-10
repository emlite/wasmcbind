#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(IsInputPendingOptions, em_Val);

bool IsInputPendingOptions_includeContinuous(const IsInputPendingOptions *self);

void IsInputPendingOptions_set_includeContinuous(IsInputPendingOptions* self, bool value);

IsInputPendingOptions IsInputPendingOptions_new();

#ifdef __cplusplus
}
#endif
