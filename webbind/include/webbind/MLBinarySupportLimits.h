#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLTensorLimits.h"
#include "MLDataTypeLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLBinarySupportLimits */
DECLARE_EMLITE_TYPE(MLBinarySupportLimits, em_Val);

/** @brief Getter of the a property */
MLTensorLimits MLBinarySupportLimits_a(const MLBinarySupportLimits *self);

/** @brief Setter of the a property */
void MLBinarySupportLimits_set_a(MLBinarySupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the b property */
MLTensorLimits MLBinarySupportLimits_b(const MLBinarySupportLimits *self);

/** @brief Setter of the b property */
void MLBinarySupportLimits_set_b(MLBinarySupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the output property */
MLDataTypeLimits MLBinarySupportLimits_output(const MLBinarySupportLimits *self);

/** @brief Setter of the output property */
void MLBinarySupportLimits_set_output(MLBinarySupportLimits* self, MLDataTypeLimits * value);

/** @brief Constructor of the MLBinarySupportLimits dictionary type */
MLBinarySupportLimits MLBinarySupportLimits_new();

#ifdef __cplusplus
}
#endif
