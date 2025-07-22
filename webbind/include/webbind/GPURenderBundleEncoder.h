#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct GPURenderBundle GPURenderBundle;
typedef struct GPURenderBundleDescriptor GPURenderBundleDescriptor;
typedef struct GPUBindGroup GPUBindGroup;
typedef struct GPURenderPipeline GPURenderPipeline;
typedef struct GPUBuffer GPUBuffer;


typedef struct {
  em_Val inner;
} GPURenderBundleDescriptor;


DECLARE_EMLITE_TYPE(GPURenderBundleDescriptor, em_Val);
typedef struct {
  em_Val inner;
} GPURenderBundleEncoder;


DECLARE_EMLITE_TYPE(GPURenderBundleEncoder, em_Val);

GPURenderBundle GPURenderBundleEncoder_finish(GPURenderBundleEncoder* self );

GPURenderBundle GPURenderBundleEncoder_finish(GPURenderBundleEncoder* self , const GPURenderBundleDescriptor* descriptor);

jb_USVString GPURenderBundleEncoder_label( const GPURenderBundleEncoder *self);

void GPURenderBundleEncoder_set_label(GPURenderBundleEncoder* self, const jb_USVString* value);

jb_Undefined GPURenderBundleEncoder_pushDebugGroup(GPURenderBundleEncoder* self , const jb_USVString* groupLabel);

jb_Undefined GPURenderBundleEncoder_popDebugGroup(GPURenderBundleEncoder* self );

jb_Undefined GPURenderBundleEncoder_insertDebugMarker(GPURenderBundleEncoder* self , const jb_USVString* markerLabel);

jb_Undefined GPURenderBundleEncoder_setBindGroup(GPURenderBundleEncoder* self , const jb_Any* index, const GPUBindGroup* bindGroup, const jb_Uint32Array* dynamicOffsetsData, const jb_Any* dynamicOffsetsDataStart, const jb_Any* dynamicOffsetsDataLength);

jb_Undefined GPURenderBundleEncoder_setPipeline(GPURenderBundleEncoder* self , const GPURenderPipeline* pipeline);

jb_Undefined GPURenderBundleEncoder_setIndexBuffer(GPURenderBundleEncoder* self , const GPUBuffer* buffer, const GPUIndexFormat* indexFormat);

jb_Undefined GPURenderBundleEncoder_setIndexBuffer(GPURenderBundleEncoder* self , const GPUBuffer* buffer, const GPUIndexFormat* indexFormat, const jb_Any* offset);

jb_Undefined GPURenderBundleEncoder_setIndexBuffer(GPURenderBundleEncoder* self , const GPUBuffer* buffer, const GPUIndexFormat* indexFormat, const jb_Any* offset, const jb_Any* size);

jb_Undefined GPURenderBundleEncoder_setVertexBuffer(GPURenderBundleEncoder* self , const jb_Any* slot, const GPUBuffer* buffer);

jb_Undefined GPURenderBundleEncoder_setVertexBuffer(GPURenderBundleEncoder* self , const jb_Any* slot, const GPUBuffer* buffer, const jb_Any* offset);

jb_Undefined GPURenderBundleEncoder_setVertexBuffer(GPURenderBundleEncoder* self , const jb_Any* slot, const GPUBuffer* buffer, const jb_Any* offset, const jb_Any* size);

jb_Undefined GPURenderBundleEncoder_draw(GPURenderBundleEncoder* self , const jb_Any* vertexCount);

jb_Undefined GPURenderBundleEncoder_draw(GPURenderBundleEncoder* self , const jb_Any* vertexCount, const jb_Any* instanceCount);

jb_Undefined GPURenderBundleEncoder_draw(GPURenderBundleEncoder* self , const jb_Any* vertexCount, const jb_Any* instanceCount, const jb_Any* firstVertex);

jb_Undefined GPURenderBundleEncoder_draw(GPURenderBundleEncoder* self , const jb_Any* vertexCount, const jb_Any* instanceCount, const jb_Any* firstVertex, const jb_Any* firstInstance);

jb_Undefined GPURenderBundleEncoder_drawIndexed(GPURenderBundleEncoder* self , const jb_Any* indexCount);

jb_Undefined GPURenderBundleEncoder_drawIndexed(GPURenderBundleEncoder* self , const jb_Any* indexCount, const jb_Any* instanceCount);

jb_Undefined GPURenderBundleEncoder_drawIndexed(GPURenderBundleEncoder* self , const jb_Any* indexCount, const jb_Any* instanceCount, const jb_Any* firstIndex);

jb_Undefined GPURenderBundleEncoder_drawIndexed(GPURenderBundleEncoder* self , const jb_Any* indexCount, const jb_Any* instanceCount, const jb_Any* firstIndex, const jb_Any* baseVertex);

jb_Undefined GPURenderBundleEncoder_drawIndexed(GPURenderBundleEncoder* self , const jb_Any* indexCount, const jb_Any* instanceCount, const jb_Any* firstIndex, const jb_Any* baseVertex, const jb_Any* firstInstance);

jb_Undefined GPURenderBundleEncoder_drawIndirect(GPURenderBundleEncoder* self , const GPUBuffer* indirectBuffer, const jb_Any* indirectOffset);

jb_Undefined GPURenderBundleEncoder_drawIndexedIndirect(GPURenderBundleEncoder* self , const GPUBuffer* indirectBuffer, const jb_Any* indirectOffset);
