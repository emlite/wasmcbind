#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type URLPatternOptions */
DECLARE_EMLITE_TYPE(URLPatternOptions, em_Val);

/** @brief Getter of the ignoreCase property */
bool URLPatternOptions_ignoreCase(const URLPatternOptions *self);

/** @brief Setter of the ignoreCase property */
void URLPatternOptions_set_ignoreCase(URLPatternOptions* self, bool value);

/** @brief Constructor of the URLPatternOptions dictionary type */
URLPatternOptions URLPatternOptions_new();

#ifdef __cplusplus
}
#endif
