#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLSliceOptions */
DECLARE_EMLITE_TYPE(MLSliceOptions, MLOperatorOptions);

/** @brief Getter of the strides property */
jb_Array MLSliceOptions_strides(const MLSliceOptions *self);

/** @brief Setter of the strides property */
void MLSliceOptions_set_strides(MLSliceOptions* self, jb_Array * value);

/** @brief Constructor of the MLSliceOptions dictionary type */
MLSliceOptions MLSliceOptions_new();

#ifdef __cplusplus
}
#endif
