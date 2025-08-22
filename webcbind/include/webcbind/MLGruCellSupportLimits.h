#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "MLTensorLimits.h"
#include "MLDataTypeLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLGruCellSupportLimits */
DECLARE_EMLITE_TYPE(MLGruCellSupportLimits, em_Val);

/** @brief Getter of the input property */
MLTensorLimits MLGruCellSupportLimits_input(const MLGruCellSupportLimits *self);

/** @brief Setter of the input property */
void MLGruCellSupportLimits_set_input(MLGruCellSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the weight property */
MLTensorLimits MLGruCellSupportLimits_weight(const MLGruCellSupportLimits *self);

/** @brief Setter of the weight property */
void MLGruCellSupportLimits_set_weight(MLGruCellSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the recurrentWeight property */
MLTensorLimits MLGruCellSupportLimits_recurrentWeight(const MLGruCellSupportLimits *self);

/** @brief Setter of the recurrentWeight property */
void MLGruCellSupportLimits_set_recurrentWeight(MLGruCellSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the hiddenState property */
MLTensorLimits MLGruCellSupportLimits_hiddenState(const MLGruCellSupportLimits *self);

/** @brief Setter of the hiddenState property */
void MLGruCellSupportLimits_set_hiddenState(MLGruCellSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the bias property */
MLTensorLimits MLGruCellSupportLimits_bias(const MLGruCellSupportLimits *self);

/** @brief Setter of the bias property */
void MLGruCellSupportLimits_set_bias(MLGruCellSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the recurrentBias property */
MLTensorLimits MLGruCellSupportLimits_recurrentBias(const MLGruCellSupportLimits *self);

/** @brief Setter of the recurrentBias property */
void MLGruCellSupportLimits_set_recurrentBias(MLGruCellSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the output property */
MLDataTypeLimits MLGruCellSupportLimits_output(const MLGruCellSupportLimits *self);

/** @brief Setter of the output property */
void MLGruCellSupportLimits_set_output(MLGruCellSupportLimits* self, MLDataTypeLimits * value);

/** @brief Constructor of the MLGruCellSupportLimits dictionary type */
MLGruCellSupportLimits MLGruCellSupportLimits_new();

#ifdef __cplusplus
}
#endif
