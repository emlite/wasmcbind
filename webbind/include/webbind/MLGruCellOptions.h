#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MLOperand MLOperand;

DECLARE_EMLITE_TYPE(MLGruCellOptions, MLOperatorOptions);

MLOperand MLGruCellOptions_bias(const MLGruCellOptions *self);

void MLGruCellOptions_set_bias(MLGruCellOptions* self, MLOperand * value);

MLOperand MLGruCellOptions_recurrentBias(const MLGruCellOptions *self);

void MLGruCellOptions_set_recurrentBias(MLGruCellOptions* self, MLOperand * value);

bool MLGruCellOptions_resetAfter(const MLGruCellOptions *self);

void MLGruCellOptions_set_resetAfter(MLGruCellOptions* self, bool value);

MLGruWeightLayout MLGruCellOptions_layout(const MLGruCellOptions *self);

void MLGruCellOptions_set_layout(MLGruCellOptions* self, MLGruWeightLayout * value);

jb_Array MLGruCellOptions_activations(const MLGruCellOptions *self);

void MLGruCellOptions_set_activations(MLGruCellOptions* self, jb_Array * value);

MLGruCellOptions MLGruCellOptions_new();

#ifdef __cplusplus
}
#endif
