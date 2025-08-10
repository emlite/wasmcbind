#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLTensorLimits.h"
#include "MLDataTypeLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLLstmSupportLimits, em_Val);

MLTensorLimits MLLstmSupportLimits_input(const MLLstmSupportLimits *self);

void MLLstmSupportLimits_set_input(MLLstmSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLLstmSupportLimits_weight(const MLLstmSupportLimits *self);

void MLLstmSupportLimits_set_weight(MLLstmSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLLstmSupportLimits_recurrentWeight(const MLLstmSupportLimits *self);

void MLLstmSupportLimits_set_recurrentWeight(MLLstmSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLLstmSupportLimits_bias(const MLLstmSupportLimits *self);

void MLLstmSupportLimits_set_bias(MLLstmSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLLstmSupportLimits_recurrentBias(const MLLstmSupportLimits *self);

void MLLstmSupportLimits_set_recurrentBias(MLLstmSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLLstmSupportLimits_peepholeWeight(const MLLstmSupportLimits *self);

void MLLstmSupportLimits_set_peepholeWeight(MLLstmSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLLstmSupportLimits_initialHiddenState(const MLLstmSupportLimits *self);

void MLLstmSupportLimits_set_initialHiddenState(MLLstmSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLLstmSupportLimits_initialCellState(const MLLstmSupportLimits *self);

void MLLstmSupportLimits_set_initialCellState(MLLstmSupportLimits* self, MLTensorLimits * value);

MLDataTypeLimits MLLstmSupportLimits_outputs(const MLLstmSupportLimits *self);

void MLLstmSupportLimits_set_outputs(MLLstmSupportLimits* self, MLDataTypeLimits * value);

MLLstmSupportLimits MLLstmSupportLimits_new();

#ifdef __cplusplus
}
#endif
