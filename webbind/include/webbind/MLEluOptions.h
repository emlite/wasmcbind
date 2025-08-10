#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLEluOptions, MLOperatorOptions);

double MLEluOptions_alpha(const MLEluOptions *self);

void MLEluOptions_set_alpha(MLEluOptions* self, double value);

MLEluOptions MLEluOptions_new();

#ifdef __cplusplus
}
#endif
