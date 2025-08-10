#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUObjectDescriptorBase.h"
#include "GPUQueueDescriptor.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUDeviceDescriptor, GPUObjectDescriptorBase);

jb_Array GPUDeviceDescriptor_requiredFeatures(const GPUDeviceDescriptor *self);

void GPUDeviceDescriptor_set_requiredFeatures(GPUDeviceDescriptor* self, jb_Array * value);

jb_Object GPUDeviceDescriptor_requiredLimits(const GPUDeviceDescriptor *self);

void GPUDeviceDescriptor_set_requiredLimits(GPUDeviceDescriptor* self, jb_Object * value);

GPUQueueDescriptor GPUDeviceDescriptor_defaultQueue(const GPUDeviceDescriptor *self);

void GPUDeviceDescriptor_set_defaultQueue(GPUDeviceDescriptor* self, GPUQueueDescriptor * value);

GPUDeviceDescriptor GPUDeviceDescriptor_new();

#ifdef __cplusplus
}
#endif
