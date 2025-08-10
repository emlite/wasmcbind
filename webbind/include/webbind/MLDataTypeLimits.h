#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLDataTypeLimits, em_Val);

jb_Any MLDataTypeLimits_dataTypes(const MLDataTypeLimits *self);

void MLDataTypeLimits_set_dataTypes(MLDataTypeLimits* self, jb_Any * value);

MLDataTypeLimits MLDataTypeLimits_new();

#ifdef __cplusplus
}
#endif
