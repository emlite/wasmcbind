#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUObjectDescriptorBase, em_Val);

jb_String GPUObjectDescriptorBase_label(const GPUObjectDescriptorBase *self);

void GPUObjectDescriptorBase_set_label(GPUObjectDescriptorBase* self, jb_String * value);

GPUObjectDescriptorBase GPUObjectDescriptorBase_new();

#ifdef __cplusplus
}
#endif
