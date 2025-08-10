#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLTensorLimits.h"
#include "MLDataTypeLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLLogicalNotSupportLimits, em_Val);

MLTensorLimits MLLogicalNotSupportLimits_a(const MLLogicalNotSupportLimits *self);

void MLLogicalNotSupportLimits_set_a(MLLogicalNotSupportLimits* self, MLTensorLimits * value);

MLDataTypeLimits MLLogicalNotSupportLimits_output(const MLLogicalNotSupportLimits *self);

void MLLogicalNotSupportLimits_set_output(MLLogicalNotSupportLimits* self, MLDataTypeLimits * value);

MLLogicalNotSupportLimits MLLogicalNotSupportLimits_new();

#ifdef __cplusplus
}
#endif
