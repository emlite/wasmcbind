#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(URLPatternComponentResult, em_Val);

jb_String URLPatternComponentResult_input(const URLPatternComponentResult *self);

void URLPatternComponentResult_set_input(URLPatternComponentResult* self, jb_String * value);

jb_Object URLPatternComponentResult_groups(const URLPatternComponentResult *self);

void URLPatternComponentResult_set_groups(URLPatternComponentResult* self, jb_Object * value);

URLPatternComponentResult URLPatternComponentResult_new();

#ifdef __cplusplus
}
#endif
