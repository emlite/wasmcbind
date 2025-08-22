#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLLinearOptions */
DECLARE_EMLITE_TYPE(MLLinearOptions, MLOperatorOptions);

/** @brief Getter of the alpha property */
double MLLinearOptions_alpha(const MLLinearOptions *self);

/** @brief Setter of the alpha property */
void MLLinearOptions_set_alpha(MLLinearOptions* self, double value);

/** @brief Getter of the beta property */
double MLLinearOptions_beta(const MLLinearOptions *self);

/** @brief Setter of the beta property */
void MLLinearOptions_set_beta(MLLinearOptions* self, double value);

/** @brief Constructor of the MLLinearOptions dictionary type */
MLLinearOptions MLLinearOptions_new();

#ifdef __cplusplus
}
#endif
