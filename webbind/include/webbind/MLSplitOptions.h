#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLSplitOptions, MLOperatorOptions);

unsigned long MLSplitOptions_axis(const MLSplitOptions *self);

void MLSplitOptions_set_axis(MLSplitOptions* self, unsigned long value);

MLSplitOptions MLSplitOptions_new();

#ifdef __cplusplus
}
#endif
