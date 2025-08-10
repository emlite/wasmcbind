#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLTensorLimits.h"
#include "MLDataTypeLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLWhereSupportLimits, em_Val);

MLTensorLimits MLWhereSupportLimits_condition(const MLWhereSupportLimits *self);

void MLWhereSupportLimits_set_condition(MLWhereSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLWhereSupportLimits_trueValue(const MLWhereSupportLimits *self);

void MLWhereSupportLimits_set_trueValue(MLWhereSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLWhereSupportLimits_falseValue(const MLWhereSupportLimits *self);

void MLWhereSupportLimits_set_falseValue(MLWhereSupportLimits* self, MLTensorLimits * value);

MLDataTypeLimits MLWhereSupportLimits_output(const MLWhereSupportLimits *self);

void MLWhereSupportLimits_set_output(MLWhereSupportLimits* self, MLDataTypeLimits * value);

MLWhereSupportLimits MLWhereSupportLimits_new();

#ifdef __cplusplus
}
#endif
