#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PADebugModeOptions */
DECLARE_EMLITE_TYPE(PADebugModeOptions, em_Val);

/** @brief Getter of the debugKey property */
long long PADebugModeOptions_debugKey(const PADebugModeOptions *self);

/** @brief Setter of the debugKey property */
void PADebugModeOptions_set_debugKey(PADebugModeOptions* self, long long value);

/** @brief Constructor of the PADebugModeOptions dictionary type */
PADebugModeOptions PADebugModeOptions_new();

#ifdef __cplusplus
}
#endif
