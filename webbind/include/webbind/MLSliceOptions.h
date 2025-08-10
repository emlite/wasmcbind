#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLSliceOptions, MLOperatorOptions);

jb_Array MLSliceOptions_strides(const MLSliceOptions *self);

void MLSliceOptions_set_strides(MLSliceOptions* self, jb_Array * value);

MLSliceOptions MLSliceOptions_new();

#ifdef __cplusplus
}
#endif
