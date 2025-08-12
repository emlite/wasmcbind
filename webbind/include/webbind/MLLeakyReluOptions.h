#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLLeakyReluOptions */
DECLARE_EMLITE_TYPE(MLLeakyReluOptions, MLOperatorOptions);

/** @brief Getter of the alpha property */
double MLLeakyReluOptions_alpha(const MLLeakyReluOptions *self);

/** @brief Setter of the alpha property */
void MLLeakyReluOptions_set_alpha(MLLeakyReluOptions* self, double value);

/** @brief Constructor of the MLLeakyReluOptions dictionary type */
MLLeakyReluOptions MLLeakyReluOptions_new();

#ifdef __cplusplus
}
#endif
