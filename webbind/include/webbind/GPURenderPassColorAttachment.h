#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPURenderPassColorAttachment, em_Val);

jb_Any GPURenderPassColorAttachment_view(const GPURenderPassColorAttachment *self);

void GPURenderPassColorAttachment_set_view(GPURenderPassColorAttachment* self, jb_Any * value);

jb_Any GPURenderPassColorAttachment_depthSlice(const GPURenderPassColorAttachment *self);

void GPURenderPassColorAttachment_set_depthSlice(GPURenderPassColorAttachment* self, jb_Any * value);

jb_Any GPURenderPassColorAttachment_resolveTarget(const GPURenderPassColorAttachment *self);

void GPURenderPassColorAttachment_set_resolveTarget(GPURenderPassColorAttachment* self, jb_Any * value);

jb_Any GPURenderPassColorAttachment_clearValue(const GPURenderPassColorAttachment *self);

void GPURenderPassColorAttachment_set_clearValue(GPURenderPassColorAttachment* self, jb_Any * value);

GPULoadOp GPURenderPassColorAttachment_loadOp(const GPURenderPassColorAttachment *self);

void GPURenderPassColorAttachment_set_loadOp(GPURenderPassColorAttachment* self, GPULoadOp * value);

GPUStoreOp GPURenderPassColorAttachment_storeOp(const GPURenderPassColorAttachment *self);

void GPURenderPassColorAttachment_set_storeOp(GPURenderPassColorAttachment* self, GPUStoreOp * value);

GPURenderPassColorAttachment GPURenderPassColorAttachment_new();

#ifdef __cplusplus
}
#endif
