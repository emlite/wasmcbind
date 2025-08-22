#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "MLTensorLimits.h"
#include "MLDataTypeLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLWhereSupportLimits */
DECLARE_EMLITE_TYPE(MLWhereSupportLimits, em_Val);

/** @brief Getter of the condition property */
MLTensorLimits MLWhereSupportLimits_condition(const MLWhereSupportLimits *self);

/** @brief Setter of the condition property */
void MLWhereSupportLimits_set_condition(MLWhereSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the trueValue property */
MLTensorLimits MLWhereSupportLimits_trueValue(const MLWhereSupportLimits *self);

/** @brief Setter of the trueValue property */
void MLWhereSupportLimits_set_trueValue(MLWhereSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the falseValue property */
MLTensorLimits MLWhereSupportLimits_falseValue(const MLWhereSupportLimits *self);

/** @brief Setter of the falseValue property */
void MLWhereSupportLimits_set_falseValue(MLWhereSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the output property */
MLDataTypeLimits MLWhereSupportLimits_output(const MLWhereSupportLimits *self);

/** @brief Setter of the output property */
void MLWhereSupportLimits_set_output(MLWhereSupportLimits* self, MLDataTypeLimits * value);

/** @brief Constructor of the MLWhereSupportLimits dictionary type */
MLWhereSupportLimits MLWhereSupportLimits_new();

#ifdef __cplusplus
}
#endif
