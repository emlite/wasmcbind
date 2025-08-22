#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "GPUObjectDescriptorBase.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUBufferDescriptor */
DECLARE_EMLITE_TYPE(GPUBufferDescriptor, GPUObjectDescriptorBase);

/** @brief Getter of the size property */
jb_Any GPUBufferDescriptor_size(const GPUBufferDescriptor *self);

/** @brief Setter of the size property */
void GPUBufferDescriptor_set_size(GPUBufferDescriptor* self, jb_Any * value);

/** @brief Getter of the usage property */
jb_Any GPUBufferDescriptor_usage(const GPUBufferDescriptor *self);

/** @brief Setter of the usage property */
void GPUBufferDescriptor_set_usage(GPUBufferDescriptor* self, jb_Any * value);

/** @brief Getter of the mappedAtCreation property */
bool GPUBufferDescriptor_mappedAtCreation(const GPUBufferDescriptor *self);

/** @brief Setter of the mappedAtCreation property */
void GPUBufferDescriptor_set_mappedAtCreation(GPUBufferDescriptor* self, bool value);

/** @brief Constructor of the GPUBufferDescriptor dictionary type */
GPUBufferDescriptor GPUBufferDescriptor_new();

#ifdef __cplusplus
}
#endif
