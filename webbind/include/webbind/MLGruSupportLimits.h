#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLTensorLimits.h"
#include "MLDataTypeLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLGruSupportLimits, em_Val);

MLTensorLimits MLGruSupportLimits_input(const MLGruSupportLimits *self);

void MLGruSupportLimits_set_input(MLGruSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLGruSupportLimits_weight(const MLGruSupportLimits *self);

void MLGruSupportLimits_set_weight(MLGruSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLGruSupportLimits_recurrentWeight(const MLGruSupportLimits *self);

void MLGruSupportLimits_set_recurrentWeight(MLGruSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLGruSupportLimits_bias(const MLGruSupportLimits *self);

void MLGruSupportLimits_set_bias(MLGruSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLGruSupportLimits_recurrentBias(const MLGruSupportLimits *self);

void MLGruSupportLimits_set_recurrentBias(MLGruSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLGruSupportLimits_initialHiddenState(const MLGruSupportLimits *self);

void MLGruSupportLimits_set_initialHiddenState(MLGruSupportLimits* self, MLTensorLimits * value);

MLDataTypeLimits MLGruSupportLimits_outputs(const MLGruSupportLimits *self);

void MLGruSupportLimits_set_outputs(MLGruSupportLimits* self, MLDataTypeLimits * value);

MLGruSupportLimits MLGruSupportLimits_new();

#ifdef __cplusplus
}
#endif
