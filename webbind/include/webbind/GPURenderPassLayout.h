#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUObjectDescriptorBase.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPURenderPassLayout, GPUObjectDescriptorBase);

jb_Array GPURenderPassLayout_colorFormats(const GPURenderPassLayout *self);

void GPURenderPassLayout_set_colorFormats(GPURenderPassLayout* self, jb_Array * value);

GPUTextureFormat GPURenderPassLayout_depthStencilFormat(const GPURenderPassLayout *self);

void GPURenderPassLayout_set_depthStencilFormat(GPURenderPassLayout* self, GPUTextureFormat * value);

jb_Any GPURenderPassLayout_sampleCount(const GPURenderPassLayout *self);

void GPURenderPassLayout_set_sampleCount(GPURenderPassLayout* self, jb_Any * value);

GPURenderPassLayout GPURenderPassLayout_new();

#ifdef __cplusplus
}
#endif
