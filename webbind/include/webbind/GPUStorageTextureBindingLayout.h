#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUStorageTextureBindingLayout */
DECLARE_EMLITE_TYPE(GPUStorageTextureBindingLayout, em_Val);

/** @brief Getter of the access property */
GPUStorageTextureAccess GPUStorageTextureBindingLayout_access(const GPUStorageTextureBindingLayout *self);

/** @brief Setter of the access property */
void GPUStorageTextureBindingLayout_set_access(GPUStorageTextureBindingLayout* self, GPUStorageTextureAccess * value);

/** @brief Getter of the format property */
GPUTextureFormat GPUStorageTextureBindingLayout_format(const GPUStorageTextureBindingLayout *self);

/** @brief Setter of the format property */
void GPUStorageTextureBindingLayout_set_format(GPUStorageTextureBindingLayout* self, GPUTextureFormat * value);

/** @brief Getter of the viewDimension property */
GPUTextureViewDimension GPUStorageTextureBindingLayout_viewDimension(const GPUStorageTextureBindingLayout *self);

/** @brief Setter of the viewDimension property */
void GPUStorageTextureBindingLayout_set_viewDimension(GPUStorageTextureBindingLayout* self, GPUTextureViewDimension * value);

/** @brief Constructor of the GPUStorageTextureBindingLayout dictionary type */
GPUStorageTextureBindingLayout GPUStorageTextureBindingLayout_new();

#ifdef __cplusplus
}
#endif
