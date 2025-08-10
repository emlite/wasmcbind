#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLRankRange.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLTensorLimits, em_Val);

jb_Any MLTensorLimits_dataTypes(const MLTensorLimits *self);

void MLTensorLimits_set_dataTypes(MLTensorLimits* self, jb_Any * value);

MLRankRange MLTensorLimits_rankRange(const MLTensorLimits *self);

void MLTensorLimits_set_rankRange(MLTensorLimits* self, MLRankRange * value);

MLTensorLimits MLTensorLimits_new();

#ifdef __cplusplus
}
#endif
