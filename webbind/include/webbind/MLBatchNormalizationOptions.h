#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MLOperand MLOperand;

DECLARE_EMLITE_TYPE(MLBatchNormalizationOptions, MLOperatorOptions);

MLOperand MLBatchNormalizationOptions_scale(const MLBatchNormalizationOptions *self);

void MLBatchNormalizationOptions_set_scale(MLBatchNormalizationOptions* self, MLOperand * value);

MLOperand MLBatchNormalizationOptions_bias(const MLBatchNormalizationOptions *self);

void MLBatchNormalizationOptions_set_bias(MLBatchNormalizationOptions* self, MLOperand * value);

unsigned long MLBatchNormalizationOptions_axis(const MLBatchNormalizationOptions *self);

void MLBatchNormalizationOptions_set_axis(MLBatchNormalizationOptions* self, unsigned long value);

double MLBatchNormalizationOptions_epsilon(const MLBatchNormalizationOptions *self);

void MLBatchNormalizationOptions_set_epsilon(MLBatchNormalizationOptions* self, double value);

MLBatchNormalizationOptions MLBatchNormalizationOptions_new();

#ifdef __cplusplus
}
#endif
