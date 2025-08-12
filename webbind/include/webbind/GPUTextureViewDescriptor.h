#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUObjectDescriptorBase.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUTextureViewDescriptor */
DECLARE_EMLITE_TYPE(GPUTextureViewDescriptor, GPUObjectDescriptorBase);

/** @brief Getter of the format property */
GPUTextureFormat GPUTextureViewDescriptor_format(const GPUTextureViewDescriptor *self);

/** @brief Setter of the format property */
void GPUTextureViewDescriptor_set_format(GPUTextureViewDescriptor* self, GPUTextureFormat * value);

/** @brief Getter of the dimension property */
GPUTextureViewDimension GPUTextureViewDescriptor_dimension(const GPUTextureViewDescriptor *self);

/** @brief Setter of the dimension property */
void GPUTextureViewDescriptor_set_dimension(GPUTextureViewDescriptor* self, GPUTextureViewDimension * value);

/** @brief Getter of the usage property */
jb_Any GPUTextureViewDescriptor_usage(const GPUTextureViewDescriptor *self);

/** @brief Setter of the usage property */
void GPUTextureViewDescriptor_set_usage(GPUTextureViewDescriptor* self, jb_Any * value);

/** @brief Getter of the aspect property */
GPUTextureAspect GPUTextureViewDescriptor_aspect(const GPUTextureViewDescriptor *self);

/** @brief Setter of the aspect property */
void GPUTextureViewDescriptor_set_aspect(GPUTextureViewDescriptor* self, GPUTextureAspect * value);

/** @brief Getter of the baseMipLevel property */
jb_Any GPUTextureViewDescriptor_baseMipLevel(const GPUTextureViewDescriptor *self);

/** @brief Setter of the baseMipLevel property */
void GPUTextureViewDescriptor_set_baseMipLevel(GPUTextureViewDescriptor* self, jb_Any * value);

/** @brief Getter of the mipLevelCount property */
jb_Any GPUTextureViewDescriptor_mipLevelCount(const GPUTextureViewDescriptor *self);

/** @brief Setter of the mipLevelCount property */
void GPUTextureViewDescriptor_set_mipLevelCount(GPUTextureViewDescriptor* self, jb_Any * value);

/** @brief Getter of the baseArrayLayer property */
jb_Any GPUTextureViewDescriptor_baseArrayLayer(const GPUTextureViewDescriptor *self);

/** @brief Setter of the baseArrayLayer property */
void GPUTextureViewDescriptor_set_baseArrayLayer(GPUTextureViewDescriptor* self, jb_Any * value);

/** @brief Getter of the arrayLayerCount property */
jb_Any GPUTextureViewDescriptor_arrayLayerCount(const GPUTextureViewDescriptor *self);

/** @brief Setter of the arrayLayerCount property */
void GPUTextureViewDescriptor_set_arrayLayerCount(GPUTextureViewDescriptor* self, jb_Any * value);

/** @brief Constructor of the GPUTextureViewDescriptor dictionary type */
GPUTextureViewDescriptor GPUTextureViewDescriptor_new();

#ifdef __cplusplus
}
#endif
