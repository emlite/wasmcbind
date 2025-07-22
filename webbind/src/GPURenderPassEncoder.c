#include <webbind/GPURenderPassEncoder.h>
#include <webbind/GPURenderBundle.h>
#include <webbind/GPUBindGroup.h>
#include <webbind/GPURenderPipeline.h>
#include <webbind/GPUBuffer.h>


DEFINE_EMLITE_TYPE(GPURenderPassEncoder, em_Val);


jb_Undefined GPURenderPassEncoder_setViewport(GPURenderPassEncoder* self , float x, float y, float width, float height, float minDepth, float maxDepth) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setViewport", em_Val_from(x), em_Val_from(y), em_Val_from(width), em_Val_from(height), em_Val_from(minDepth), em_Val_from(maxDepth)));
}


jb_Undefined GPURenderPassEncoder_setScissorRect(GPURenderPassEncoder* self , const jb_Any* x, const jb_Any* y, const jb_Any* width, const jb_Any* height) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setScissorRect", em_Val_from(x), em_Val_from(y), em_Val_from(width), em_Val_from(height)));
}


jb_Undefined GPURenderPassEncoder_setBlendConstant(GPURenderPassEncoder* self , const jb_Any* color) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setBlendConstant", em_Val_from(color)));
}


jb_Undefined GPURenderPassEncoder_setStencilReference(GPURenderPassEncoder* self , const jb_Any* reference) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setStencilReference", em_Val_from(reference)));
}


jb_Undefined GPURenderPassEncoder_beginOcclusionQuery(GPURenderPassEncoder* self , const jb_Any* queryIndex) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "beginOcclusionQuery", em_Val_from(queryIndex)));
}


jb_Undefined GPURenderPassEncoder_endOcclusionQuery(GPURenderPassEncoder* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "endOcclusionQuery"));
}


jb_Undefined GPURenderPassEncoder_executeBundles(GPURenderPassEncoder* self , const jb_Sequence* bundles) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "executeBundles", em_Val_from(bundles)));
}


jb_Undefined GPURenderPassEncoder_end(GPURenderPassEncoder* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "end"));
}


jb_USVString GPURenderPassEncoder_label(const GPURenderPassEncoder *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "label"));
}


void GPURenderPassEncoder_set_label(GPURenderPassEncoder* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "label", value);
}


jb_Undefined GPURenderPassEncoder_pushDebugGroup(GPURenderPassEncoder* self , const jb_USVString* groupLabel) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "pushDebugGroup", em_Val_from(groupLabel)));
}


jb_Undefined GPURenderPassEncoder_popDebugGroup(GPURenderPassEncoder* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "popDebugGroup"));
}


jb_Undefined GPURenderPassEncoder_insertDebugMarker(GPURenderPassEncoder* self , const jb_USVString* markerLabel) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "insertDebugMarker", em_Val_from(markerLabel)));
}


jb_Undefined GPURenderPassEncoder_setBindGroup(GPURenderPassEncoder* self , const jb_Any* index, const GPUBindGroup* bindGroup, const jb_Uint32Array* dynamicOffsetsData, const jb_Any* dynamicOffsetsDataStart, const jb_Any* dynamicOffsetsDataLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setBindGroup", em_Val_from(index), em_Val_from(bindGroup), em_Val_from(dynamicOffsetsData), em_Val_from(dynamicOffsetsDataStart), em_Val_from(dynamicOffsetsDataLength)));
}


jb_Undefined GPURenderPassEncoder_setPipeline(GPURenderPassEncoder* self , const GPURenderPipeline* pipeline) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setPipeline", em_Val_from(pipeline)));
}


jb_Undefined GPURenderPassEncoder_setIndexBuffer(GPURenderPassEncoder* self , const GPUBuffer* buffer, const GPUIndexFormat* indexFormat) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setIndexBuffer", em_Val_from(buffer), em_Val_from(indexFormat)));
}


jb_Undefined GPURenderPassEncoder_setIndexBuffer(GPURenderPassEncoder* self , const GPUBuffer* buffer, const GPUIndexFormat* indexFormat, const jb_Any* offset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setIndexBuffer", em_Val_from(buffer), em_Val_from(indexFormat), em_Val_from(offset)));
}


jb_Undefined GPURenderPassEncoder_setIndexBuffer(GPURenderPassEncoder* self , const GPUBuffer* buffer, const GPUIndexFormat* indexFormat, const jb_Any* offset, const jb_Any* size) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setIndexBuffer", em_Val_from(buffer), em_Val_from(indexFormat), em_Val_from(offset), em_Val_from(size)));
}


jb_Undefined GPURenderPassEncoder_setVertexBuffer(GPURenderPassEncoder* self , const jb_Any* slot, const GPUBuffer* buffer) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setVertexBuffer", em_Val_from(slot), em_Val_from(buffer)));
}


jb_Undefined GPURenderPassEncoder_setVertexBuffer(GPURenderPassEncoder* self , const jb_Any* slot, const GPUBuffer* buffer, const jb_Any* offset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setVertexBuffer", em_Val_from(slot), em_Val_from(buffer), em_Val_from(offset)));
}


jb_Undefined GPURenderPassEncoder_setVertexBuffer(GPURenderPassEncoder* self , const jb_Any* slot, const GPUBuffer* buffer, const jb_Any* offset, const jb_Any* size) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setVertexBuffer", em_Val_from(slot), em_Val_from(buffer), em_Val_from(offset), em_Val_from(size)));
}


jb_Undefined GPURenderPassEncoder_draw(GPURenderPassEncoder* self , const jb_Any* vertexCount) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "draw", em_Val_from(vertexCount)));
}


jb_Undefined GPURenderPassEncoder_draw(GPURenderPassEncoder* self , const jb_Any* vertexCount, const jb_Any* instanceCount) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "draw", em_Val_from(vertexCount), em_Val_from(instanceCount)));
}


jb_Undefined GPURenderPassEncoder_draw(GPURenderPassEncoder* self , const jb_Any* vertexCount, const jb_Any* instanceCount, const jb_Any* firstVertex) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "draw", em_Val_from(vertexCount), em_Val_from(instanceCount), em_Val_from(firstVertex)));
}


jb_Undefined GPURenderPassEncoder_draw(GPURenderPassEncoder* self , const jb_Any* vertexCount, const jb_Any* instanceCount, const jb_Any* firstVertex, const jb_Any* firstInstance) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "draw", em_Val_from(vertexCount), em_Val_from(instanceCount), em_Val_from(firstVertex), em_Val_from(firstInstance)));
}


jb_Undefined GPURenderPassEncoder_drawIndexed(GPURenderPassEncoder* self , const jb_Any* indexCount) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawIndexed", em_Val_from(indexCount)));
}


jb_Undefined GPURenderPassEncoder_drawIndexed(GPURenderPassEncoder* self , const jb_Any* indexCount, const jb_Any* instanceCount) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawIndexed", em_Val_from(indexCount), em_Val_from(instanceCount)));
}


jb_Undefined GPURenderPassEncoder_drawIndexed(GPURenderPassEncoder* self , const jb_Any* indexCount, const jb_Any* instanceCount, const jb_Any* firstIndex) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawIndexed", em_Val_from(indexCount), em_Val_from(instanceCount), em_Val_from(firstIndex)));
}


jb_Undefined GPURenderPassEncoder_drawIndexed(GPURenderPassEncoder* self , const jb_Any* indexCount, const jb_Any* instanceCount, const jb_Any* firstIndex, const jb_Any* baseVertex) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawIndexed", em_Val_from(indexCount), em_Val_from(instanceCount), em_Val_from(firstIndex), em_Val_from(baseVertex)));
}


jb_Undefined GPURenderPassEncoder_drawIndexed(GPURenderPassEncoder* self , const jb_Any* indexCount, const jb_Any* instanceCount, const jb_Any* firstIndex, const jb_Any* baseVertex, const jb_Any* firstInstance) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawIndexed", em_Val_from(indexCount), em_Val_from(instanceCount), em_Val_from(firstIndex), em_Val_from(baseVertex), em_Val_from(firstInstance)));
}


jb_Undefined GPURenderPassEncoder_drawIndirect(GPURenderPassEncoder* self , const GPUBuffer* indirectBuffer, const jb_Any* indirectOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawIndirect", em_Val_from(indirectBuffer), em_Val_from(indirectOffset)));
}


jb_Undefined GPURenderPassEncoder_drawIndexedIndirect(GPURenderPassEncoder* self , const GPUBuffer* indirectBuffer, const jb_Any* indirectOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawIndexedIndirect", em_Val_from(indirectBuffer), em_Val_from(indirectOffset)));
}

