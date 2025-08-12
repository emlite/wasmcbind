#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUObjectDescriptorBase.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUCommandBufferDescriptor */
DECLARE_EMLITE_TYPE(GPUCommandBufferDescriptor, GPUObjectDescriptorBase);

/** @brief Constructor of the GPUCommandBufferDescriptor dictionary type */
GPUCommandBufferDescriptor GPUCommandBufferDescriptor_new();

#ifdef __cplusplus
}
#endif
