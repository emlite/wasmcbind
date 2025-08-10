#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GlobalDescriptor, em_Val);

ValueType GlobalDescriptor_value(const GlobalDescriptor *self);

void GlobalDescriptor_set_value(GlobalDescriptor* self, ValueType * value);

bool GlobalDescriptor_mutable_(const GlobalDescriptor *self);

void GlobalDescriptor_set_mutable_(GlobalDescriptor* self, bool value);

GlobalDescriptor GlobalDescriptor_new();

#ifdef __cplusplus
}
#endif
