#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLTensorLimits.h"
#include "MLDataTypeLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLNormalizationSupportLimits */
DECLARE_EMLITE_TYPE(MLNormalizationSupportLimits, em_Val);

/** @brief Getter of the input property */
MLTensorLimits MLNormalizationSupportLimits_input(const MLNormalizationSupportLimits *self);

/** @brief Setter of the input property */
void MLNormalizationSupportLimits_set_input(MLNormalizationSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the scale property */
MLTensorLimits MLNormalizationSupportLimits_scale(const MLNormalizationSupportLimits *self);

/** @brief Setter of the scale property */
void MLNormalizationSupportLimits_set_scale(MLNormalizationSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the bias property */
MLTensorLimits MLNormalizationSupportLimits_bias(const MLNormalizationSupportLimits *self);

/** @brief Setter of the bias property */
void MLNormalizationSupportLimits_set_bias(MLNormalizationSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the output property */
MLDataTypeLimits MLNormalizationSupportLimits_output(const MLNormalizationSupportLimits *self);

/** @brief Setter of the output property */
void MLNormalizationSupportLimits_set_output(MLNormalizationSupportLimits* self, MLDataTypeLimits * value);

/** @brief Constructor of the MLNormalizationSupportLimits dictionary type */
MLNormalizationSupportLimits MLNormalizationSupportLimits_new();

#ifdef __cplusplus
}
#endif
