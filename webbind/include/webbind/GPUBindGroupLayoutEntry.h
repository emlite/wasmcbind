#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUBufferBindingLayout.h"
#include "GPUSamplerBindingLayout.h"
#include "GPUTextureBindingLayout.h"
#include "GPUStorageTextureBindingLayout.h"
#include "GPUExternalTextureBindingLayout.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUBindGroupLayoutEntry, em_Val);

jb_Any GPUBindGroupLayoutEntry_binding(const GPUBindGroupLayoutEntry *self);

void GPUBindGroupLayoutEntry_set_binding(GPUBindGroupLayoutEntry* self, jb_Any * value);

jb_Any GPUBindGroupLayoutEntry_visibility(const GPUBindGroupLayoutEntry *self);

void GPUBindGroupLayoutEntry_set_visibility(GPUBindGroupLayoutEntry* self, jb_Any * value);

GPUBufferBindingLayout GPUBindGroupLayoutEntry_buffer(const GPUBindGroupLayoutEntry *self);

void GPUBindGroupLayoutEntry_set_buffer(GPUBindGroupLayoutEntry* self, GPUBufferBindingLayout * value);

GPUSamplerBindingLayout GPUBindGroupLayoutEntry_sampler(const GPUBindGroupLayoutEntry *self);

void GPUBindGroupLayoutEntry_set_sampler(GPUBindGroupLayoutEntry* self, GPUSamplerBindingLayout * value);

GPUTextureBindingLayout GPUBindGroupLayoutEntry_texture(const GPUBindGroupLayoutEntry *self);

void GPUBindGroupLayoutEntry_set_texture(GPUBindGroupLayoutEntry* self, GPUTextureBindingLayout * value);

GPUStorageTextureBindingLayout GPUBindGroupLayoutEntry_storageTexture(const GPUBindGroupLayoutEntry *self);

void GPUBindGroupLayoutEntry_set_storageTexture(GPUBindGroupLayoutEntry* self, GPUStorageTextureBindingLayout * value);

GPUExternalTextureBindingLayout GPUBindGroupLayoutEntry_externalTexture(const GPUBindGroupLayoutEntry *self);

void GPUBindGroupLayoutEntry_set_externalTexture(GPUBindGroupLayoutEntry* self, GPUExternalTextureBindingLayout * value);

GPUBindGroupLayoutEntry GPUBindGroupLayoutEntry_new();

#ifdef __cplusplus
}
#endif
