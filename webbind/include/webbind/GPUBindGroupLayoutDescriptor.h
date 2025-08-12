#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUObjectDescriptorBase.h"
#include "GPUBindGroupLayoutEntry.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUBindGroupLayoutDescriptor */
DECLARE_EMLITE_TYPE(GPUBindGroupLayoutDescriptor, GPUObjectDescriptorBase);

/** @brief Getter of the entries property */
jb_Array GPUBindGroupLayoutDescriptor_entries(const GPUBindGroupLayoutDescriptor *self);

/** @brief Setter of the entries property */
void GPUBindGroupLayoutDescriptor_set_entries(GPUBindGroupLayoutDescriptor* self, jb_Array * value);

/** @brief Constructor of the GPUBindGroupLayoutDescriptor dictionary type */
GPUBindGroupLayoutDescriptor GPUBindGroupLayoutDescriptor_new();

#ifdef __cplusplus
}
#endif
