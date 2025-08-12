#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MLOperand MLOperand;

/** @brief Dictionary type MLLstmCellOptions */
DECLARE_EMLITE_TYPE(MLLstmCellOptions, MLOperatorOptions);

/** @brief Getter of the bias property */
MLOperand MLLstmCellOptions_bias(const MLLstmCellOptions *self);

/** @brief Setter of the bias property */
void MLLstmCellOptions_set_bias(MLLstmCellOptions* self, MLOperand * value);

/** @brief Getter of the recurrentBias property */
MLOperand MLLstmCellOptions_recurrentBias(const MLLstmCellOptions *self);

/** @brief Setter of the recurrentBias property */
void MLLstmCellOptions_set_recurrentBias(MLLstmCellOptions* self, MLOperand * value);

/** @brief Getter of the peepholeWeight property */
MLOperand MLLstmCellOptions_peepholeWeight(const MLLstmCellOptions *self);

/** @brief Setter of the peepholeWeight property */
void MLLstmCellOptions_set_peepholeWeight(MLLstmCellOptions* self, MLOperand * value);

/** @brief Getter of the layout property */
MLLstmWeightLayout MLLstmCellOptions_layout(const MLLstmCellOptions *self);

/** @brief Setter of the layout property */
void MLLstmCellOptions_set_layout(MLLstmCellOptions* self, MLLstmWeightLayout * value);

/** @brief Getter of the activations property */
jb_Array MLLstmCellOptions_activations(const MLLstmCellOptions *self);

/** @brief Setter of the activations property */
void MLLstmCellOptions_set_activations(MLLstmCellOptions* self, jb_Array * value);

/** @brief Constructor of the MLLstmCellOptions dictionary type */
MLLstmCellOptions MLLstmCellOptions_new();

#ifdef __cplusplus
}
#endif
