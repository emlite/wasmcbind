#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MemoryDescriptor, em_Val);

unsigned long MemoryDescriptor_initial(const MemoryDescriptor *self);

void MemoryDescriptor_set_initial(MemoryDescriptor* self, unsigned long value);

unsigned long MemoryDescriptor_maximum(const MemoryDescriptor *self);

void MemoryDescriptor_set_maximum(MemoryDescriptor* self, unsigned long value);

MemoryDescriptor MemoryDescriptor_new();

#ifdef __cplusplus
}
#endif
