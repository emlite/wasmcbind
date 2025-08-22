#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "MLTensorLimits.h"
#include "MLDataTypeLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLConv2dSupportLimits */
DECLARE_EMLITE_TYPE(MLConv2dSupportLimits, em_Val);

/** @brief Getter of the input property */
MLTensorLimits MLConv2dSupportLimits_input(const MLConv2dSupportLimits *self);

/** @brief Setter of the input property */
void MLConv2dSupportLimits_set_input(MLConv2dSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the filter property */
MLTensorLimits MLConv2dSupportLimits_filter(const MLConv2dSupportLimits *self);

/** @brief Setter of the filter property */
void MLConv2dSupportLimits_set_filter(MLConv2dSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the bias property */
MLTensorLimits MLConv2dSupportLimits_bias(const MLConv2dSupportLimits *self);

/** @brief Setter of the bias property */
void MLConv2dSupportLimits_set_bias(MLConv2dSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the output property */
MLDataTypeLimits MLConv2dSupportLimits_output(const MLConv2dSupportLimits *self);

/** @brief Setter of the output property */
void MLConv2dSupportLimits_set_output(MLConv2dSupportLimits* self, MLDataTypeLimits * value);

/** @brief Constructor of the MLConv2dSupportLimits dictionary type */
MLConv2dSupportLimits MLConv2dSupportLimits_new();

#ifdef __cplusplus
}
#endif
