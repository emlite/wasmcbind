#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MLOperand MLOperand;

DECLARE_EMLITE_TYPE(MLLayerNormalizationOptions, MLOperatorOptions);

MLOperand MLLayerNormalizationOptions_scale(const MLLayerNormalizationOptions *self);

void MLLayerNormalizationOptions_set_scale(MLLayerNormalizationOptions* self, MLOperand * value);

MLOperand MLLayerNormalizationOptions_bias(const MLLayerNormalizationOptions *self);

void MLLayerNormalizationOptions_set_bias(MLLayerNormalizationOptions* self, MLOperand * value);

jb_Array MLLayerNormalizationOptions_axes(const MLLayerNormalizationOptions *self);

void MLLayerNormalizationOptions_set_axes(MLLayerNormalizationOptions* self, jb_Array * value);

double MLLayerNormalizationOptions_epsilon(const MLLayerNormalizationOptions *self);

void MLLayerNormalizationOptions_set_epsilon(MLLayerNormalizationOptions* self, double value);

MLLayerNormalizationOptions MLLayerNormalizationOptions_new();

#ifdef __cplusplus
}
#endif
