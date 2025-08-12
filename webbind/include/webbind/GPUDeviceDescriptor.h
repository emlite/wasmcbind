#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUObjectDescriptorBase.h"
#include "GPUQueueDescriptor.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUDeviceDescriptor */
DECLARE_EMLITE_TYPE(GPUDeviceDescriptor, GPUObjectDescriptorBase);

/** @brief Getter of the requiredFeatures property */
jb_Array GPUDeviceDescriptor_requiredFeatures(const GPUDeviceDescriptor *self);

/** @brief Setter of the requiredFeatures property */
void GPUDeviceDescriptor_set_requiredFeatures(GPUDeviceDescriptor* self, jb_Array * value);

/** @brief Getter of the requiredLimits property */
jb_Object GPUDeviceDescriptor_requiredLimits(const GPUDeviceDescriptor *self);

/** @brief Setter of the requiredLimits property */
void GPUDeviceDescriptor_set_requiredLimits(GPUDeviceDescriptor* self, jb_Object * value);

/** @brief Getter of the defaultQueue property */
GPUQueueDescriptor GPUDeviceDescriptor_defaultQueue(const GPUDeviceDescriptor *self);

/** @brief Setter of the defaultQueue property */
void GPUDeviceDescriptor_set_defaultQueue(GPUDeviceDescriptor* self, GPUQueueDescriptor * value);

/** @brief Constructor of the GPUDeviceDescriptor dictionary type */
GPUDeviceDescriptor GPUDeviceDescriptor_new();

#ifdef __cplusplus
}
#endif
