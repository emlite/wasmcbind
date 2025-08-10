#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUCanvasToneMapping.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUDevice GPUDevice;

DECLARE_EMLITE_TYPE(GPUCanvasConfiguration, em_Val);

GPUDevice GPUCanvasConfiguration_device(const GPUCanvasConfiguration *self);

void GPUCanvasConfiguration_set_device(GPUCanvasConfiguration* self, GPUDevice * value);

GPUTextureFormat GPUCanvasConfiguration_format(const GPUCanvasConfiguration *self);

void GPUCanvasConfiguration_set_format(GPUCanvasConfiguration* self, GPUTextureFormat * value);

jb_Any GPUCanvasConfiguration_usage(const GPUCanvasConfiguration *self);

void GPUCanvasConfiguration_set_usage(GPUCanvasConfiguration* self, jb_Any * value);

jb_Array GPUCanvasConfiguration_viewFormats(const GPUCanvasConfiguration *self);

void GPUCanvasConfiguration_set_viewFormats(GPUCanvasConfiguration* self, jb_Array * value);

PredefinedColorSpace GPUCanvasConfiguration_colorSpace(const GPUCanvasConfiguration *self);

void GPUCanvasConfiguration_set_colorSpace(GPUCanvasConfiguration* self, PredefinedColorSpace * value);

GPUCanvasToneMapping GPUCanvasConfiguration_toneMapping(const GPUCanvasConfiguration *self);

void GPUCanvasConfiguration_set_toneMapping(GPUCanvasConfiguration* self, GPUCanvasToneMapping * value);

GPUCanvasAlphaMode GPUCanvasConfiguration_alphaMode(const GPUCanvasConfiguration *self);

void GPUCanvasConfiguration_set_alphaMode(GPUCanvasConfiguration* self, GPUCanvasAlphaMode * value);

GPUCanvasConfiguration GPUCanvasConfiguration_new();

#ifdef __cplusplus
}
#endif
