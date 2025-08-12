#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLTensorLimits.h"
#include "MLDataTypeLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLBatchNormalizationSupportLimits */
DECLARE_EMLITE_TYPE(MLBatchNormalizationSupportLimits, em_Val);

/** @brief Getter of the input property */
MLTensorLimits MLBatchNormalizationSupportLimits_input(const MLBatchNormalizationSupportLimits *self);

/** @brief Setter of the input property */
void MLBatchNormalizationSupportLimits_set_input(MLBatchNormalizationSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the mean property */
MLTensorLimits MLBatchNormalizationSupportLimits_mean(const MLBatchNormalizationSupportLimits *self);

/** @brief Setter of the mean property */
void MLBatchNormalizationSupportLimits_set_mean(MLBatchNormalizationSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the variance property */
MLTensorLimits MLBatchNormalizationSupportLimits_variance(const MLBatchNormalizationSupportLimits *self);

/** @brief Setter of the variance property */
void MLBatchNormalizationSupportLimits_set_variance(MLBatchNormalizationSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the scale property */
MLTensorLimits MLBatchNormalizationSupportLimits_scale(const MLBatchNormalizationSupportLimits *self);

/** @brief Setter of the scale property */
void MLBatchNormalizationSupportLimits_set_scale(MLBatchNormalizationSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the bias property */
MLTensorLimits MLBatchNormalizationSupportLimits_bias(const MLBatchNormalizationSupportLimits *self);

/** @brief Setter of the bias property */
void MLBatchNormalizationSupportLimits_set_bias(MLBatchNormalizationSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the output property */
MLDataTypeLimits MLBatchNormalizationSupportLimits_output(const MLBatchNormalizationSupportLimits *self);

/** @brief Setter of the output property */
void MLBatchNormalizationSupportLimits_set_output(MLBatchNormalizationSupportLimits* self, MLDataTypeLimits * value);

/** @brief Constructor of the MLBatchNormalizationSupportLimits dictionary type */
MLBatchNormalizationSupportLimits MLBatchNormalizationSupportLimits_new();

#ifdef __cplusplus
}
#endif
