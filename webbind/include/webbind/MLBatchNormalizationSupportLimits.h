#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLTensorLimits.h"
#include "MLDataTypeLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLBatchNormalizationSupportLimits, em_Val);

MLTensorLimits MLBatchNormalizationSupportLimits_input(const MLBatchNormalizationSupportLimits *self);

void MLBatchNormalizationSupportLimits_set_input(MLBatchNormalizationSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLBatchNormalizationSupportLimits_mean(const MLBatchNormalizationSupportLimits *self);

void MLBatchNormalizationSupportLimits_set_mean(MLBatchNormalizationSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLBatchNormalizationSupportLimits_variance(const MLBatchNormalizationSupportLimits *self);

void MLBatchNormalizationSupportLimits_set_variance(MLBatchNormalizationSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLBatchNormalizationSupportLimits_scale(const MLBatchNormalizationSupportLimits *self);

void MLBatchNormalizationSupportLimits_set_scale(MLBatchNormalizationSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLBatchNormalizationSupportLimits_bias(const MLBatchNormalizationSupportLimits *self);

void MLBatchNormalizationSupportLimits_set_bias(MLBatchNormalizationSupportLimits* self, MLTensorLimits * value);

MLDataTypeLimits MLBatchNormalizationSupportLimits_output(const MLBatchNormalizationSupportLimits *self);

void MLBatchNormalizationSupportLimits_set_output(MLBatchNormalizationSupportLimits* self, MLDataTypeLimits * value);

MLBatchNormalizationSupportLimits MLBatchNormalizationSupportLimits_new();

#ifdef __cplusplus
}
#endif
