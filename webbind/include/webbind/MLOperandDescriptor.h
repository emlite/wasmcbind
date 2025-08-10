#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLOperandDescriptor, em_Val);

MLOperandDataType MLOperandDescriptor_dataType(const MLOperandDescriptor *self);

void MLOperandDescriptor_set_dataType(MLOperandDescriptor* self, MLOperandDataType * value);

jb_Array MLOperandDescriptor_shape(const MLOperandDescriptor *self);

void MLOperandDescriptor_set_shape(MLOperandDescriptor* self, jb_Array * value);

MLOperandDescriptor MLOperandDescriptor_new();

#ifdef __cplusplus
}
#endif
