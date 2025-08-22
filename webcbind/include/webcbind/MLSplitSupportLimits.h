#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "MLTensorLimits.h"
#include "MLDataTypeLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLSplitSupportLimits */
DECLARE_EMLITE_TYPE(MLSplitSupportLimits, em_Val);

/** @brief Getter of the input property */
MLTensorLimits MLSplitSupportLimits_input(const MLSplitSupportLimits *self);

/** @brief Setter of the input property */
void MLSplitSupportLimits_set_input(MLSplitSupportLimits* self, MLTensorLimits * value);

/** @brief Getter of the outputs property */
MLDataTypeLimits MLSplitSupportLimits_outputs(const MLSplitSupportLimits *self);

/** @brief Setter of the outputs property */
void MLSplitSupportLimits_set_outputs(MLSplitSupportLimits* self, MLDataTypeLimits * value);

/** @brief Constructor of the MLSplitSupportLimits dictionary type */
MLSplitSupportLimits MLSplitSupportLimits_new();

#ifdef __cplusplus
}
#endif
