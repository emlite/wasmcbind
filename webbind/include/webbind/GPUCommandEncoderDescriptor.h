#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUObjectDescriptorBase.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUCommandEncoderDescriptor, GPUObjectDescriptorBase);

GPUCommandEncoderDescriptor GPUCommandEncoderDescriptor_new();

#ifdef __cplusplus
}
#endif
