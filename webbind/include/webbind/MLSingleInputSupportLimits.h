#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLTensorLimits.h"
#include "MLDataTypeLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLSingleInputSupportLimits, em_Val);

MLTensorLimits MLSingleInputSupportLimits_input(const MLSingleInputSupportLimits *self);

void MLSingleInputSupportLimits_set_input(MLSingleInputSupportLimits* self, MLTensorLimits * value);

MLDataTypeLimits MLSingleInputSupportLimits_output(const MLSingleInputSupportLimits *self);

void MLSingleInputSupportLimits_set_output(MLSingleInputSupportLimits* self, MLDataTypeLimits * value);

MLSingleInputSupportLimits MLSingleInputSupportLimits_new();

#ifdef __cplusplus
}
#endif
