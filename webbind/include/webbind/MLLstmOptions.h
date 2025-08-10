#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MLOperand MLOperand;

DECLARE_EMLITE_TYPE(MLLstmOptions, MLOperatorOptions);

MLOperand MLLstmOptions_bias(const MLLstmOptions *self);

void MLLstmOptions_set_bias(MLLstmOptions* self, MLOperand * value);

MLOperand MLLstmOptions_recurrentBias(const MLLstmOptions *self);

void MLLstmOptions_set_recurrentBias(MLLstmOptions* self, MLOperand * value);

MLOperand MLLstmOptions_peepholeWeight(const MLLstmOptions *self);

void MLLstmOptions_set_peepholeWeight(MLLstmOptions* self, MLOperand * value);

MLOperand MLLstmOptions_initialHiddenState(const MLLstmOptions *self);

void MLLstmOptions_set_initialHiddenState(MLLstmOptions* self, MLOperand * value);

MLOperand MLLstmOptions_initialCellState(const MLLstmOptions *self);

void MLLstmOptions_set_initialCellState(MLLstmOptions* self, MLOperand * value);

bool MLLstmOptions_returnSequence(const MLLstmOptions *self);

void MLLstmOptions_set_returnSequence(MLLstmOptions* self, bool value);

MLRecurrentNetworkDirection MLLstmOptions_direction(const MLLstmOptions *self);

void MLLstmOptions_set_direction(MLLstmOptions* self, MLRecurrentNetworkDirection * value);

MLLstmWeightLayout MLLstmOptions_layout(const MLLstmOptions *self);

void MLLstmOptions_set_layout(MLLstmOptions* self, MLLstmWeightLayout * value);

jb_Array MLLstmOptions_activations(const MLLstmOptions *self);

void MLLstmOptions_set_activations(MLLstmOptions* self, jb_Array * value);

MLLstmOptions MLLstmOptions_new();

#ifdef __cplusplus
}
#endif
