#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLTensorLimits.h"
#include "MLDataTypeLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLBinarySupportLimits, em_Val);

MLTensorLimits MLBinarySupportLimits_a(const MLBinarySupportLimits *self);

void MLBinarySupportLimits_set_a(MLBinarySupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLBinarySupportLimits_b(const MLBinarySupportLimits *self);

void MLBinarySupportLimits_set_b(MLBinarySupportLimits* self, MLTensorLimits * value);

MLDataTypeLimits MLBinarySupportLimits_output(const MLBinarySupportLimits *self);

void MLBinarySupportLimits_set_output(MLBinarySupportLimits* self, MLDataTypeLimits * value);

MLBinarySupportLimits MLBinarySupportLimits_new();

#ifdef __cplusplus
}
#endif
