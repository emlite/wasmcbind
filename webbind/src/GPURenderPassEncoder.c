#include <webbind/GPURenderPassEncoder.h>
#include <webbind/GPURenderBundle.h>
#include <webbind/GPUBindGroup.h>
#include <webbind/GPURenderPipeline.h>
#include <webbind/GPUBuffer.h>


DEFINE_EMLITE_TYPE(GPURenderPassEncoder, em_Val);


jb_Undefined GPURenderPassEncoder_setViewport(GPURenderPassEncoder* self , float x, float y, float width, float height, float minDepth, float maxDepth) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setViewport", em_Val_from(x), em_Val_from(y), em_Val_from(width), em_Val_from(height), em_Val_from(minDepth), em_Val_from(maxDepth)));
}


jb_Undefined GPURenderPassEncoder_setScissorRect(GPURenderPassEncoder* self , jb_Any * x, jb_Any * y, jb_Any * width, jb_Any * height) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setScissorRect", em_Val_from(x), em_Val_from(y), em_Val_from(width), em_Val_from(height)));
}


jb_Undefined GPURenderPassEncoder_setBlendConstant(GPURenderPassEncoder* self , jb_Any * color) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setBlendConstant", em_Val_from(color)));
}


jb_Undefined GPURenderPassEncoder_setStencilReference(GPURenderPassEncoder* self , jb_Any * reference) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setStencilReference", em_Val_from(reference)));
}


jb_Undefined GPURenderPassEncoder_beginOcclusionQuery(GPURenderPassEncoder* self , jb_Any * queryIndex) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "beginOcclusionQuery", em_Val_from(queryIndex)));
}


jb_Undefined GPURenderPassEncoder_endOcclusionQuery(GPURenderPassEncoder* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "endOcclusionQuery"));
}


jb_Undefined GPURenderPassEncoder_executeBundles(GPURenderPassEncoder* self , jb_Array * bundles) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "executeBundles", em_Val_from(bundles)));
}


jb_Undefined GPURenderPassEncoder_end(GPURenderPassEncoder* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "end"));
}


jb_String GPURenderPassEncoder_label(const GPURenderPassEncoder *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("label")));
}


void GPURenderPassEncoder_set_label(GPURenderPassEncoder* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}


jb_Undefined GPURenderPassEncoder_pushDebugGroup(GPURenderPassEncoder* self , jb_String * groupLabel) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "pushDebugGroup", em_Val_from(groupLabel)));
}


jb_Undefined GPURenderPassEncoder_popDebugGroup(GPURenderPassEncoder* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "popDebugGroup"));
}


jb_Undefined GPURenderPassEncoder_insertDebugMarker(GPURenderPassEncoder* self , jb_String * markerLabel) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "insertDebugMarker", em_Val_from(markerLabel)));
}


jb_Undefined GPURenderPassEncoder_setBindGroup(GPURenderPassEncoder* self , jb_Any * index, GPUBindGroup * bindGroup, jb_Uint32Array * dynamicOffsetsData, jb_Any * dynamicOffsetsDataStart, jb_Any * dynamicOffsetsDataLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setBindGroup", em_Val_from(index), em_Val_from(bindGroup), em_Val_from(dynamicOffsetsData), em_Val_from(dynamicOffsetsDataStart), em_Val_from(dynamicOffsetsDataLength)));
}


jb_Undefined GPURenderPassEncoder_setPipeline(GPURenderPassEncoder* self , GPURenderPipeline * pipeline) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setPipeline", em_Val_from(pipeline)));
}


jb_Undefined GPURenderPassEncoder_setIndexBuffer0(GPURenderPassEncoder* self , GPUBuffer * buffer, GPUIndexFormat * indexFormat) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setIndexBuffer", em_Val_from(buffer), em_Val_from(indexFormat)));
}


jb_Undefined GPURenderPassEncoder_setIndexBuffer1(GPURenderPassEncoder* self , GPUBuffer * buffer, GPUIndexFormat * indexFormat, jb_Any * offset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setIndexBuffer", em_Val_from(buffer), em_Val_from(indexFormat), em_Val_from(offset)));
}


jb_Undefined GPURenderPassEncoder_setIndexBuffer2(GPURenderPassEncoder* self , GPUBuffer * buffer, GPUIndexFormat * indexFormat, jb_Any * offset, jb_Any * size) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setIndexBuffer", em_Val_from(buffer), em_Val_from(indexFormat), em_Val_from(offset), em_Val_from(size)));
}


jb_Undefined GPURenderPassEncoder_setVertexBuffer0(GPURenderPassEncoder* self , jb_Any * slot, GPUBuffer * buffer) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setVertexBuffer", em_Val_from(slot), em_Val_from(buffer)));
}


jb_Undefined GPURenderPassEncoder_setVertexBuffer1(GPURenderPassEncoder* self , jb_Any * slot, GPUBuffer * buffer, jb_Any * offset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setVertexBuffer", em_Val_from(slot), em_Val_from(buffer), em_Val_from(offset)));
}


jb_Undefined GPURenderPassEncoder_setVertexBuffer2(GPURenderPassEncoder* self , jb_Any * slot, GPUBuffer * buffer, jb_Any * offset, jb_Any * size) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setVertexBuffer", em_Val_from(slot), em_Val_from(buffer), em_Val_from(offset), em_Val_from(size)));
}


jb_Undefined GPURenderPassEncoder_draw0(GPURenderPassEncoder* self , jb_Any * vertexCount) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "draw", em_Val_from(vertexCount)));
}


jb_Undefined GPURenderPassEncoder_draw1(GPURenderPassEncoder* self , jb_Any * vertexCount, jb_Any * instanceCount) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "draw", em_Val_from(vertexCount), em_Val_from(instanceCount)));
}


jb_Undefined GPURenderPassEncoder_draw2(GPURenderPassEncoder* self , jb_Any * vertexCount, jb_Any * instanceCount, jb_Any * firstVertex) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "draw", em_Val_from(vertexCount), em_Val_from(instanceCount), em_Val_from(firstVertex)));
}


jb_Undefined GPURenderPassEncoder_draw3(GPURenderPassEncoder* self , jb_Any * vertexCount, jb_Any * instanceCount, jb_Any * firstVertex, jb_Any * firstInstance) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "draw", em_Val_from(vertexCount), em_Val_from(instanceCount), em_Val_from(firstVertex), em_Val_from(firstInstance)));
}


jb_Undefined GPURenderPassEncoder_drawIndexed0(GPURenderPassEncoder* self , jb_Any * indexCount) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawIndexed", em_Val_from(indexCount)));
}


jb_Undefined GPURenderPassEncoder_drawIndexed1(GPURenderPassEncoder* self , jb_Any * indexCount, jb_Any * instanceCount) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawIndexed", em_Val_from(indexCount), em_Val_from(instanceCount)));
}


jb_Undefined GPURenderPassEncoder_drawIndexed2(GPURenderPassEncoder* self , jb_Any * indexCount, jb_Any * instanceCount, jb_Any * firstIndex) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawIndexed", em_Val_from(indexCount), em_Val_from(instanceCount), em_Val_from(firstIndex)));
}


jb_Undefined GPURenderPassEncoder_drawIndexed3(GPURenderPassEncoder* self , jb_Any * indexCount, jb_Any * instanceCount, jb_Any * firstIndex, jb_Any * baseVertex) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawIndexed", em_Val_from(indexCount), em_Val_from(instanceCount), em_Val_from(firstIndex), em_Val_from(baseVertex)));
}


jb_Undefined GPURenderPassEncoder_drawIndexed4(GPURenderPassEncoder* self , jb_Any * indexCount, jb_Any * instanceCount, jb_Any * firstIndex, jb_Any * baseVertex, jb_Any * firstInstance) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawIndexed", em_Val_from(indexCount), em_Val_from(instanceCount), em_Val_from(firstIndex), em_Val_from(baseVertex), em_Val_from(firstInstance)));
}


jb_Undefined GPURenderPassEncoder_drawIndirect(GPURenderPassEncoder* self , GPUBuffer * indirectBuffer, jb_Any * indirectOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawIndirect", em_Val_from(indirectBuffer), em_Val_from(indirectOffset)));
}


jb_Undefined GPURenderPassEncoder_drawIndexedIndirect(GPURenderPassEncoder* self , GPUBuffer * indirectBuffer, jb_Any * indirectOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawIndexedIndirect", em_Val_from(indirectBuffer), em_Val_from(indirectOffset)));
}

