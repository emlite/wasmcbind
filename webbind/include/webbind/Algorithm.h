#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(Algorithm, em_Val);

jb_String Algorithm_name(const Algorithm *self);

void Algorithm_set_name(Algorithm* self, jb_String * value);

Algorithm Algorithm_new();

#ifdef __cplusplus
}
#endif
