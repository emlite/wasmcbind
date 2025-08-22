#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLHardSigmoidOptions */
DECLARE_EMLITE_TYPE(MLHardSigmoidOptions, MLOperatorOptions);

/** @brief Getter of the alpha property */
double MLHardSigmoidOptions_alpha(const MLHardSigmoidOptions *self);

/** @brief Setter of the alpha property */
void MLHardSigmoidOptions_set_alpha(MLHardSigmoidOptions* self, double value);

/** @brief Getter of the beta property */
double MLHardSigmoidOptions_beta(const MLHardSigmoidOptions *self);

/** @brief Setter of the beta property */
void MLHardSigmoidOptions_set_beta(MLHardSigmoidOptions* self, double value);

/** @brief Constructor of the MLHardSigmoidOptions dictionary type */
MLHardSigmoidOptions MLHardSigmoidOptions_new();

#ifdef __cplusplus
}
#endif
