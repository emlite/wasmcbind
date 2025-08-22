#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "GPUObjectDescriptorBase.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUTextureDescriptor */
DECLARE_EMLITE_TYPE(GPUTextureDescriptor, GPUObjectDescriptorBase);

/** @brief Getter of the size property */
jb_Any GPUTextureDescriptor_size(const GPUTextureDescriptor *self);

/** @brief Setter of the size property */
void GPUTextureDescriptor_set_size(GPUTextureDescriptor* self, jb_Any * value);

/** @brief Getter of the mipLevelCount property */
jb_Any GPUTextureDescriptor_mipLevelCount(const GPUTextureDescriptor *self);

/** @brief Setter of the mipLevelCount property */
void GPUTextureDescriptor_set_mipLevelCount(GPUTextureDescriptor* self, jb_Any * value);

/** @brief Getter of the sampleCount property */
jb_Any GPUTextureDescriptor_sampleCount(const GPUTextureDescriptor *self);

/** @brief Setter of the sampleCount property */
void GPUTextureDescriptor_set_sampleCount(GPUTextureDescriptor* self, jb_Any * value);

/** @brief Getter of the dimension property */
GPUTextureDimension GPUTextureDescriptor_dimension(const GPUTextureDescriptor *self);

/** @brief Setter of the dimension property */
void GPUTextureDescriptor_set_dimension(GPUTextureDescriptor* self, GPUTextureDimension * value);

/** @brief Getter of the format property */
GPUTextureFormat GPUTextureDescriptor_format(const GPUTextureDescriptor *self);

/** @brief Setter of the format property */
void GPUTextureDescriptor_set_format(GPUTextureDescriptor* self, GPUTextureFormat * value);

/** @brief Getter of the usage property */
jb_Any GPUTextureDescriptor_usage(const GPUTextureDescriptor *self);

/** @brief Setter of the usage property */
void GPUTextureDescriptor_set_usage(GPUTextureDescriptor* self, jb_Any * value);

/** @brief Getter of the viewFormats property */
jb_Array GPUTextureDescriptor_viewFormats(const GPUTextureDescriptor *self);

/** @brief Setter of the viewFormats property */
void GPUTextureDescriptor_set_viewFormats(GPUTextureDescriptor* self, jb_Array * value);

/** @brief Constructor of the GPUTextureDescriptor dictionary type */
GPUTextureDescriptor GPUTextureDescriptor_new();

#ifdef __cplusplus
}
#endif
