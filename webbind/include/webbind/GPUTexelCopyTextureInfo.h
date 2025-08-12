#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUTexture GPUTexture;

/** @brief Dictionary type GPUTexelCopyTextureInfo */
DECLARE_EMLITE_TYPE(GPUTexelCopyTextureInfo, em_Val);

/** @brief Getter of the texture property */
GPUTexture GPUTexelCopyTextureInfo_texture(const GPUTexelCopyTextureInfo *self);

/** @brief Setter of the texture property */
void GPUTexelCopyTextureInfo_set_texture(GPUTexelCopyTextureInfo* self, GPUTexture * value);

/** @brief Getter of the mipLevel property */
jb_Any GPUTexelCopyTextureInfo_mipLevel(const GPUTexelCopyTextureInfo *self);

/** @brief Setter of the mipLevel property */
void GPUTexelCopyTextureInfo_set_mipLevel(GPUTexelCopyTextureInfo* self, jb_Any * value);

/** @brief Getter of the origin property */
jb_Any GPUTexelCopyTextureInfo_origin(const GPUTexelCopyTextureInfo *self);

/** @brief Setter of the origin property */
void GPUTexelCopyTextureInfo_set_origin(GPUTexelCopyTextureInfo* self, jb_Any * value);

/** @brief Getter of the aspect property */
GPUTextureAspect GPUTexelCopyTextureInfo_aspect(const GPUTexelCopyTextureInfo *self);

/** @brief Setter of the aspect property */
void GPUTexelCopyTextureInfo_set_aspect(GPUTexelCopyTextureInfo* self, GPUTextureAspect * value);

/** @brief Constructor of the GPUTexelCopyTextureInfo dictionary type */
GPUTexelCopyTextureInfo GPUTexelCopyTextureInfo_new();

#ifdef __cplusplus
}
#endif
