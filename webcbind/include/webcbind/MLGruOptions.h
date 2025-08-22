#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MLOperand MLOperand;

/** @brief Dictionary type MLGruOptions */
DECLARE_EMLITE_TYPE(MLGruOptions, MLOperatorOptions);

/** @brief Getter of the bias property */
MLOperand MLGruOptions_bias(const MLGruOptions *self);

/** @brief Setter of the bias property */
void MLGruOptions_set_bias(MLGruOptions* self, MLOperand * value);

/** @brief Getter of the recurrentBias property */
MLOperand MLGruOptions_recurrentBias(const MLGruOptions *self);

/** @brief Setter of the recurrentBias property */
void MLGruOptions_set_recurrentBias(MLGruOptions* self, MLOperand * value);

/** @brief Getter of the initialHiddenState property */
MLOperand MLGruOptions_initialHiddenState(const MLGruOptions *self);

/** @brief Setter of the initialHiddenState property */
void MLGruOptions_set_initialHiddenState(MLGruOptions* self, MLOperand * value);

/** @brief Getter of the resetAfter property */
bool MLGruOptions_resetAfter(const MLGruOptions *self);

/** @brief Setter of the resetAfter property */
void MLGruOptions_set_resetAfter(MLGruOptions* self, bool value);

/** @brief Getter of the returnSequence property */
bool MLGruOptions_returnSequence(const MLGruOptions *self);

/** @brief Setter of the returnSequence property */
void MLGruOptions_set_returnSequence(MLGruOptions* self, bool value);

/** @brief Getter of the direction property */
MLRecurrentNetworkDirection MLGruOptions_direction(const MLGruOptions *self);

/** @brief Setter of the direction property */
void MLGruOptions_set_direction(MLGruOptions* self, MLRecurrentNetworkDirection * value);

/** @brief Getter of the layout property */
MLGruWeightLayout MLGruOptions_layout(const MLGruOptions *self);

/** @brief Setter of the layout property */
void MLGruOptions_set_layout(MLGruOptions* self, MLGruWeightLayout * value);

/** @brief Getter of the activations property */
jb_Array MLGruOptions_activations(const MLGruOptions *self);

/** @brief Setter of the activations property */
void MLGruOptions_set_activations(MLGruOptions* self, jb_Array * value);

/** @brief Constructor of the MLGruOptions dictionary type */
MLGruOptions MLGruOptions_new();

#ifdef __cplusplus
}
#endif
