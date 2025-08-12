#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MLOperand MLOperand;

/** @brief Dictionary type MLBatchNormalizationOptions */
DECLARE_EMLITE_TYPE(MLBatchNormalizationOptions, MLOperatorOptions);

/** @brief Getter of the scale property */
MLOperand MLBatchNormalizationOptions_scale(const MLBatchNormalizationOptions *self);

/** @brief Setter of the scale property */
void MLBatchNormalizationOptions_set_scale(MLBatchNormalizationOptions* self, MLOperand * value);

/** @brief Getter of the bias property */
MLOperand MLBatchNormalizationOptions_bias(const MLBatchNormalizationOptions *self);

/** @brief Setter of the bias property */
void MLBatchNormalizationOptions_set_bias(MLBatchNormalizationOptions* self, MLOperand * value);

/** @brief Getter of the axis property */
unsigned long MLBatchNormalizationOptions_axis(const MLBatchNormalizationOptions *self);

/** @brief Setter of the axis property */
void MLBatchNormalizationOptions_set_axis(MLBatchNormalizationOptions* self, unsigned long value);

/** @brief Getter of the epsilon property */
double MLBatchNormalizationOptions_epsilon(const MLBatchNormalizationOptions *self);

/** @brief Setter of the epsilon property */
void MLBatchNormalizationOptions_set_epsilon(MLBatchNormalizationOptions* self, double value);

/** @brief Constructor of the MLBatchNormalizationOptions dictionary type */
MLBatchNormalizationOptions MLBatchNormalizationOptions_new();

#ifdef __cplusplus
}
#endif
