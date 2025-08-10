#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUObjectDescriptorBase.h"
#include "GPUBindGroupLayoutEntry.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUBindGroupLayoutDescriptor, GPUObjectDescriptorBase);

jb_Array GPUBindGroupLayoutDescriptor_entries(const GPUBindGroupLayoutDescriptor *self);

void GPUBindGroupLayoutDescriptor_set_entries(GPUBindGroupLayoutDescriptor* self, jb_Array * value);

GPUBindGroupLayoutDescriptor GPUBindGroupLayoutDescriptor_new();

#ifdef __cplusplus
}
#endif
