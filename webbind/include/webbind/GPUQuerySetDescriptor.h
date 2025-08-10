#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUObjectDescriptorBase.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUQuerySetDescriptor, GPUObjectDescriptorBase);

GPUQueryType GPUQuerySetDescriptor_type(const GPUQuerySetDescriptor *self);

void GPUQuerySetDescriptor_set_type(GPUQuerySetDescriptor* self, GPUQueryType * value);

jb_Any GPUQuerySetDescriptor_count(const GPUQuerySetDescriptor *self);

void GPUQuerySetDescriptor_set_count(GPUQuerySetDescriptor* self, jb_Any * value);

GPUQuerySetDescriptor GPUQuerySetDescriptor_new();

#ifdef __cplusplus
}
#endif
