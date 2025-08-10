#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLTensorLimits.h"
#include "MLDataTypeLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLSplitSupportLimits, em_Val);

MLTensorLimits MLSplitSupportLimits_input(const MLSplitSupportLimits *self);

void MLSplitSupportLimits_set_input(MLSplitSupportLimits* self, MLTensorLimits * value);

MLDataTypeLimits MLSplitSupportLimits_outputs(const MLSplitSupportLimits *self);

void MLSplitSupportLimits_set_outputs(MLSplitSupportLimits* self, MLDataTypeLimits * value);

MLSplitSupportLimits MLSplitSupportLimits_new();

#ifdef __cplusplus
}
#endif
