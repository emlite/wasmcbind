#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLTensorLimits.h"
#include "MLDataTypeLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLGatherSupportLimits */
DECLARE_EMLITE_TYPE(MLGatherSupportLimits, em_Val);

/** @brief Getter of the input property */
MLTensorLimits MLGatherSupportLimits_input(const MLGatherSupportLimits *self);

/** @brief Setter of the input property */
void MLGatherSupportLimits_set_input(MLGatherSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the indices property */
MLTensorLimits MLGatherSupportLimits_indices(const MLGatherSupportLimits *self);

/** @brief Setter of the indices property */
void MLGatherSupportLimits_set_indices(MLGatherSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the output property */
MLDataTypeLimits MLGatherSupportLimits_output(const MLGatherSupportLimits *self);

/** @brief Setter of the output property */
void MLGatherSupportLimits_set_output(MLGatherSupportLimits* self, MLDataTypeLimits * value);

/** @brief Constructor of the MLGatherSupportLimits dictionary type */
MLGatherSupportLimits MLGatherSupportLimits_new();

#ifdef __cplusplus
}
#endif
