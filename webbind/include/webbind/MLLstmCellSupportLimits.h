#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLTensorLimits.h"
#include "MLDataTypeLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLLstmCellSupportLimits */
DECLARE_EMLITE_TYPE(MLLstmCellSupportLimits, em_Val);

/** @brief Getter of the input property */
MLTensorLimits MLLstmCellSupportLimits_input(const MLLstmCellSupportLimits *self);

/** @brief Setter of the input property */
void MLLstmCellSupportLimits_set_input(MLLstmCellSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the weight property */
MLTensorLimits MLLstmCellSupportLimits_weight(const MLLstmCellSupportLimits *self);

/** @brief Setter of the weight property */
void MLLstmCellSupportLimits_set_weight(MLLstmCellSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the recurrentWeight property */
MLTensorLimits MLLstmCellSupportLimits_recurrentWeight(const MLLstmCellSupportLimits *self);

/** @brief Setter of the recurrentWeight property */
void MLLstmCellSupportLimits_set_recurrentWeight(MLLstmCellSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the hiddenState property */
MLTensorLimits MLLstmCellSupportLimits_hiddenState(const MLLstmCellSupportLimits *self);

/** @brief Setter of the hiddenState property */
void MLLstmCellSupportLimits_set_hiddenState(MLLstmCellSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the cellState property */
MLTensorLimits MLLstmCellSupportLimits_cellState(const MLLstmCellSupportLimits *self);

/** @brief Setter of the cellState property */
void MLLstmCellSupportLimits_set_cellState(MLLstmCellSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the bias property */
MLTensorLimits MLLstmCellSupportLimits_bias(const MLLstmCellSupportLimits *self);

/** @brief Setter of the bias property */
void MLLstmCellSupportLimits_set_bias(MLLstmCellSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the recurrentBias property */
MLTensorLimits MLLstmCellSupportLimits_recurrentBias(const MLLstmCellSupportLimits *self);

/** @brief Setter of the recurrentBias property */
void MLLstmCellSupportLimits_set_recurrentBias(MLLstmCellSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the peepholeWeight property */
MLTensorLimits MLLstmCellSupportLimits_peepholeWeight(const MLLstmCellSupportLimits *self);

/** @brief Setter of the peepholeWeight property */
void MLLstmCellSupportLimits_set_peepholeWeight(MLLstmCellSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the outputs property */
MLDataTypeLimits MLLstmCellSupportLimits_outputs(const MLLstmCellSupportLimits *self);

/** @brief Setter of the outputs property */
void MLLstmCellSupportLimits_set_outputs(MLLstmCellSupportLimits* self, MLDataTypeLimits * value);

/** @brief Constructor of the MLLstmCellSupportLimits dictionary type */
MLLstmCellSupportLimits MLLstmCellSupportLimits_new();

#ifdef __cplusplus
}
#endif
