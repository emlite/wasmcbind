#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLTensorLimits.h"
#include "MLDataTypeLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLGemmSupportLimits */
DECLARE_EMLITE_TYPE(MLGemmSupportLimits, em_Val);

/** @brief Getter of the a property */
MLTensorLimits MLGemmSupportLimits_a(const MLGemmSupportLimits *self);

/** @brief Setter of the a property */
void MLGemmSupportLimits_set_a(MLGemmSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the b property */
MLTensorLimits MLGemmSupportLimits_b(const MLGemmSupportLimits *self);

/** @brief Setter of the b property */
void MLGemmSupportLimits_set_b(MLGemmSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the c property */
MLTensorLimits MLGemmSupportLimits_c(const MLGemmSupportLimits *self);

/** @brief Setter of the c property */
void MLGemmSupportLimits_set_c(MLGemmSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the output property */
MLDataTypeLimits MLGemmSupportLimits_output(const MLGemmSupportLimits *self);

/** @brief Setter of the output property */
void MLGemmSupportLimits_set_output(MLGemmSupportLimits* self, MLDataTypeLimits * value);

/** @brief Constructor of the MLGemmSupportLimits dictionary type */
MLGemmSupportLimits MLGemmSupportLimits_new();

#ifdef __cplusplus
}
#endif
