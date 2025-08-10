#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUTextureView GPUTextureView;
typedef struct GPUTextureViewDescriptor GPUTextureViewDescriptor;

DECLARE_EMLITE_TYPE(GPUTexture, em_Val);

GPUTextureView GPUTexture_createView0(GPUTexture* self );

GPUTextureView GPUTexture_createView1(GPUTexture* self , GPUTextureViewDescriptor * descriptor);

jb_Undefined GPUTexture_destroy(GPUTexture* self );

jb_Any GPUTexture_width(const GPUTexture *self);

jb_Any GPUTexture_height(const GPUTexture *self);

jb_Any GPUTexture_depthOrArrayLayers(const GPUTexture *self);

jb_Any GPUTexture_mipLevelCount(const GPUTexture *self);

jb_Any GPUTexture_sampleCount(const GPUTexture *self);

GPUTextureDimension GPUTexture_dimension(const GPUTexture *self);

GPUTextureFormat GPUTexture_format(const GPUTexture *self);

jb_Any GPUTexture_usage(const GPUTexture *self);

jb_String GPUTexture_label(const GPUTexture *self);

void GPUTexture_set_label(GPUTexture* self, jb_String * value);

#ifdef __cplusplus
}
#endif
