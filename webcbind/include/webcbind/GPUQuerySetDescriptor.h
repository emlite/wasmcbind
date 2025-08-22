#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "GPUObjectDescriptorBase.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUQuerySetDescriptor */
DECLARE_EMLITE_TYPE(GPUQuerySetDescriptor, GPUObjectDescriptorBase);

/** @brief Getter of the type property */
GPUQueryType GPUQuerySetDescriptor_type(const GPUQuerySetDescriptor *self);

/** @brief Setter of the type property */
void GPUQuerySetDescriptor_set_type(GPUQuerySetDescriptor* self, GPUQueryType * value);

/** @brief Getter of the count property */
jb_Any GPUQuerySetDescriptor_count(const GPUQuerySetDescriptor *self);

/** @brief Setter of the count property */
void GPUQuerySetDescriptor_set_count(GPUQuerySetDescriptor* self, jb_Any * value);

/** @brief Constructor of the GPUQuerySetDescriptor dictionary type */
GPUQuerySetDescriptor GPUQuerySetDescriptor_new();

#ifdef __cplusplus
}
#endif
