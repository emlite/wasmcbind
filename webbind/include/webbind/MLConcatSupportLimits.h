#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLTensorLimits.h"
#include "MLDataTypeLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLConcatSupportLimits, em_Val);

MLTensorLimits MLConcatSupportLimits_inputs(const MLConcatSupportLimits *self);

void MLConcatSupportLimits_set_inputs(MLConcatSupportLimits* self, MLTensorLimits * value);

MLDataTypeLimits MLConcatSupportLimits_output(const MLConcatSupportLimits *self);

void MLConcatSupportLimits_set_output(MLConcatSupportLimits* self, MLDataTypeLimits * value);

MLConcatSupportLimits MLConcatSupportLimits_new();

#ifdef __cplusplus
}
#endif
