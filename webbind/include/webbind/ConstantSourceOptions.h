#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ConstantSourceOptions, em_Val);

float ConstantSourceOptions_offset(const ConstantSourceOptions *self);

void ConstantSourceOptions_set_offset(ConstantSourceOptions* self, float value);

ConstantSourceOptions ConstantSourceOptions_new();

#ifdef __cplusplus
}
#endif
