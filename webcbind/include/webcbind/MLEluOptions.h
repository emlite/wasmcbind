#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLEluOptions */
DECLARE_EMLITE_TYPE(MLEluOptions, MLOperatorOptions);

/** @brief Getter of the alpha property */
double MLEluOptions_alpha(const MLEluOptions *self);

/** @brief Setter of the alpha property */
void MLEluOptions_set_alpha(MLEluOptions* self, double value);

/** @brief Constructor of the MLEluOptions dictionary type */
MLEluOptions MLEluOptions_new();

#ifdef __cplusplus
}
#endif
