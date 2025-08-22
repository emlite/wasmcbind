#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "GPUObjectDescriptorBase.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPURenderPassLayout */
DECLARE_EMLITE_TYPE(GPURenderPassLayout, GPUObjectDescriptorBase);

/** @brief Getter of the colorFormats property */
jb_Array GPURenderPassLayout_colorFormats(const GPURenderPassLayout *self);

/** @brief Setter of the colorFormats property */
void GPURenderPassLayout_set_colorFormats(GPURenderPassLayout* self, jb_Array * value);

/** @brief Getter of the depthStencilFormat property */
GPUTextureFormat GPURenderPassLayout_depthStencilFormat(const GPURenderPassLayout *self);

/** @brief Setter of the depthStencilFormat property */
void GPURenderPassLayout_set_depthStencilFormat(GPURenderPassLayout* self, GPUTextureFormat * value);

/** @brief Getter of the sampleCount property */
jb_Any GPURenderPassLayout_sampleCount(const GPURenderPassLayout *self);

/** @brief Setter of the sampleCount property */
void GPURenderPassLayout_set_sampleCount(GPURenderPassLayout* self, jb_Any * value);

/** @brief Constructor of the GPURenderPassLayout dictionary type */
GPURenderPassLayout GPURenderPassLayout_new();

#ifdef __cplusplus
}
#endif
