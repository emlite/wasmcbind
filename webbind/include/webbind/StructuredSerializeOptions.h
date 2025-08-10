#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(StructuredSerializeOptions, em_Val);

jb_Array StructuredSerializeOptions_transfer(const StructuredSerializeOptions *self);

void StructuredSerializeOptions_set_transfer(StructuredSerializeOptions* self, jb_Array * value);

StructuredSerializeOptions StructuredSerializeOptions_new();

#ifdef __cplusplus
}
#endif
