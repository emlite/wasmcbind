#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLCumulativeSumOptions */
DECLARE_EMLITE_TYPE(MLCumulativeSumOptions, MLOperatorOptions);

/** @brief Getter of the exclusive property */
bool MLCumulativeSumOptions_exclusive(const MLCumulativeSumOptions *self);

/** @brief Setter of the exclusive property */
void MLCumulativeSumOptions_set_exclusive(MLCumulativeSumOptions* self, bool value);

/** @brief Getter of the reversed property */
bool MLCumulativeSumOptions_reversed(const MLCumulativeSumOptions *self);

/** @brief Setter of the reversed property */
void MLCumulativeSumOptions_set_reversed(MLCumulativeSumOptions* self, bool value);

/** @brief Constructor of the MLCumulativeSumOptions dictionary type */
MLCumulativeSumOptions MLCumulativeSumOptions_new();

#ifdef __cplusplus
}
#endif
