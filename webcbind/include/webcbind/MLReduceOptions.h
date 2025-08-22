#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLReduceOptions */
DECLARE_EMLITE_TYPE(MLReduceOptions, MLOperatorOptions);

/** @brief Getter of the axes property */
jb_Array MLReduceOptions_axes(const MLReduceOptions *self);

/** @brief Setter of the axes property */
void MLReduceOptions_set_axes(MLReduceOptions* self, jb_Array * value);

/** @brief Getter of the keepDimensions property */
bool MLReduceOptions_keepDimensions(const MLReduceOptions *self);

/** @brief Setter of the keepDimensions property */
void MLReduceOptions_set_keepDimensions(MLReduceOptions* self, bool value);

/** @brief Constructor of the MLReduceOptions dictionary type */
MLReduceOptions MLReduceOptions_new();

#ifdef __cplusplus
}
#endif
