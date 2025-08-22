#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "MLTensorLimits.h"
#include "MLDataTypeLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLConcatSupportLimits */
DECLARE_EMLITE_TYPE(MLConcatSupportLimits, em_Val);

/** @brief Getter of the inputs property */
MLTensorLimits MLConcatSupportLimits_inputs(const MLConcatSupportLimits *self);

/** @brief Setter of the inputs property */
void MLConcatSupportLimits_set_inputs(MLConcatSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the output property */
MLDataTypeLimits MLConcatSupportLimits_output(const MLConcatSupportLimits *self);

/** @brief Setter of the output property */
void MLConcatSupportLimits_set_output(MLConcatSupportLimits* self, MLDataTypeLimits * value);

/** @brief Constructor of the MLConcatSupportLimits dictionary type */
MLConcatSupportLimits MLConcatSupportLimits_new();

#ifdef __cplusplus
}
#endif
