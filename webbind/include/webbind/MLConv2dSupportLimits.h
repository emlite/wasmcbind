#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLTensorLimits.h"
#include "MLDataTypeLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLConv2dSupportLimits, em_Val);

MLTensorLimits MLConv2dSupportLimits_input(const MLConv2dSupportLimits *self);

void MLConv2dSupportLimits_set_input(MLConv2dSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLConv2dSupportLimits_filter(const MLConv2dSupportLimits *self);

void MLConv2dSupportLimits_set_filter(MLConv2dSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLConv2dSupportLimits_bias(const MLConv2dSupportLimits *self);

void MLConv2dSupportLimits_set_bias(MLConv2dSupportLimits* self, MLTensorLimits * value);

MLDataTypeLimits MLConv2dSupportLimits_output(const MLConv2dSupportLimits *self);

void MLConv2dSupportLimits_set_output(MLConv2dSupportLimits* self, MLDataTypeLimits * value);

MLConv2dSupportLimits MLConv2dSupportLimits_new();

#ifdef __cplusplus
}
#endif
