#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLTensorLimits.h"
#include "MLDataTypeLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLGemmSupportLimits, em_Val);

MLTensorLimits MLGemmSupportLimits_a(const MLGemmSupportLimits *self);

void MLGemmSupportLimits_set_a(MLGemmSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLGemmSupportLimits_b(const MLGemmSupportLimits *self);

void MLGemmSupportLimits_set_b(MLGemmSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLGemmSupportLimits_c(const MLGemmSupportLimits *self);

void MLGemmSupportLimits_set_c(MLGemmSupportLimits* self, MLTensorLimits * value);

MLDataTypeLimits MLGemmSupportLimits_output(const MLGemmSupportLimits *self);

void MLGemmSupportLimits_set_output(MLGemmSupportLimits* self, MLDataTypeLimits * value);

MLGemmSupportLimits MLGemmSupportLimits_new();

#ifdef __cplusplus
}
#endif
