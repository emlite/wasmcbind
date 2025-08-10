#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUTexture GPUTexture;

DECLARE_EMLITE_TYPE(GPUTexelCopyTextureInfo, em_Val);

GPUTexture GPUTexelCopyTextureInfo_texture(const GPUTexelCopyTextureInfo *self);

void GPUTexelCopyTextureInfo_set_texture(GPUTexelCopyTextureInfo* self, GPUTexture * value);

jb_Any GPUTexelCopyTextureInfo_mipLevel(const GPUTexelCopyTextureInfo *self);

void GPUTexelCopyTextureInfo_set_mipLevel(GPUTexelCopyTextureInfo* self, jb_Any * value);

jb_Any GPUTexelCopyTextureInfo_origin(const GPUTexelCopyTextureInfo *self);

void GPUTexelCopyTextureInfo_set_origin(GPUTexelCopyTextureInfo* self, jb_Any * value);

GPUTextureAspect GPUTexelCopyTextureInfo_aspect(const GPUTexelCopyTextureInfo *self);

void GPUTexelCopyTextureInfo_set_aspect(GPUTexelCopyTextureInfo* self, GPUTextureAspect * value);

GPUTexelCopyTextureInfo GPUTexelCopyTextureInfo_new();

#ifdef __cplusplus
}
#endif
