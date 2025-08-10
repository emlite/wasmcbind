#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUObjectDescriptorBase.h"
#include "GPURenderPassColorAttachment.h"
#include "GPURenderPassDepthStencilAttachment.h"
#include "GPURenderPassTimestampWrites.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUQuerySet GPUQuerySet;

DECLARE_EMLITE_TYPE(GPURenderPassDescriptor, GPUObjectDescriptorBase);

jb_Array GPURenderPassDescriptor_colorAttachments(const GPURenderPassDescriptor *self);

void GPURenderPassDescriptor_set_colorAttachments(GPURenderPassDescriptor* self, jb_Array * value);

GPURenderPassDepthStencilAttachment GPURenderPassDescriptor_depthStencilAttachment(const GPURenderPassDescriptor *self);

void GPURenderPassDescriptor_set_depthStencilAttachment(GPURenderPassDescriptor* self, GPURenderPassDepthStencilAttachment * value);

GPUQuerySet GPURenderPassDescriptor_occlusionQuerySet(const GPURenderPassDescriptor *self);

void GPURenderPassDescriptor_set_occlusionQuerySet(GPURenderPassDescriptor* self, GPUQuerySet * value);

GPURenderPassTimestampWrites GPURenderPassDescriptor_timestampWrites(const GPURenderPassDescriptor *self);

void GPURenderPassDescriptor_set_timestampWrites(GPURenderPassDescriptor* self, GPURenderPassTimestampWrites * value);

jb_Any GPURenderPassDescriptor_maxDrawCount(const GPURenderPassDescriptor *self);

void GPURenderPassDescriptor_set_maxDrawCount(GPURenderPassDescriptor* self, jb_Any * value);

GPURenderPassDescriptor GPURenderPassDescriptor_new();

#ifdef __cplusplus
}
#endif
