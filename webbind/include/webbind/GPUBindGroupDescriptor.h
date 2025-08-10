#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUObjectDescriptorBase.h"
#include "GPUBindGroupEntry.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUBindGroupLayout GPUBindGroupLayout;

DECLARE_EMLITE_TYPE(GPUBindGroupDescriptor, GPUObjectDescriptorBase);

GPUBindGroupLayout GPUBindGroupDescriptor_layout(const GPUBindGroupDescriptor *self);

void GPUBindGroupDescriptor_set_layout(GPUBindGroupDescriptor* self, GPUBindGroupLayout * value);

jb_Array GPUBindGroupDescriptor_entries(const GPUBindGroupDescriptor *self);

void GPUBindGroupDescriptor_set_entries(GPUBindGroupDescriptor* self, jb_Array * value);

GPUBindGroupDescriptor GPUBindGroupDescriptor_new();

#ifdef __cplusplus
}
#endif
