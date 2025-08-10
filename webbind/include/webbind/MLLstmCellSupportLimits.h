#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLTensorLimits.h"
#include "MLDataTypeLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLLstmCellSupportLimits, em_Val);

MLTensorLimits MLLstmCellSupportLimits_input(const MLLstmCellSupportLimits *self);

void MLLstmCellSupportLimits_set_input(MLLstmCellSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLLstmCellSupportLimits_weight(const MLLstmCellSupportLimits *self);

void MLLstmCellSupportLimits_set_weight(MLLstmCellSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLLstmCellSupportLimits_recurrentWeight(const MLLstmCellSupportLimits *self);

void MLLstmCellSupportLimits_set_recurrentWeight(MLLstmCellSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLLstmCellSupportLimits_hiddenState(const MLLstmCellSupportLimits *self);

void MLLstmCellSupportLimits_set_hiddenState(MLLstmCellSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLLstmCellSupportLimits_cellState(const MLLstmCellSupportLimits *self);

void MLLstmCellSupportLimits_set_cellState(MLLstmCellSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLLstmCellSupportLimits_bias(const MLLstmCellSupportLimits *self);

void MLLstmCellSupportLimits_set_bias(MLLstmCellSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLLstmCellSupportLimits_recurrentBias(const MLLstmCellSupportLimits *self);

void MLLstmCellSupportLimits_set_recurrentBias(MLLstmCellSupportLimits* self, MLTensorLimits * value);

MLTensorLimits MLLstmCellSupportLimits_peepholeWeight(const MLLstmCellSupportLimits *self);

void MLLstmCellSupportLimits_set_peepholeWeight(MLLstmCellSupportLimits* self, MLTensorLimits * value);

MLDataTypeLimits MLLstmCellSupportLimits_outputs(const MLLstmCellSupportLimits *self);

void MLLstmCellSupportLimits_set_outputs(MLLstmCellSupportLimits* self, MLDataTypeLimits * value);

MLLstmCellSupportLimits MLLstmCellSupportLimits_new();

#ifdef __cplusplus
}
#endif
