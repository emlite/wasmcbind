#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLReverseOptions, MLOperatorOptions);

jb_Array MLReverseOptions_axes(const MLReverseOptions *self);

void MLReverseOptions_set_axes(MLReverseOptions* self, jb_Array * value);

MLReverseOptions MLReverseOptions_new();

#ifdef __cplusplus
}
#endif
