#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MLOperand MLOperand;

/** @brief Dictionary type MLGruCellOptions */
DECLARE_EMLITE_TYPE(MLGruCellOptions, MLOperatorOptions);

/** @brief Getter of the bias property */
MLOperand MLGruCellOptions_bias(const MLGruCellOptions *self);

/** @brief Setter of the bias property */
void MLGruCellOptions_set_bias(MLGruCellOptions* self, MLOperand * value);

/** @brief Getter of the recurrentBias property */
MLOperand MLGruCellOptions_recurrentBias(const MLGruCellOptions *self);

/** @brief Setter of the recurrentBias property */
void MLGruCellOptions_set_recurrentBias(MLGruCellOptions* self, MLOperand * value);

/** @brief Getter of the resetAfter property */
bool MLGruCellOptions_resetAfter(const MLGruCellOptions *self);

/** @brief Setter of the resetAfter property */
void MLGruCellOptions_set_resetAfter(MLGruCellOptions* self, bool value);

/** @brief Getter of the layout property */
MLGruWeightLayout MLGruCellOptions_layout(const MLGruCellOptions *self);

/** @brief Setter of the layout property */
void MLGruCellOptions_set_layout(MLGruCellOptions* self, MLGruWeightLayout * value);

/** @brief Getter of the activations property */
jb_Array MLGruCellOptions_activations(const MLGruCellOptions *self);

/** @brief Setter of the activations property */
void MLGruCellOptions_set_activations(MLGruCellOptions* self, jb_Array * value);

/** @brief Constructor of the MLGruCellOptions dictionary type */
MLGruCellOptions MLGruCellOptions_new();

#ifdef __cplusplus
}
#endif
