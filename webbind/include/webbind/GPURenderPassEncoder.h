#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct GPURenderBundle GPURenderBundle;
typedef struct GPUBindGroup GPUBindGroup;
typedef struct GPURenderPipeline GPURenderPipeline;
typedef struct GPUBuffer GPUBuffer;


typedef struct {
  em_Val inner;
} GPURenderPassEncoder;


DECLARE_EMLITE_TYPE(GPURenderPassEncoder, em_Val);

jb_Undefined GPURenderPassEncoder_setViewport(GPURenderPassEncoder* self , float x, float y, float width, float height, float minDepth, float maxDepth);

jb_Undefined GPURenderPassEncoder_setScissorRect(GPURenderPassEncoder* self , const jb_Any* x, const jb_Any* y, const jb_Any* width, const jb_Any* height);

jb_Undefined GPURenderPassEncoder_setBlendConstant(GPURenderPassEncoder* self , const jb_Any* color);

jb_Undefined GPURenderPassEncoder_setStencilReference(GPURenderPassEncoder* self , const jb_Any* reference);

jb_Undefined GPURenderPassEncoder_beginOcclusionQuery(GPURenderPassEncoder* self , const jb_Any* queryIndex);

jb_Undefined GPURenderPassEncoder_endOcclusionQuery(GPURenderPassEncoder* self );

jb_Undefined GPURenderPassEncoder_executeBundles(GPURenderPassEncoder* self , const jb_Sequence* bundles);

jb_Undefined GPURenderPassEncoder_end(GPURenderPassEncoder* self );

jb_USVString GPURenderPassEncoder_label( const GPURenderPassEncoder *self);

void GPURenderPassEncoder_set_label(GPURenderPassEncoder* self, const jb_USVString* value);

jb_Undefined GPURenderPassEncoder_pushDebugGroup(GPURenderPassEncoder* self , const jb_USVString* groupLabel);

jb_Undefined GPURenderPassEncoder_popDebugGroup(GPURenderPassEncoder* self );

jb_Undefined GPURenderPassEncoder_insertDebugMarker(GPURenderPassEncoder* self , const jb_USVString* markerLabel);

jb_Undefined GPURenderPassEncoder_setBindGroup(GPURenderPassEncoder* self , const jb_Any* index, const GPUBindGroup* bindGroup, const jb_Uint32Array* dynamicOffsetsData, const jb_Any* dynamicOffsetsDataStart, const jb_Any* dynamicOffsetsDataLength);

jb_Undefined GPURenderPassEncoder_setPipeline(GPURenderPassEncoder* self , const GPURenderPipeline* pipeline);

jb_Undefined GPURenderPassEncoder_setIndexBuffer(GPURenderPassEncoder* self , const GPUBuffer* buffer, const GPUIndexFormat* indexFormat);

jb_Undefined GPURenderPassEncoder_setIndexBuffer(GPURenderPassEncoder* self , const GPUBuffer* buffer, const GPUIndexFormat* indexFormat, const jb_Any* offset);

jb_Undefined GPURenderPassEncoder_setIndexBuffer(GPURenderPassEncoder* self , const GPUBuffer* buffer, const GPUIndexFormat* indexFormat, const jb_Any* offset, const jb_Any* size);

jb_Undefined GPURenderPassEncoder_setVertexBuffer(GPURenderPassEncoder* self , const jb_Any* slot, const GPUBuffer* buffer);

jb_Undefined GPURenderPassEncoder_setVertexBuffer(GPURenderPassEncoder* self , const jb_Any* slot, const GPUBuffer* buffer, const jb_Any* offset);

jb_Undefined GPURenderPassEncoder_setVertexBuffer(GPURenderPassEncoder* self , const jb_Any* slot, const GPUBuffer* buffer, const jb_Any* offset, const jb_Any* size);

jb_Undefined GPURenderPassEncoder_draw(GPURenderPassEncoder* self , const jb_Any* vertexCount);

jb_Undefined GPURenderPassEncoder_draw(GPURenderPassEncoder* self , const jb_Any* vertexCount, const jb_Any* instanceCount);

jb_Undefined GPURenderPassEncoder_draw(GPURenderPassEncoder* self , const jb_Any* vertexCount, const jb_Any* instanceCount, const jb_Any* firstVertex);

jb_Undefined GPURenderPassEncoder_draw(GPURenderPassEncoder* self , const jb_Any* vertexCount, const jb_Any* instanceCount, const jb_Any* firstVertex, const jb_Any* firstInstance);

jb_Undefined GPURenderPassEncoder_drawIndexed(GPURenderPassEncoder* self , const jb_Any* indexCount);

jb_Undefined GPURenderPassEncoder_drawIndexed(GPURenderPassEncoder* self , const jb_Any* indexCount, const jb_Any* instanceCount);

jb_Undefined GPURenderPassEncoder_drawIndexed(GPURenderPassEncoder* self , const jb_Any* indexCount, const jb_Any* instanceCount, const jb_Any* firstIndex);

jb_Undefined GPURenderPassEncoder_drawIndexed(GPURenderPassEncoder* self , const jb_Any* indexCount, const jb_Any* instanceCount, const jb_Any* firstIndex, const jb_Any* baseVertex);

jb_Undefined GPURenderPassEncoder_drawIndexed(GPURenderPassEncoder* self , const jb_Any* indexCount, const jb_Any* instanceCount, const jb_Any* firstIndex, const jb_Any* baseVertex, const jb_Any* firstInstance);

jb_Undefined GPURenderPassEncoder_drawIndirect(GPURenderPassEncoder* self , const GPUBuffer* indirectBuffer, const jb_Any* indirectOffset);

jb_Undefined GPURenderPassEncoder_drawIndexedIndirect(GPURenderPassEncoder* self , const GPUBuffer* indirectBuffer, const jb_Any* indirectOffset);
