#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUTextureBindingLayout */
DECLARE_EMLITE_TYPE(GPUTextureBindingLayout, em_Val);

/** @brief Getter of the sampleType property */
GPUTextureSampleType GPUTextureBindingLayout_sampleType(const GPUTextureBindingLayout *self);

/** @brief Setter of the sampleType property */
void GPUTextureBindingLayout_set_sampleType(GPUTextureBindingLayout* self, GPUTextureSampleType * value);

/** @brief Getter of the viewDimension property */
GPUTextureViewDimension GPUTextureBindingLayout_viewDimension(const GPUTextureBindingLayout *self);

/** @brief Setter of the viewDimension property */
void GPUTextureBindingLayout_set_viewDimension(GPUTextureBindingLayout* self, GPUTextureViewDimension * value);

/** @brief Getter of the multisampled property */
bool GPUTextureBindingLayout_multisampled(const GPUTextureBindingLayout *self);

/** @brief Setter of the multisampled property */
void GPUTextureBindingLayout_set_multisampled(GPUTextureBindingLayout* self, bool value);

/** @brief Constructor of the GPUTextureBindingLayout dictionary type */
GPUTextureBindingLayout GPUTextureBindingLayout_new();

#ifdef __cplusplus
}
#endif
