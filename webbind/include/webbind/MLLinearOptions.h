#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLLinearOptions, MLOperatorOptions);

double MLLinearOptions_alpha(const MLLinearOptions *self);

void MLLinearOptions_set_alpha(MLLinearOptions* self, double value);

double MLLinearOptions_beta(const MLLinearOptions *self);

void MLLinearOptions_set_beta(MLLinearOptions* self, double value);

MLLinearOptions MLLinearOptions_new();

#ifdef __cplusplus
}
#endif
