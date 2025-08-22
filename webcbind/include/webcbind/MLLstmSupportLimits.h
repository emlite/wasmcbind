#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "MLTensorLimits.h"
#include "MLDataTypeLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLLstmSupportLimits */
DECLARE_EMLITE_TYPE(MLLstmSupportLimits, em_Val);

/** @brief Getter of the input property */
MLTensorLimits MLLstmSupportLimits_input(const MLLstmSupportLimits *self);

/** @brief Setter of the input property */
void MLLstmSupportLimits_set_input(MLLstmSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the weight property */
MLTensorLimits MLLstmSupportLimits_weight(const MLLstmSupportLimits *self);

/** @brief Setter of the weight property */
void MLLstmSupportLimits_set_weight(MLLstmSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the recurrentWeight property */
MLTensorLimits MLLstmSupportLimits_recurrentWeight(const MLLstmSupportLimits *self);

/** @brief Setter of the recurrentWeight property */
void MLLstmSupportLimits_set_recurrentWeight(MLLstmSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the bias property */
MLTensorLimits MLLstmSupportLimits_bias(const MLLstmSupportLimits *self);

/** @brief Setter of the bias property */
void MLLstmSupportLimits_set_bias(MLLstmSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the recurrentBias property */
MLTensorLimits MLLstmSupportLimits_recurrentBias(const MLLstmSupportLimits *self);

/** @brief Setter of the recurrentBias property */
void MLLstmSupportLimits_set_recurrentBias(MLLstmSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the peepholeWeight property */
MLTensorLimits MLLstmSupportLimits_peepholeWeight(const MLLstmSupportLimits *self);

/** @brief Setter of the peepholeWeight property */
void MLLstmSupportLimits_set_peepholeWeight(MLLstmSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the initialHiddenState property */
MLTensorLimits MLLstmSupportLimits_initialHiddenState(const MLLstmSupportLimits *self);

/** @brief Setter of the initialHiddenState property */
void MLLstmSupportLimits_set_initialHiddenState(MLLstmSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the initialCellState property */
MLTensorLimits MLLstmSupportLimits_initialCellState(const MLLstmSupportLimits *self);

/** @brief Setter of the initialCellState property */
void MLLstmSupportLimits_set_initialCellState(MLLstmSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the outputs property */
MLDataTypeLimits MLLstmSupportLimits_outputs(const MLLstmSupportLimits *self);

/** @brief Setter of the outputs property */
void MLLstmSupportLimits_set_outputs(MLLstmSupportLimits* self, MLDataTypeLimits * value);

/** @brief Constructor of the MLLstmSupportLimits dictionary type */
MLLstmSupportLimits MLLstmSupportLimits_new();

#ifdef __cplusplus
}
#endif
