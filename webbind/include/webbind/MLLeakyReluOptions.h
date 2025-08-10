#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLLeakyReluOptions, MLOperatorOptions);

double MLLeakyReluOptions_alpha(const MLLeakyReluOptions *self);

void MLLeakyReluOptions_set_alpha(MLLeakyReluOptions* self, double value);

MLLeakyReluOptions MLLeakyReluOptions_new();

#ifdef __cplusplus
}
#endif
