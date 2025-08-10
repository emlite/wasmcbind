#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MLOperand MLOperand;

DECLARE_EMLITE_TYPE(MLLstmCellOptions, MLOperatorOptions);

MLOperand MLLstmCellOptions_bias(const MLLstmCellOptions *self);

void MLLstmCellOptions_set_bias(MLLstmCellOptions* self, MLOperand * value);

MLOperand MLLstmCellOptions_recurrentBias(const MLLstmCellOptions *self);

void MLLstmCellOptions_set_recurrentBias(MLLstmCellOptions* self, MLOperand * value);

MLOperand MLLstmCellOptions_peepholeWeight(const MLLstmCellOptions *self);

void MLLstmCellOptions_set_peepholeWeight(MLLstmCellOptions* self, MLOperand * value);

MLLstmWeightLayout MLLstmCellOptions_layout(const MLLstmCellOptions *self);

void MLLstmCellOptions_set_layout(MLLstmCellOptions* self, MLLstmWeightLayout * value);

jb_Array MLLstmCellOptions_activations(const MLLstmCellOptions *self);

void MLLstmCellOptions_set_activations(MLLstmCellOptions* self, jb_Array * value);

MLLstmCellOptions MLLstmCellOptions_new();

#ifdef __cplusplus
}
#endif
