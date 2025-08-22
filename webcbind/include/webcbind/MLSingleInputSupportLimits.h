#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "MLTensorLimits.h"
#include "MLDataTypeLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLSingleInputSupportLimits */
DECLARE_EMLITE_TYPE(MLSingleInputSupportLimits, em_Val);

/** @brief Getter of the input property */
MLTensorLimits MLSingleInputSupportLimits_input(const MLSingleInputSupportLimits *self);

/** @brief Setter of the input property */
void MLSingleInputSupportLimits_set_input(MLSingleInputSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the output property */
MLDataTypeLimits MLSingleInputSupportLimits_output(const MLSingleInputSupportLimits *self);

/** @brief Setter of the output property */
void MLSingleInputSupportLimits_set_output(MLSingleInputSupportLimits* self, MLDataTypeLimits * value);

/** @brief Constructor of the MLSingleInputSupportLimits dictionary type */
MLSingleInputSupportLimits MLSingleInputSupportLimits_new();

#ifdef __cplusplus
}
#endif
