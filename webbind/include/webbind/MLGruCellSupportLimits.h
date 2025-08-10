#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLTensorLimits.h"
#include "MLDataTypeLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLGruCellSupportLimits, em_Val);

MLTensorLimits MLGruCellSupportLimits_input(const MLGruCellSupportLimits *self);

void MLGruCellSupportLimits_set_input(MLGruCellSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLGruCellSupportLimits_weight(const MLGruCellSupportLimits *self);

void MLGruCellSupportLimits_set_weight(MLGruCellSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLGruCellSupportLimits_recurrentWeight(const MLGruCellSupportLimits *self);

void MLGruCellSupportLimits_set_recurrentWeight(MLGruCellSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLGruCellSupportLimits_hiddenState(const MLGruCellSupportLimits *self);

void MLGruCellSupportLimits_set_hiddenState(MLGruCellSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLGruCellSupportLimits_bias(const MLGruCellSupportLimits *self);

void MLGruCellSupportLimits_set_bias(MLGruCellSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLGruCellSupportLimits_recurrentBias(const MLGruCellSupportLimits *self);

void MLGruCellSupportLimits_set_recurrentBias(MLGruCellSupportLimits* self, MLTensorLimits * value);

MLDataTypeLimits MLGruCellSupportLimits_output(const MLGruCellSupportLimits *self);

void MLGruCellSupportLimits_set_output(MLGruCellSupportLimits* self, MLDataTypeLimits * value);

MLGruCellSupportLimits MLGruCellSupportLimits_new();

#ifdef __cplusplus
}
#endif
