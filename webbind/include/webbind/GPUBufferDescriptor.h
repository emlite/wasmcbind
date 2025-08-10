#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUObjectDescriptorBase.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUBufferDescriptor, GPUObjectDescriptorBase);

jb_Any GPUBufferDescriptor_size(const GPUBufferDescriptor *self);

void GPUBufferDescriptor_set_size(GPUBufferDescriptor* self, jb_Any * value);

jb_Any GPUBufferDescriptor_usage(const GPUBufferDescriptor *self);

void GPUBufferDescriptor_set_usage(GPUBufferDescriptor* self, jb_Any * value);

bool GPUBufferDescriptor_mappedAtCreation(const GPUBufferDescriptor *self);

void GPUBufferDescriptor_set_mappedAtCreation(GPUBufferDescriptor* self, bool value);

GPUBufferDescriptor GPUBufferDescriptor_new();

#ifdef __cplusplus
}
#endif
