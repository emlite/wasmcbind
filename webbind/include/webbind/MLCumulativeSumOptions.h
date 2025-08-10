#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLCumulativeSumOptions, MLOperatorOptions);

bool MLCumulativeSumOptions_exclusive(const MLCumulativeSumOptions *self);

void MLCumulativeSumOptions_set_exclusive(MLCumulativeSumOptions* self, bool value);

bool MLCumulativeSumOptions_reversed(const MLCumulativeSumOptions *self);

void MLCumulativeSumOptions_set_reversed(MLCumulativeSumOptions* self, bool value);

MLCumulativeSumOptions MLCumulativeSumOptions_new();

#ifdef __cplusplus
}
#endif
