#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPURenderPassDepthStencilAttachment, em_Val);

jb_Any GPURenderPassDepthStencilAttachment_view(const GPURenderPassDepthStencilAttachment *self);

void GPURenderPassDepthStencilAttachment_set_view(GPURenderPassDepthStencilAttachment* self, jb_Any * value);

float GPURenderPassDepthStencilAttachment_depthClearValue(const GPURenderPassDepthStencilAttachment *self);

void GPURenderPassDepthStencilAttachment_set_depthClearValue(GPURenderPassDepthStencilAttachment* self, float value);

GPULoadOp GPURenderPassDepthStencilAttachment_depthLoadOp(const GPURenderPassDepthStencilAttachment *self);

void GPURenderPassDepthStencilAttachment_set_depthLoadOp(GPURenderPassDepthStencilAttachment* self, GPULoadOp * value);

GPUStoreOp GPURenderPassDepthStencilAttachment_depthStoreOp(const GPURenderPassDepthStencilAttachment *self);

void GPURenderPassDepthStencilAttachment_set_depthStoreOp(GPURenderPassDepthStencilAttachment* self, GPUStoreOp * value);

bool GPURenderPassDepthStencilAttachment_depthReadOnly(const GPURenderPassDepthStencilAttachment *self);

void GPURenderPassDepthStencilAttachment_set_depthReadOnly(GPURenderPassDepthStencilAttachment* self, bool value);

jb_Any GPURenderPassDepthStencilAttachment_stencilClearValue(const GPURenderPassDepthStencilAttachment *self);

void GPURenderPassDepthStencilAttachment_set_stencilClearValue(GPURenderPassDepthStencilAttachment* self, jb_Any * value);

GPULoadOp GPURenderPassDepthStencilAttachment_stencilLoadOp(const GPURenderPassDepthStencilAttachment *self);

void GPURenderPassDepthStencilAttachment_set_stencilLoadOp(GPURenderPassDepthStencilAttachment* self, GPULoadOp * value);

GPUStoreOp GPURenderPassDepthStencilAttachment_stencilStoreOp(const GPURenderPassDepthStencilAttachment *self);

void GPURenderPassDepthStencilAttachment_set_stencilStoreOp(GPURenderPassDepthStencilAttachment* self, GPUStoreOp * value);

bool GPURenderPassDepthStencilAttachment_stencilReadOnly(const GPURenderPassDepthStencilAttachment *self);

void GPURenderPassDepthStencilAttachment_set_stencilReadOnly(GPURenderPassDepthStencilAttachment* self, bool value);

GPURenderPassDepthStencilAttachment GPURenderPassDepthStencilAttachment_new();

#ifdef __cplusplus
}
#endif
