#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MLOperand MLOperand;

/** @brief Dictionary type MLInstanceNormalizationOptions */
DECLARE_EMLITE_TYPE(MLInstanceNormalizationOptions, MLOperatorOptions);

/** @brief Getter of the scale property */
MLOperand MLInstanceNormalizationOptions_scale(const MLInstanceNormalizationOptions *self);

/** @brief Setter of the scale property */
void MLInstanceNormalizationOptions_set_scale(MLInstanceNormalizationOptions* self, MLOperand * value);

/** @brief Getter of the bias property */
MLOperand MLInstanceNormalizationOptions_bias(const MLInstanceNormalizationOptions *self);

/** @brief Setter of the bias property */
void MLInstanceNormalizationOptions_set_bias(MLInstanceNormalizationOptions* self, MLOperand * value);

/** @brief Getter of the epsilon property */
double MLInstanceNormalizationOptions_epsilon(const MLInstanceNormalizationOptions *self);

/** @brief Setter of the epsilon property */
void MLInstanceNormalizationOptions_set_epsilon(MLInstanceNormalizationOptions* self, double value);

/** @brief Getter of the layout property */
MLInputOperandLayout MLInstanceNormalizationOptions_layout(const MLInstanceNormalizationOptions *self);

/** @brief Setter of the layout property */
void MLInstanceNormalizationOptions_set_layout(MLInstanceNormalizationOptions* self, MLInputOperandLayout * value);

/** @brief Constructor of the MLInstanceNormalizationOptions dictionary type */
MLInstanceNormalizationOptions MLInstanceNormalizationOptions_new();

#ifdef __cplusplus
}
#endif
