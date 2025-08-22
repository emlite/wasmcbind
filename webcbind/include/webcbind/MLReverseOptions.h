#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLReverseOptions */
DECLARE_EMLITE_TYPE(MLReverseOptions, MLOperatorOptions);

/** @brief Getter of the axes property */
jb_Array MLReverseOptions_axes(const MLReverseOptions *self);

/** @brief Setter of the axes property */
void MLReverseOptions_set_axes(MLReverseOptions* self, jb_Array * value);

/** @brief Constructor of the MLReverseOptions dictionary type */
MLReverseOptions MLReverseOptions_new();

#ifdef __cplusplus
}
#endif
