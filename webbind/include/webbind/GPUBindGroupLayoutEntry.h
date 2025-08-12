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

/** @brief Dictionary type GPUBindGroupLayoutEntry */
DECLARE_EMLITE_TYPE(GPUBindGroupLayoutEntry, em_Val);

/** @brief Getter of the binding property */
jb_Any GPUBindGroupLayoutEntry_binding(const GPUBindGroupLayoutEntry *self);

/** @brief Setter of the binding property */
void GPUBindGroupLayoutEntry_set_binding(GPUBindGroupLayoutEntry* self, jb_Any * value);

/** @brief Getter of the visibility property */
jb_Any GPUBindGroupLayoutEntry_visibility(const GPUBindGroupLayoutEntry *self);

/** @brief Setter of the visibility property */
void GPUBindGroupLayoutEntry_set_visibility(GPUBindGroupLayoutEntry* self, jb_Any * value);

/** @brief Getter of the buffer property */
GPUBufferBindingLayout GPUBindGroupLayoutEntry_buffer(const GPUBindGroupLayoutEntry *self);

/** @brief Setter of the buffer property */
void GPUBindGroupLayoutEntry_set_buffer(GPUBindGroupLayoutEntry* self, GPUBufferBindingLayout * value);

/** @brief Getter of the sampler property */
GPUSamplerBindingLayout GPUBindGroupLayoutEntry_sampler(const GPUBindGroupLayoutEntry *self);

/** @brief Setter of the sampler property */
void GPUBindGroupLayoutEntry_set_sampler(GPUBindGroupLayoutEntry* self, GPUSamplerBindingLayout * value);

/** @brief Getter of the texture property */
GPUTextureBindingLayout GPUBindGroupLayoutEntry_texture(const GPUBindGroupLayoutEntry *self);

/** @brief Setter of the texture property */
void GPUBindGroupLayoutEntry_set_texture(GPUBindGroupLayoutEntry* self, GPUTextureBindingLayout * value);

/** @brief Getter of the storageTexture property */
GPUStorageTextureBindingLayout GPUBindGroupLayoutEntry_storageTexture(const GPUBindGroupLayoutEntry *self);

/** @brief Setter of the storageTexture property */
void GPUBindGroupLayoutEntry_set_storageTexture(GPUBindGroupLayoutEntry* self, GPUStorageTextureBindingLayout * value);

/** @brief Getter of the externalTexture property */
GPUExternalTextureBindingLayout GPUBindGroupLayoutEntry_externalTexture(const GPUBindGroupLayoutEntry *self);

/** @brief Setter of the externalTexture property */
void GPUBindGroupLayoutEntry_set_externalTexture(GPUBindGroupLayoutEntry* self, GPUExternalTextureBindingLayout * value);

/** @brief Constructor of the GPUBindGroupLayoutEntry dictionary type */
GPUBindGroupLayoutEntry GPUBindGroupLayoutEntry_new();

#ifdef __cplusplus
}
#endif
