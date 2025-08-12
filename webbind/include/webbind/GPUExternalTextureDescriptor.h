#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUObjectDescriptorBase.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUExternalTextureDescriptor */
DECLARE_EMLITE_TYPE(GPUExternalTextureDescriptor, GPUObjectDescriptorBase);

/** @brief Getter of the source property */
jb_Any GPUExternalTextureDescriptor_source(const GPUExternalTextureDescriptor *self);

/** @brief Setter of the source property */
void GPUExternalTextureDescriptor_set_source(GPUExternalTextureDescriptor* self, jb_Any * value);

/** @brief Getter of the colorSpace property */
PredefinedColorSpace GPUExternalTextureDescriptor_colorSpace(const GPUExternalTextureDescriptor *self);

/** @brief Setter of the colorSpace property */
void GPUExternalTextureDescriptor_set_colorSpace(GPUExternalTextureDescriptor* self, PredefinedColorSpace * value);

/** @brief Constructor of the GPUExternalTextureDescriptor dictionary type */
GPUExternalTextureDescriptor GPUExternalTextureDescriptor_new();

#ifdef __cplusplus
}
#endif
