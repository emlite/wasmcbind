#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperandDescriptor.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLTensorDescriptor, MLOperandDescriptor);

bool MLTensorDescriptor_readable(const MLTensorDescriptor *self);

void MLTensorDescriptor_set_readable(MLTensorDescriptor* self, bool value);

bool MLTensorDescriptor_writable(const MLTensorDescriptor *self);

void MLTensorDescriptor_set_writable(MLTensorDescriptor* self, bool value);

MLTensorDescriptor MLTensorDescriptor_new();

#ifdef __cplusplus
}
#endif
