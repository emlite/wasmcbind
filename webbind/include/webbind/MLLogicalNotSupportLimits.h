#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLTensorLimits.h"
#include "MLDataTypeLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLLogicalNotSupportLimits */
DECLARE_EMLITE_TYPE(MLLogicalNotSupportLimits, em_Val);

/** @brief Getter of the a property */
MLTensorLimits MLLogicalNotSupportLimits_a(const MLLogicalNotSupportLimits *self);

/** @brief Setter of the a property */
void MLLogicalNotSupportLimits_set_a(MLLogicalNotSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the output property */
MLDataTypeLimits MLLogicalNotSupportLimits_output(const MLLogicalNotSupportLimits *self);

/** @brief Setter of the output property */
void MLLogicalNotSupportLimits_set_output(MLLogicalNotSupportLimits* self, MLDataTypeLimits * value);

/** @brief Constructor of the MLLogicalNotSupportLimits dictionary type */
MLLogicalNotSupportLimits MLLogicalNotSupportLimits_new();

#ifdef __cplusplus
}
#endif
