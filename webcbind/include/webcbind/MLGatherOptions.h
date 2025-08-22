#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLGatherOptions */
DECLARE_EMLITE_TYPE(MLGatherOptions, MLOperatorOptions);

/** @brief Getter of the axis property */
unsigned long MLGatherOptions_axis(const MLGatherOptions *self);

/** @brief Setter of the axis property */
void MLGatherOptions_set_axis(MLGatherOptions* self, unsigned long value);

/** @brief Constructor of the MLGatherOptions dictionary type */
MLGatherOptions MLGatherOptions_new();

#ifdef __cplusplus
}
#endif
