#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUObjectDescriptorBase */
DECLARE_EMLITE_TYPE(GPUObjectDescriptorBase, em_Val);

/** @brief Getter of the label property */
jb_String GPUObjectDescriptorBase_label(const GPUObjectDescriptorBase *self);

/** @brief Setter of the label property */
void GPUObjectDescriptorBase_set_label(GPUObjectDescriptorBase* self, jb_String * value);

/** @brief Constructor of the GPUObjectDescriptorBase dictionary type */
GPUObjectDescriptorBase GPUObjectDescriptorBase_new();

#ifdef __cplusplus
}
#endif
