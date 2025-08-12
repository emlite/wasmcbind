#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLScatterOptions */
DECLARE_EMLITE_TYPE(MLScatterOptions, MLOperatorOptions);

/** @brief Getter of the axis property */
unsigned long MLScatterOptions_axis(const MLScatterOptions *self);

/** @brief Setter of the axis property */
void MLScatterOptions_set_axis(MLScatterOptions* self, unsigned long value);

/** @brief Constructor of the MLScatterOptions dictionary type */
MLScatterOptions MLScatterOptions_new();

#ifdef __cplusplus
}
#endif
