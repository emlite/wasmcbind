#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLReduceOptions, MLOperatorOptions);

jb_Array MLReduceOptions_axes(const MLReduceOptions *self);

void MLReduceOptions_set_axes(MLReduceOptions* self, jb_Array * value);

bool MLReduceOptions_keepDimensions(const MLReduceOptions *self);

void MLReduceOptions_set_keepDimensions(MLReduceOptions* self, bool value);

MLReduceOptions MLReduceOptions_new();

#ifdef __cplusplus
}
#endif
