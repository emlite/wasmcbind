#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLTensorLimits.h"
#include "MLDataTypeLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLScatterSupportLimits, em_Val);

MLTensorLimits MLScatterSupportLimits_input(const MLScatterSupportLimits *self);

void MLScatterSupportLimits_set_input(MLScatterSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLScatterSupportLimits_indices(const MLScatterSupportLimits *self);

void MLScatterSupportLimits_set_indices(MLScatterSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLScatterSupportLimits_updates(const MLScatterSupportLimits *self);

void MLScatterSupportLimits_set_updates(MLScatterSupportLimits* self, MLTensorLimits * value);

MLDataTypeLimits MLScatterSupportLimits_output(const MLScatterSupportLimits *self);

void MLScatterSupportLimits_set_output(MLScatterSupportLimits* self, MLDataTypeLimits * value);

MLScatterSupportLimits MLScatterSupportLimits_new();

#ifdef __cplusplus
}
#endif
