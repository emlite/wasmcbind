#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MLOperand MLOperand;

/** @brief Dictionary type MLLayerNormalizationOptions */
DECLARE_EMLITE_TYPE(MLLayerNormalizationOptions, MLOperatorOptions);

/** @brief Getter of the scale property */
MLOperand MLLayerNormalizationOptions_scale(const MLLayerNormalizationOptions *self);

/** @brief Setter of the scale property */
void MLLayerNormalizationOptions_set_scale(MLLayerNormalizationOptions* self, MLOperand * value);

/** @brief Getter of the bias property */
MLOperand MLLayerNormalizationOptions_bias(const MLLayerNormalizationOptions *self);

/** @brief Setter of the bias property */
void MLLayerNormalizationOptions_set_bias(MLLayerNormalizationOptions* self, MLOperand * value);

/** @brief Getter of the axes property */
jb_Array MLLayerNormalizationOptions_axes(const MLLayerNormalizationOptions *self);

/** @brief Setter of the axes property */
void MLLayerNormalizationOptions_set_axes(MLLayerNormalizationOptions* self, jb_Array * value);

/** @brief Getter of the epsilon property */
double MLLayerNormalizationOptions_epsilon(const MLLayerNormalizationOptions *self);

/** @brief Setter of the epsilon property */
void MLLayerNormalizationOptions_set_epsilon(MLLayerNormalizationOptions* self, double value);

/** @brief Constructor of the MLLayerNormalizationOptions dictionary type */
MLLayerNormalizationOptions MLLayerNormalizationOptions_new();

#ifdef __cplusplus
}
#endif
