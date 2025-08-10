#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUTexelCopyTextureInfo.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUCopyExternalImageDestInfo, GPUTexelCopyTextureInfo);

PredefinedColorSpace GPUCopyExternalImageDestInfo_colorSpace(const GPUCopyExternalImageDestInfo *self);

void GPUCopyExternalImageDestInfo_set_colorSpace(GPUCopyExternalImageDestInfo* self, PredefinedColorSpace * value);

bool GPUCopyExternalImageDestInfo_premultipliedAlpha(const GPUCopyExternalImageDestInfo *self);

void GPUCopyExternalImageDestInfo_set_premultipliedAlpha(GPUCopyExternalImageDestInfo* self, bool value);

GPUCopyExternalImageDestInfo GPUCopyExternalImageDestInfo_new();

#ifdef __cplusplus
}
#endif
