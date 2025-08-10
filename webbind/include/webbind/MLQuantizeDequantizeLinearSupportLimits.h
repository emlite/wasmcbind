#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLTensorLimits.h"
#include "MLDataTypeLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLQuantizeDequantizeLinearSupportLimits, em_Val);

MLTensorLimits MLQuantizeDequantizeLinearSupportLimits_input(const MLQuantizeDequantizeLinearSupportLimits *self);

void MLQuantizeDequantizeLinearSupportLimits_set_input(MLQuantizeDequantizeLinearSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLQuantizeDequantizeLinearSupportLimits_scale(const MLQuantizeDequantizeLinearSupportLimits *self);

void MLQuantizeDequantizeLinearSupportLimits_set_scale(MLQuantizeDequantizeLinearSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLQuantizeDequantizeLinearSupportLimits_zeroPoint(const MLQuantizeDequantizeLinearSupportLimits *self);

void MLQuantizeDequantizeLinearSupportLimits_set_zeroPoint(MLQuantizeDequantizeLinearSupportLimits* self, MLTensorLimits * value);

MLDataTypeLimits MLQuantizeDequantizeLinearSupportLimits_output(const MLQuantizeDequantizeLinearSupportLimits *self);

void MLQuantizeDequantizeLinearSupportLimits_set_output(MLQuantizeDequantizeLinearSupportLimits* self, MLDataTypeLimits * value);

MLQuantizeDequantizeLinearSupportLimits MLQuantizeDequantizeLinearSupportLimits_new();

#ifdef __cplusplus
}
#endif
