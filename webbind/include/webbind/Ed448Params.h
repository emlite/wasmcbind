#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Algorithm.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(Ed448Params, Algorithm);

jb_Any Ed448Params_context(const Ed448Params *self);

void Ed448Params_set_context(Ed448Params* self, jb_Any * value);

Ed448Params Ed448Params_new();

#ifdef __cplusplus
}
#endif
