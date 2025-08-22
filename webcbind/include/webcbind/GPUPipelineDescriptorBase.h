#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "GPUObjectDescriptorBase.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUPipelineDescriptorBase */
DECLARE_EMLITE_TYPE(GPUPipelineDescriptorBase, GPUObjectDescriptorBase);

/** @brief Getter of the layout property */
jb_Any GPUPipelineDescriptorBase_layout(const GPUPipelineDescriptorBase *self);

/** @brief Setter of the layout property */
void GPUPipelineDescriptorBase_set_layout(GPUPipelineDescriptorBase* self, jb_Any * value);

/** @brief Constructor of the GPUPipelineDescriptorBase dictionary type */
GPUPipelineDescriptorBase GPUPipelineDescriptorBase_new();

#ifdef __cplusplus
}
#endif
