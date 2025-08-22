#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "GPUObjectDescriptorBase.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPURenderBundleDescriptor */
DECLARE_EMLITE_TYPE(GPURenderBundleDescriptor, GPUObjectDescriptorBase);

/** @brief Constructor of the GPURenderBundleDescriptor dictionary type */
GPURenderBundleDescriptor GPURenderBundleDescriptor_new();

#ifdef __cplusplus
}
#endif
