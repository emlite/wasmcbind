#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLTransposeOptions */
DECLARE_EMLITE_TYPE(MLTransposeOptions, MLOperatorOptions);

/** @brief Getter of the permutation property */
jb_Array MLTransposeOptions_permutation(const MLTransposeOptions *self);

/** @brief Setter of the permutation property */
void MLTransposeOptions_set_permutation(MLTransposeOptions* self, jb_Array * value);

/** @brief Constructor of the MLTransposeOptions dictionary type */
MLTransposeOptions MLTransposeOptions_new();

#ifdef __cplusplus
}
#endif
