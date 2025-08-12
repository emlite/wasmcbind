#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLTensorLimits.h"
#include "MLDataTypeLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLQuantizeDequantizeLinearSupportLimits */
DECLARE_EMLITE_TYPE(MLQuantizeDequantizeLinearSupportLimits, em_Val);

/** @brief Getter of the input property */
MLTensorLimits MLQuantizeDequantizeLinearSupportLimits_input(const MLQuantizeDequantizeLinearSupportLimits *self);

/** @brief Setter of the input property */
void MLQuantizeDequantizeLinearSupportLimits_set_input(MLQuantizeDequantizeLinearSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the scale property */
MLTensorLimits MLQuantizeDequantizeLinearSupportLimits_scale(const MLQuantizeDequantizeLinearSupportLimits *self);

/** @brief Setter of the scale property */
void MLQuantizeDequantizeLinearSupportLimits_set_scale(MLQuantizeDequantizeLinearSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the zeroPoint property */
MLTensorLimits MLQuantizeDequantizeLinearSupportLimits_zeroPoint(const MLQuantizeDequantizeLinearSupportLimits *self);

/** @brief Setter of the zeroPoint property */
void MLQuantizeDequantizeLinearSupportLimits_set_zeroPoint(MLQuantizeDequantizeLinearSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the output property */
MLDataTypeLimits MLQuantizeDequantizeLinearSupportLimits_output(const MLQuantizeDequantizeLinearSupportLimits *self);

/** @brief Setter of the output property */
void MLQuantizeDequantizeLinearSupportLimits_set_output(MLQuantizeDequantizeLinearSupportLimits* self, MLDataTypeLimits * value);

/** @brief Constructor of the MLQuantizeDequantizeLinearSupportLimits dictionary type */
MLQuantizeDequantizeLinearSupportLimits MLQuantizeDequantizeLinearSupportLimits_new();

#ifdef __cplusplus
}
#endif
