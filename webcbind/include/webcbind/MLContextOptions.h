#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLContextOptions */
DECLARE_EMLITE_TYPE(MLContextOptions, em_Val);

/** @brief Getter of the powerPreference property */
MLPowerPreference MLContextOptions_powerPreference(const MLContextOptions *self);

/** @brief Setter of the powerPreference property */
void MLContextOptions_set_powerPreference(MLContextOptions* self, MLPowerPreference * value);

/** @brief Constructor of the MLContextOptions dictionary type */
MLContextOptions MLContextOptions_new();

#ifdef __cplusplus
}
#endif
