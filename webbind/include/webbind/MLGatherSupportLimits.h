#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLTensorLimits.h"
#include "MLDataTypeLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLGatherSupportLimits, em_Val);

MLTensorLimits MLGatherSupportLimits_input(const MLGatherSupportLimits *self);

void MLGatherSupportLimits_set_input(MLGatherSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLGatherSupportLimits_indices(const MLGatherSupportLimits *self);

void MLGatherSupportLimits_set_indices(MLGatherSupportLimits* self, MLTensorLimits * value);

MLDataTypeLimits MLGatherSupportLimits_output(const MLGatherSupportLimits *self);

void MLGatherSupportLimits_set_output(MLGatherSupportLimits* self, MLDataTypeLimits * value);

MLGatherSupportLimits MLGatherSupportLimits_new();

#ifdef __cplusplus
}
#endif
