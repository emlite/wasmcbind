#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MLOperand MLOperand;

DECLARE_EMLITE_TYPE(MLGruOptions, MLOperatorOptions);

MLOperand MLGruOptions_bias(const MLGruOptions *self);

void MLGruOptions_set_bias(MLGruOptions* self, MLOperand * value);

MLOperand MLGruOptions_recurrentBias(const MLGruOptions *self);

void MLGruOptions_set_recurrentBias(MLGruOptions* self, MLOperand * value);

MLOperand MLGruOptions_initialHiddenState(const MLGruOptions *self);

void MLGruOptions_set_initialHiddenState(MLGruOptions* self, MLOperand * value);

bool MLGruOptions_resetAfter(const MLGruOptions *self);

void MLGruOptions_set_resetAfter(MLGruOptions* self, bool value);

bool MLGruOptions_returnSequence(const MLGruOptions *self);

void MLGruOptions_set_returnSequence(MLGruOptions* self, bool value);

MLRecurrentNetworkDirection MLGruOptions_direction(const MLGruOptions *self);

void MLGruOptions_set_direction(MLGruOptions* self, MLRecurrentNetworkDirection * value);

MLGruWeightLayout MLGruOptions_layout(const MLGruOptions *self);

void MLGruOptions_set_layout(MLGruOptions* self, MLGruWeightLayout * value);

jb_Array MLGruOptions_activations(const MLGruOptions *self);

void MLGruOptions_set_activations(MLGruOptions* self, jb_Array * value);

MLGruOptions MLGruOptions_new();

#ifdef __cplusplus
}
#endif
