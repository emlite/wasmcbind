#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "GPUObjectDescriptorBase.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUQueueDescriptor */
DECLARE_EMLITE_TYPE(GPUQueueDescriptor, GPUObjectDescriptorBase);

/** @brief Constructor of the GPUQueueDescriptor dictionary type */
GPUQueueDescriptor GPUQueueDescriptor_new();

#ifdef __cplusplus
}
#endif
