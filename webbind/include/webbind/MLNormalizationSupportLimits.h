#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLTensorLimits.h"
#include "MLDataTypeLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLNormalizationSupportLimits, em_Val);

MLTensorLimits MLNormalizationSupportLimits_input(const MLNormalizationSupportLimits *self);

void MLNormalizationSupportLimits_set_input(MLNormalizationSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLNormalizationSupportLimits_scale(const MLNormalizationSupportLimits *self);

void MLNormalizationSupportLimits_set_scale(MLNormalizationSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLNormalizationSupportLimits_bias(const MLNormalizationSupportLimits *self);

void MLNormalizationSupportLimits_set_bias(MLNormalizationSupportLimits* self, MLTensorLimits * value);

MLDataTypeLimits MLNormalizationSupportLimits_output(const MLNormalizationSupportLimits *self);

void MLNormalizationSupportLimits_set_output(MLNormalizationSupportLimits* self, MLDataTypeLimits * value);

MLNormalizationSupportLimits MLNormalizationSupportLimits_new();

#ifdef __cplusplus
}
#endif
