#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLTransposeOptions, MLOperatorOptions);

jb_Array MLTransposeOptions_permutation(const MLTransposeOptions *self);

void MLTransposeOptions_set_permutation(MLTransposeOptions* self, jb_Array * value);

MLTransposeOptions MLTransposeOptions_new();

#ifdef __cplusplus
}
#endif
