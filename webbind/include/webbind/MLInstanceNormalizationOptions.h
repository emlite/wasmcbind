#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MLOperand MLOperand;

DECLARE_EMLITE_TYPE(MLInstanceNormalizationOptions, MLOperatorOptions);

MLOperand MLInstanceNormalizationOptions_scale(const MLInstanceNormalizationOptions *self);

void MLInstanceNormalizationOptions_set_scale(MLInstanceNormalizationOptions* self, MLOperand * value);

MLOperand MLInstanceNormalizationOptions_bias(const MLInstanceNormalizationOptions *self);

void MLInstanceNormalizationOptions_set_bias(MLInstanceNormalizationOptions* self, MLOperand * value);

double MLInstanceNormalizationOptions_epsilon(const MLInstanceNormalizationOptions *self);

void MLInstanceNormalizationOptions_set_epsilon(MLInstanceNormalizationOptions* self, double value);

MLInputOperandLayout MLInstanceNormalizationOptions_layout(const MLInstanceNormalizationOptions *self);

void MLInstanceNormalizationOptions_set_layout(MLInstanceNormalizationOptions* self, MLInputOperandLayout * value);

MLInstanceNormalizationOptions MLInstanceNormalizationOptions_new();

#ifdef __cplusplus
}
#endif
