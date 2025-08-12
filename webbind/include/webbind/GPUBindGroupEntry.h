#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUBindGroupEntry */
DECLARE_EMLITE_TYPE(GPUBindGroupEntry, em_Val);

/** @brief Getter of the binding property */
jb_Any GPUBindGroupEntry_binding(const GPUBindGroupEntry *self);

/** @brief Setter of the binding property */
void GPUBindGroupEntry_set_binding(GPUBindGroupEntry* self, jb_Any * value);

/** @brief Getter of the resource property */
jb_Any GPUBindGroupEntry_resource(const GPUBindGroupEntry *self);

/** @brief Setter of the resource property */
void GPUBindGroupEntry_set_resource(GPUBindGroupEntry* self, jb_Any * value);

/** @brief Constructor of the GPUBindGroupEntry dictionary type */
GPUBindGroupEntry GPUBindGroupEntry_new();

#ifdef __cplusplus
}
#endif
