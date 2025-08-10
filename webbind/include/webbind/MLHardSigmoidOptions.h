#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLHardSigmoidOptions, MLOperatorOptions);

double MLHardSigmoidOptions_alpha(const MLHardSigmoidOptions *self);

void MLHardSigmoidOptions_set_alpha(MLHardSigmoidOptions* self, double value);

double MLHardSigmoidOptions_beta(const MLHardSigmoidOptions *self);

void MLHardSigmoidOptions_set_beta(MLHardSigmoidOptions* self, double value);

MLHardSigmoidOptions MLHardSigmoidOptions_new();

#ifdef __cplusplus
}
#endif
