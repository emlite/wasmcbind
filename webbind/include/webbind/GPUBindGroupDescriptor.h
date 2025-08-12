#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUObjectDescriptorBase.h"
#include "GPUBindGroupEntry.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUBindGroupLayout GPUBindGroupLayout;

/** @brief Dictionary type GPUBindGroupDescriptor */
DECLARE_EMLITE_TYPE(GPUBindGroupDescriptor, GPUObjectDescriptorBase);

/** @brief Getter of the layout property */
GPUBindGroupLayout GPUBindGroupDescriptor_layout(const GPUBindGroupDescriptor *self);

/** @brief Setter of the layout property */
void GPUBindGroupDescriptor_set_layout(GPUBindGroupDescriptor* self, GPUBindGroupLayout * value);

/** @brief Getter of the entries property */
jb_Array GPUBindGroupDescriptor_entries(const GPUBindGroupDescriptor *self);

/** @brief Setter of the entries property */
void GPUBindGroupDescriptor_set_entries(GPUBindGroupDescriptor* self, jb_Array * value);

/** @brief Constructor of the GPUBindGroupDescriptor dictionary type */
GPUBindGroupDescriptor GPUBindGroupDescriptor_new();

#ifdef __cplusplus
}
#endif
