#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUCopyExternalImageSourceInfo, em_Val);

jb_Any GPUCopyExternalImageSourceInfo_source(const GPUCopyExternalImageSourceInfo *self);

void GPUCopyExternalImageSourceInfo_set_source(GPUCopyExternalImageSourceInfo* self, jb_Any * value);

jb_Any GPUCopyExternalImageSourceInfo_origin(const GPUCopyExternalImageSourceInfo *self);

void GPUCopyExternalImageSourceInfo_set_origin(GPUCopyExternalImageSourceInfo* self, jb_Any * value);

bool GPUCopyExternalImageSourceInfo_flipY(const GPUCopyExternalImageSourceInfo *self);

void GPUCopyExternalImageSourceInfo_set_flipY(GPUCopyExternalImageSourceInfo* self, bool value);

GPUCopyExternalImageSourceInfo GPUCopyExternalImageSourceInfo_new();

#ifdef __cplusplus
}
#endif
