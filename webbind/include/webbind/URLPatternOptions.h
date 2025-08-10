#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(URLPatternOptions, em_Val);

bool URLPatternOptions_ignoreCase(const URLPatternOptions *self);

void URLPatternOptions_set_ignoreCase(URLPatternOptions* self, bool value);

URLPatternOptions URLPatternOptions_new();

#ifdef __cplusplus
}
#endif
