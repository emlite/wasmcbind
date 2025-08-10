#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLPadOptions, MLOperatorOptions);

MLPaddingMode MLPadOptions_mode(const MLPadOptions *self);

void MLPadOptions_set_mode(MLPadOptions* self, MLPaddingMode * value);

jb_Any MLPadOptions_value(const MLPadOptions *self);

void MLPadOptions_set_value(MLPadOptions* self, jb_Any * value);

MLPadOptions MLPadOptions_new();

#ifdef __cplusplus
}
#endif
