#include <webbind/GPURenderBundleEncoder.h>
#include <webbind/GPURenderBundle.h>
#include <webbind/GPUBindGroup.h>
#include <webbind/GPURenderPipeline.h>
#include <webbind/GPUBuffer.h>


DEFINE_EMLITE_TYPE(GPURenderBundleDescriptor, em_Val);

DEFINE_EMLITE_TYPE(GPURenderBundleEncoder, em_Val);


GPURenderBundle GPURenderBundleEncoder_finish(GPURenderBundleEncoder* self ) {
    return em_Val_as(GPURenderBundle, em_Val_call(em_Val_as_val(self->inner), "finish"));
}


GPURenderBundle GPURenderBundleEncoder_finish(GPURenderBundleEncoder* self , const GPURenderBundleDescriptor* descriptor) {
    return em_Val_as(GPURenderBundle, em_Val_call(em_Val_as_val(self->inner), "finish", em_Val_from(descriptor)));
}


jb_USVString GPURenderBundleEncoder_label(const GPURenderBundleEncoder *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "label"));
}


void GPURenderBundleEncoder_set_label(GPURenderBundleEncoder* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "label", value);
}


jb_Undefined GPURenderBundleEncoder_pushDebugGroup(GPURenderBundleEncoder* self , const jb_USVString* groupLabel) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "pushDebugGroup", em_Val_from(groupLabel)));
}


jb_Undefined GPURenderBundleEncoder_popDebugGroup(GPURenderBundleEncoder* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "popDebugGroup"));
}


jb_Undefined GPURenderBundleEncoder_insertDebugMarker(GPURenderBundleEncoder* self , const jb_USVString* markerLabel) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "insertDebugMarker", em_Val_from(markerLabel)));
}


jb_Undefined GPURenderBundleEncoder_setBindGroup(GPURenderBundleEncoder* self , const jb_Any* index, const GPUBindGroup* bindGroup, const jb_Uint32Array* dynamicOffsetsData, const jb_Any* dynamicOffsetsDataStart, const jb_Any* dynamicOffsetsDataLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setBindGroup", em_Val_from(index), em_Val_from(bindGroup), em_Val_from(dynamicOffsetsData), em_Val_from(dynamicOffsetsDataStart), em_Val_from(dynamicOffsetsDataLength)));
}


jb_Undefined GPURenderBundleEncoder_setPipeline(GPURenderBundleEncoder* self , const GPURenderPipeline* pipeline) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setPipeline", em_Val_from(pipeline)));
}


jb_Undefined GPURenderBundleEncoder_setIndexBuffer(GPURenderBundleEncoder* self , const GPUBuffer* buffer, const GPUIndexFormat* indexFormat) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setIndexBuffer", em_Val_from(buffer), em_Val_from(indexFormat)));
}


jb_Undefined GPURenderBundleEncoder_setIndexBuffer(GPURenderBundleEncoder* self , const GPUBuffer* buffer, const GPUIndexFormat* indexFormat, const jb_Any* offset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setIndexBuffer", em_Val_from(buffer), em_Val_from(indexFormat), em_Val_from(offset)));
}


jb_Undefined GPURenderBundleEncoder_setIndexBuffer(GPURenderBundleEncoder* self , const GPUBuffer* buffer, const GPUIndexFormat* indexFormat, const jb_Any* offset, const jb_Any* size) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setIndexBuffer", em_Val_from(buffer), em_Val_from(indexFormat), em_Val_from(offset), em_Val_from(size)));
}


jb_Undefined GPURenderBundleEncoder_setVertexBuffer(GPURenderBundleEncoder* self , const jb_Any* slot, const GPUBuffer* buffer) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setVertexBuffer", em_Val_from(slot), em_Val_from(buffer)));
}


jb_Undefined GPURenderBundleEncoder_setVertexBuffer(GPURenderBundleEncoder* self , const jb_Any* slot, const GPUBuffer* buffer, const jb_Any* offset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setVertexBuffer", em_Val_from(slot), em_Val_from(buffer), em_Val_from(offset)));
}


jb_Undefined GPURenderBundleEncoder_setVertexBuffer(GPURenderBundleEncoder* self , const jb_Any* slot, const GPUBuffer* buffer, const jb_Any* offset, const jb_Any* size) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setVertexBuffer", em_Val_from(slot), em_Val_from(buffer), em_Val_from(offset), em_Val_from(size)));
}


jb_Undefined GPURenderBundleEncoder_draw(GPURenderBundleEncoder* self , const jb_Any* vertexCount) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "draw", em_Val_from(vertexCount)));
}


jb_Undefined GPURenderBundleEncoder_draw(GPURenderBundleEncoder* self , const jb_Any* vertexCount, const jb_Any* instanceCount) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "draw", em_Val_from(vertexCount), em_Val_from(instanceCount)));
}


jb_Undefined GPURenderBundleEncoder_draw(GPURenderBundleEncoder* self , const jb_Any* vertexCount, const jb_Any* instanceCount, const jb_Any* firstVertex) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "draw", em_Val_from(vertexCount), em_Val_from(instanceCount), em_Val_from(firstVertex)));
}


jb_Undefined GPURenderBundleEncoder_draw(GPURenderBundleEncoder* self , const jb_Any* vertexCount, const jb_Any* instanceCount, const jb_Any* firstVertex, const jb_Any* firstInstance) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "draw", em_Val_from(vertexCount), em_Val_from(instanceCount), em_Val_from(firstVertex), em_Val_from(firstInstance)));
}


jb_Undefined GPURenderBundleEncoder_drawIndexed(GPURenderBundleEncoder* self , const jb_Any* indexCount) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawIndexed", em_Val_from(indexCount)));
}


jb_Undefined GPURenderBundleEncoder_drawIndexed(GPURenderBundleEncoder* self , const jb_Any* indexCount, const jb_Any* instanceCount) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawIndexed", em_Val_from(indexCount), em_Val_from(instanceCount)));
}


jb_Undefined GPURenderBundleEncoder_drawIndexed(GPURenderBundleEncoder* self , const jb_Any* indexCount, const jb_Any* instanceCount, const jb_Any* firstIndex) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawIndexed", em_Val_from(indexCount), em_Val_from(instanceCount), em_Val_from(firstIndex)));
}


jb_Undefined GPURenderBundleEncoder_drawIndexed(GPURenderBundleEncoder* self , const jb_Any* indexCount, const jb_Any* instanceCount, const jb_Any* firstIndex, const jb_Any* baseVertex) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawIndexed", em_Val_from(indexCount), em_Val_from(instanceCount), em_Val_from(firstIndex), em_Val_from(baseVertex)));
}


jb_Undefined GPURenderBundleEncoder_drawIndexed(GPURenderBundleEncoder* self , const jb_Any* indexCount, const jb_Any* instanceCount, const jb_Any* firstIndex, const jb_Any* baseVertex, const jb_Any* firstInstance) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawIndexed", em_Val_from(indexCount), em_Val_from(instanceCount), em_Val_from(firstIndex), em_Val_from(baseVertex), em_Val_from(firstInstance)));
}


jb_Undefined GPURenderBundleEncoder_drawIndirect(GPURenderBundleEncoder* self , const GPUBuffer* indirectBuffer, const jb_Any* indirectOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawIndirect", em_Val_from(indirectBuffer), em_Val_from(indirectOffset)));
}


jb_Undefined GPURenderBundleEncoder_drawIndexedIndirect(GPURenderBundleEncoder* self , const GPUBuffer* indirectBuffer, const jb_Any* indirectOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawIndexedIndirect", em_Val_from(indirectBuffer), em_Val_from(indirectOffset)));
}

