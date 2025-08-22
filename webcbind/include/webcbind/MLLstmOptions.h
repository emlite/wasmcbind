#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MLOperand MLOperand;

/** @brief Dictionary type MLLstmOptions */
DECLARE_EMLITE_TYPE(MLLstmOptions, MLOperatorOptions);

/** @brief Getter of the bias property */
MLOperand MLLstmOptions_bias(const MLLstmOptions *self);

/** @brief Setter of the bias property */
void MLLstmOptions_set_bias(MLLstmOptions* self, MLOperand * value);

/** @brief Getter of the recurrentBias property */
MLOperand MLLstmOptions_recurrentBias(const MLLstmOptions *self);

/** @brief Setter of the recurrentBias property */
void MLLstmOptions_set_recurrentBias(MLLstmOptions* self, MLOperand * value);

/** @brief Getter of the peepholeWeight property */
MLOperand MLLstmOptions_peepholeWeight(const MLLstmOptions *self);

/** @brief Setter of the peepholeWeight property */
void MLLstmOptions_set_peepholeWeight(MLLstmOptions* self, MLOperand * value);

/** @brief Getter of the initialHiddenState property */
MLOperand MLLstmOptions_initialHiddenState(const MLLstmOptions *self);

/** @brief Setter of the initialHiddenState property */
void MLLstmOptions_set_initialHiddenState(MLLstmOptions* self, MLOperand * value);

/** @brief Getter of the initialCellState property */
MLOperand MLLstmOptions_initialCellState(const MLLstmOptions *self);

/** @brief Setter of the initialCellState property */
void MLLstmOptions_set_initialCellState(MLLstmOptions* self, MLOperand * value);

/** @brief Getter of the returnSequence property */
bool MLLstmOptions_returnSequence(const MLLstmOptions *self);

/** @brief Setter of the returnSequence property */
void MLLstmOptions_set_returnSequence(MLLstmOptions* self, bool value);

/** @brief Getter of the direction property */
MLRecurrentNetworkDirection MLLstmOptions_direction(const MLLstmOptions *self);

/** @brief Setter of the direction property */
void MLLstmOptions_set_direction(MLLstmOptions* self, MLRecurrentNetworkDirection * value);

/** @brief Getter of the layout property */
MLLstmWeightLayout MLLstmOptions_layout(const MLLstmOptions *self);

/** @brief Setter of the layout property */
void MLLstmOptions_set_layout(MLLstmOptions* self, MLLstmWeightLayout * value);

/** @brief Getter of the activations property */
jb_Array MLLstmOptions_activations(const MLLstmOptions *self);

/** @brief Setter of the activations property */
void MLLstmOptions_set_activations(MLLstmOptions* self, jb_Array * value);

/** @brief Constructor of the MLLstmOptions dictionary type */
MLLstmOptions MLLstmOptions_new();

#ifdef __cplusplus
}
#endif
