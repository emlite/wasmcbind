#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUObjectDescriptorBase.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUSamplerDescriptor */
DECLARE_EMLITE_TYPE(GPUSamplerDescriptor, GPUObjectDescriptorBase);

/** @brief Getter of the addressModeU property */
GPUAddressMode GPUSamplerDescriptor_addressModeU(const GPUSamplerDescriptor *self);

/** @brief Setter of the addressModeU property */
void GPUSamplerDescriptor_set_addressModeU(GPUSamplerDescriptor* self, GPUAddressMode * value);

/** @brief Getter of the addressModeV property */
GPUAddressMode GPUSamplerDescriptor_addressModeV(const GPUSamplerDescriptor *self);

/** @brief Setter of the addressModeV property */
void GPUSamplerDescriptor_set_addressModeV(GPUSamplerDescriptor* self, GPUAddressMode * value);

/** @brief Getter of the addressModeW property */
GPUAddressMode GPUSamplerDescriptor_addressModeW(const GPUSamplerDescriptor *self);

/** @brief Setter of the addressModeW property */
void GPUSamplerDescriptor_set_addressModeW(GPUSamplerDescriptor* self, GPUAddressMode * value);

/** @brief Getter of the magFilter property */
GPUFilterMode GPUSamplerDescriptor_magFilter(const GPUSamplerDescriptor *self);

/** @brief Setter of the magFilter property */
void GPUSamplerDescriptor_set_magFilter(GPUSamplerDescriptor* self, GPUFilterMode * value);

/** @brief Getter of the minFilter property */
GPUFilterMode GPUSamplerDescriptor_minFilter(const GPUSamplerDescriptor *self);

/** @brief Setter of the minFilter property */
void GPUSamplerDescriptor_set_minFilter(GPUSamplerDescriptor* self, GPUFilterMode * value);

/** @brief Getter of the mipmapFilter property */
GPUMipmapFilterMode GPUSamplerDescriptor_mipmapFilter(const GPUSamplerDescriptor *self);

/** @brief Setter of the mipmapFilter property */
void GPUSamplerDescriptor_set_mipmapFilter(GPUSamplerDescriptor* self, GPUMipmapFilterMode * value);

/** @brief Getter of the lodMinClamp property */
float GPUSamplerDescriptor_lodMinClamp(const GPUSamplerDescriptor *self);

/** @brief Setter of the lodMinClamp property */
void GPUSamplerDescriptor_set_lodMinClamp(GPUSamplerDescriptor* self, float value);

/** @brief Getter of the lodMaxClamp property */
float GPUSamplerDescriptor_lodMaxClamp(const GPUSamplerDescriptor *self);

/** @brief Setter of the lodMaxClamp property */
void GPUSamplerDescriptor_set_lodMaxClamp(GPUSamplerDescriptor* self, float value);

/** @brief Getter of the compare property */
GPUCompareFunction GPUSamplerDescriptor_compare(const GPUSamplerDescriptor *self);

/** @brief Setter of the compare property */
void GPUSamplerDescriptor_set_compare(GPUSamplerDescriptor* self, GPUCompareFunction * value);

/** @brief Getter of the maxAnisotropy property */
unsigned short GPUSamplerDescriptor_maxAnisotropy(const GPUSamplerDescriptor *self);

/** @brief Setter of the maxAnisotropy property */
void GPUSamplerDescriptor_set_maxAnisotropy(GPUSamplerDescriptor* self, unsigned short value);

/** @brief Constructor of the GPUSamplerDescriptor dictionary type */
GPUSamplerDescriptor GPUSamplerDescriptor_new();

#ifdef __cplusplus
}
#endif
