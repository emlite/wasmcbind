#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "MLTensorLimits.h"
#include "MLDataTypeLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLPreluSupportLimits */
DECLARE_EMLITE_TYPE(MLPreluSupportLimits, em_Val);

/** @brief Getter of the input property */
MLTensorLimits MLPreluSupportLimits_input(const MLPreluSupportLimits *self);

/** @brief Setter of the input property */
void MLPreluSupportLimits_set_input(MLPreluSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the slope property */
MLTensorLimits MLPreluSupportLimits_slope(const MLPreluSupportLimits *self);

/** @brief Setter of the slope property */
void MLPreluSupportLimits_set_slope(MLPreluSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the output property */
MLDataTypeLimits MLPreluSupportLimits_output(const MLPreluSupportLimits *self);

/** @brief Setter of the output property */
void MLPreluSupportLimits_set_output(MLPreluSupportLimits* self, MLDataTypeLimits * value);

/** @brief Constructor of the MLPreluSupportLimits dictionary type */
MLPreluSupportLimits MLPreluSupportLimits_new();

#ifdef __cplusplus
}
#endif
