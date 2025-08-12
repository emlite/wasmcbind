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

/** @brief Dictionary type GPURenderPipelineDescriptor */
DECLARE_EMLITE_TYPE(GPURenderPipelineDescriptor, GPUPipelineDescriptorBase);

/** @brief Getter of the vertex property */
GPUVertexState GPURenderPipelineDescriptor_vertex(const GPURenderPipelineDescriptor *self);

/** @brief Setter of the vertex property */
void GPURenderPipelineDescriptor_set_vertex(GPURenderPipelineDescriptor* self, GPUVertexState * value);

/** @brief Getter of the primitive property */
GPUPrimitiveState GPURenderPipelineDescriptor_primitive(const GPURenderPipelineDescriptor *self);

/** @brief Setter of the primitive property */
void GPURenderPipelineDescriptor_set_primitive(GPURenderPipelineDescriptor* self, GPUPrimitiveState * value);

/** @brief Getter of the depthStencil property */
GPUDepthStencilState GPURenderPipelineDescriptor_depthStencil(const GPURenderPipelineDescriptor *self);

/** @brief Setter of the depthStencil property */
void GPURenderPipelineDescriptor_set_depthStencil(GPURenderPipelineDescriptor* self, GPUDepthStencilState * value);

/** @brief Getter of the multisample property */
GPUMultisampleState GPURenderPipelineDescriptor_multisample(const GPURenderPipelineDescriptor *self);

/** @brief Setter of the multisample property */
void GPURenderPipelineDescriptor_set_multisample(GPURenderPipelineDescriptor* self, GPUMultisampleState * value);

/** @brief Getter of the fragment property */
GPUFragmentState GPURenderPipelineDescriptor_fragment(const GPURenderPipelineDescriptor *self);

/** @brief Setter of the fragment property */
void GPURenderPipelineDescriptor_set_fragment(GPURenderPipelineDescriptor* self, GPUFragmentState * value);

/** @brief Constructor of the GPURenderPipelineDescriptor dictionary type */
GPURenderPipelineDescriptor GPURenderPipelineDescriptor_new();

#ifdef __cplusplus
}
#endif
