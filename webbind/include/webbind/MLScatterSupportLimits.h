#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLTensorLimits.h"
#include "MLDataTypeLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLScatterSupportLimits */
DECLARE_EMLITE_TYPE(MLScatterSupportLimits, em_Val);

/** @brief Getter of the input property */
MLTensorLimits MLScatterSupportLimits_input(const MLScatterSupportLimits *self);

/** @brief Setter of the input property */
void MLScatterSupportLimits_set_input(MLScatterSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the indices property */
MLTensorLimits MLScatterSupportLimits_indices(const MLScatterSupportLimits *self);

/** @brief Setter of the indices property */
void MLScatterSupportLimits_set_indices(MLScatterSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the updates property */
MLTensorLimits MLScatterSupportLimits_updates(const MLScatterSupportLimits *self);

/** @brief Setter of the updates property */
void MLScatterSupportLimits_set_updates(MLScatterSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the output property */
MLDataTypeLimits MLScatterSupportLimits_output(const MLScatterSupportLimits *self);

/** @brief Setter of the output property */
void MLScatterSupportLimits_set_output(MLScatterSupportLimits* self, MLDataTypeLimits * value);

/** @brief Constructor of the MLScatterSupportLimits dictionary type */
MLScatterSupportLimits MLScatterSupportLimits_new();

#ifdef __cplusplus
}
#endif
