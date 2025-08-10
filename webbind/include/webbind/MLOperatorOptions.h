#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLOperatorOptions, em_Val);

jb_String MLOperatorOptions_label(const MLOperatorOptions *self);

void MLOperatorOptions_set_label(MLOperatorOptions* self, jb_String * value);

MLOperatorOptions MLOperatorOptions_new();

#ifdef __cplusplus
}
#endif
