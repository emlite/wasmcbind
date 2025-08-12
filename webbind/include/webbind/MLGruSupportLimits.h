#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLTensorLimits.h"
#include "MLDataTypeLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLGruSupportLimits */
DECLARE_EMLITE_TYPE(MLGruSupportLimits, em_Val);

/** @brief Getter of the input property */
MLTensorLimits MLGruSupportLimits_input(const MLGruSupportLimits *self);

/** @brief Setter of the input property */
void MLGruSupportLimits_set_input(MLGruSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the weight property */
MLTensorLimits MLGruSupportLimits_weight(const MLGruSupportLimits *self);

/** @brief Setter of the weight property */
void MLGruSupportLimits_set_weight(MLGruSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the recurrentWeight property */
MLTensorLimits MLGruSupportLimits_recurrentWeight(const MLGruSupportLimits *self);

/** @brief Setter of the recurrentWeight property */
void MLGruSupportLimits_set_recurrentWeight(MLGruSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the bias property */
MLTensorLimits MLGruSupportLimits_bias(const MLGruSupportLimits *self);

/** @brief Setter of the bias property */
void MLGruSupportLimits_set_bias(MLGruSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the recurrentBias property */
MLTensorLimits MLGruSupportLimits_recurrentBias(const MLGruSupportLimits *self);

/** @brief Setter of the recurrentBias property */
void MLGruSupportLimits_set_recurrentBias(MLGruSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the initialHiddenState property */
MLTensorLimits MLGruSupportLimits_initialHiddenState(const MLGruSupportLimits *self);

/** @brief Setter of the initialHiddenState property */
void MLGruSupportLimits_set_initialHiddenState(MLGruSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the outputs property */
MLDataTypeLimits MLGruSupportLimits_outputs(const MLGruSupportLimits *self);

/** @brief Setter of the outputs property */
void MLGruSupportLimits_set_outputs(MLGruSupportLimits* self, MLDataTypeLimits * value);

/** @brief Constructor of the MLGruSupportLimits dictionary type */
MLGruSupportLimits MLGruSupportLimits_new();

#ifdef __cplusplus
}
#endif
