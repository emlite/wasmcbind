#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ChildBreakToken ChildBreakToken;

DECLARE_EMLITE_TYPE(BreakTokenOptions, em_Val);

jb_Array BreakTokenOptions_childBreakTokens(const BreakTokenOptions *self);

void BreakTokenOptions_set_childBreakTokens(BreakTokenOptions* self, jb_Array * value);

jb_Any BreakTokenOptions_data(const BreakTokenOptions *self);

void BreakTokenOptions_set_data(BreakTokenOptions* self, jb_Any * value);

BreakTokenOptions BreakTokenOptions_new();

#ifdef __cplusplus
}
#endif
