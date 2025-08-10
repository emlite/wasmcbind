#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLTensorLimits.h"
#include "MLDataTypeLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLPreluSupportLimits, em_Val);

MLTensorLimits MLPreluSupportLimits_input(const MLPreluSupportLimits *self);

void MLPreluSupportLimits_set_input(MLPreluSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLPreluSupportLimits_slope(const MLPreluSupportLimits *self);

void MLPreluSupportLimits_set_slope(MLPreluSupportLimits* self, MLTensorLimits * value);

MLDataTypeLimits MLPreluSupportLimits_output(const MLPreluSupportLimits *self);

void MLPreluSupportLimits_set_output(MLPreluSupportLimits* self, MLDataTypeLimits * value);

MLPreluSupportLimits MLPreluSupportLimits_new();

#ifdef __cplusplus
}
#endif
