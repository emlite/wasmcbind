#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "GPUObjectDescriptorBase.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUCommandEncoderDescriptor */
DECLARE_EMLITE_TYPE(GPUCommandEncoderDescriptor, GPUObjectDescriptorBase);

/** @brief Constructor of the GPUCommandEncoderDescriptor dictionary type */
GPUCommandEncoderDescriptor GPUCommandEncoderDescriptor_new();

#ifdef __cplusplus
}
#endif
