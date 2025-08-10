#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUPipelineDescriptorBase.h"
#include "GPUVertexState.h"
#include "GPUPrimitiveState.h"
#include "GPUDepthStencilState.h"
#include "GPUMultisampleState.h"
#include "GPUFragmentState.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPURenderPipelineDescriptor, GPUPipelineDescriptorBase);

GPUVertexState GPURenderPipelineDescriptor_vertex(const GPURenderPipelineDescriptor *self);

void GPURenderPipelineDescriptor_set_vertex(GPURenderPipelineDescriptor* self, GPUVertexState * value);

GPUPrimitiveState GPURenderPipelineDescriptor_primitive(const GPURenderPipelineDescriptor *self);

void GPURenderPipelineDescriptor_set_primitive(GPURenderPipelineDescriptor* self, GPUPrimitiveState * value);

GPUDepthStencilState GPURenderPipelineDescriptor_depthStencil(const GPURenderPipelineDescriptor *self);

void GPURenderPipelineDescriptor_set_depthStencil(GPURenderPipelineDescriptor* self, GPUDepthStencilState * value);

GPUMultisampleState GPURenderPipelineDescriptor_multisample(const GPURenderPipelineDescriptor *self);

void GPURenderPipelineDescriptor_set_multisample(GPURenderPipelineDescriptor* self, GPUMultisampleState * value);

GPUFragmentState GPURenderPipelineDescriptor_fragment(const GPURenderPipelineDescriptor *self);

void GPURenderPipelineDescriptor_set_fragment(GPURenderPipelineDescriptor* self, GPUFragmentState * value);

GPURenderPipelineDescriptor GPURenderPipelineDescriptor_new();

#ifdef __cplusplus
}
#endif
