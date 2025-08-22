#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLSplitOptions */
DECLARE_EMLITE_TYPE(MLSplitOptions, MLOperatorOptions);

/** @brief Getter of the axis property */
unsigned long MLSplitOptions_axis(const MLSplitOptions *self);

/** @brief Setter of the axis property */
void MLSplitOptions_set_axis(MLSplitOptions* self, unsigned long value);

/** @brief Constructor of the MLSplitOptions dictionary type */
MLSplitOptions MLSplitOptions_new();

#ifdef __cplusplus
}
#endif
