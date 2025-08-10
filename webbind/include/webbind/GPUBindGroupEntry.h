#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUBindGroupEntry, em_Val);

jb_Any GPUBindGroupEntry_binding(const GPUBindGroupEntry *self);

void GPUBindGroupEntry_set_binding(GPUBindGroupEntry* self, jb_Any * value);

jb_Any GPUBindGroupEntry_resource(const GPUBindGroupEntry *self);

void GPUBindGroupEntry_set_resource(GPUBindGroupEntry* self, jb_Any * value);

GPUBindGroupEntry GPUBindGroupEntry_new();

#ifdef __cplusplus
}
#endif
