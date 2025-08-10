#include <webbind/GPURenderBundleEncoder.h>

#include <webbind/GPURenderBundle.h>
#include <webbind/GPURenderBundleDescriptor.h>
#include <webbind/GPUBindGroup.h>
#include <webbind/GPURenderPipeline.h>
#include <webbind/GPUBuffer.h>

DEFINE_EMLITE_TYPE(GPURenderBundleEncoder, em_Val);


GPURenderBundle GPURenderBundleEncoder_finish0(GPURenderBundleEncoder* self ) {
    return em_Val_as(GPURenderBundle, em_Val_call(em_Val_as_val(self->inner), "finish"));
}


GPURenderBundle GPURenderBundleEncoder_finish1(GPURenderBundleEncoder* self , GPURenderBundleDescriptor * descriptor) {
    return em_Val_as(GPURenderBundle, em_Val_call(em_Val_as_val(self->inner), "finish", em_Val_from(descriptor)));
}


jb_String GPURenderBundleEncoder_label(const GPURenderBundleEncoder *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("label")));
}


void GPURenderBundleEncoder_set_label(GPURenderBundleEncoder* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}


jb_Undefined GPURenderBundleEncoder_pushDebugGroup(GPURenderBundleEncoder* self , jb_String * groupLabel) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "pushDebugGroup", em_Val_from(groupLabel)));
}


jb_Undefined GPURenderBundleEncoder_popDebugGroup(GPURenderBundleEncoder* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "popDebugGroup"));
}


jb_Undefined GPURenderBundleEncoder_insertDebugMarker(GPURenderBundleEncoder* self , jb_String * markerLabel) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "insertDebugMarker", em_Val_from(markerLabel)));
}


jb_Undefined GPURenderBundleEncoder_setBindGroup(GPURenderBundleEncoder* self , jb_Any * index, GPUBindGroup * bindGroup, jb_Uint32Array * dynamicOffsetsData, jb_Any * dynamicOffsetsDataStart, jb_Any * dynamicOffsetsDataLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setBindGroup", em_Val_from(index), em_Val_from(bindGroup), em_Val_from(dynamicOffsetsData), em_Val_from(dynamicOffsetsDataStart), em_Val_from(dynamicOffsetsDataLength)));
}


jb_Undefined GPURenderBundleEncoder_setPipeline(GPURenderBundleEncoder* self , GPURenderPipeline * pipeline) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setPipeline", em_Val_from(pipeline)));
}


jb_Undefined GPURenderBundleEncoder_setIndexBuffer0(GPURenderBundleEncoder* self , GPUBuffer * buffer, GPUIndexFormat * indexFormat) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setIndexBuffer", em_Val_from(buffer), em_Val_from(indexFormat)));
}


jb_Undefined GPURenderBundleEncoder_setIndexBuffer1(GPURenderBundleEncoder* self , GPUBuffer * buffer, GPUIndexFormat * indexFormat, jb_Any * offset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setIndexBuffer", em_Val_from(buffer), em_Val_from(indexFormat), em_Val_from(offset)));
}


jb_Undefined GPURenderBundleEncoder_setIndexBuffer2(GPURenderBundleEncoder* self , GPUBuffer * buffer, GPUIndexFormat * indexFormat, jb_Any * offset, jb_Any * size) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setIndexBuffer", em_Val_from(buffer), em_Val_from(indexFormat), em_Val_from(offset), em_Val_from(size)));
}


jb_Undefined GPURenderBundleEncoder_setVertexBuffer0(GPURenderBundleEncoder* self , jb_Any * slot, GPUBuffer * buffer) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setVertexBuffer", em_Val_from(slot), em_Val_from(buffer)));
}


jb_Undefined GPURenderBundleEncoder_setVertexBuffer1(GPURenderBundleEncoder* self , jb_Any * slot, GPUBuffer * buffer, jb_Any * offset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setVertexBuffer", em_Val_from(slot), em_Val_from(buffer), em_Val_from(offset)));
}


jb_Undefined GPURenderBundleEncoder_setVertexBuffer2(GPURenderBundleEncoder* self , jb_Any * slot, GPUBuffer * buffer, jb_Any * offset, jb_Any * size) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setVertexBuffer", em_Val_from(slot), em_Val_from(buffer), em_Val_from(offset), em_Val_from(size)));
}


jb_Undefined GPURenderBundleEncoder_draw0(GPURenderBundleEncoder* self , jb_Any * vertexCount) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "draw", em_Val_from(vertexCount)));
}


jb_Undefined GPURenderBundleEncoder_draw1(GPURenderBundleEncoder* self , jb_Any * vertexCount, jb_Any * instanceCount) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "draw", em_Val_from(vertexCount), em_Val_from(instanceCount)));
}


jb_Undefined GPURenderBundleEncoder_draw2(GPURenderBundleEncoder* self , jb_Any * vertexCount, jb_Any * instanceCount, jb_Any * firstVertex) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "draw", em_Val_from(vertexCount), em_Val_from(instanceCount), em_Val_from(firstVertex)));
}


jb_Undefined GPURenderBundleEncoder_draw3(GPURenderBundleEncoder* self , jb_Any * vertexCount, jb_Any * instanceCount, jb_Any * firstVertex, jb_Any * firstInstance) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "draw", em_Val_from(vertexCount), em_Val_from(instanceCount), em_Val_from(firstVertex), em_Val_from(firstInstance)));
}


jb_Undefined GPURenderBundleEncoder_drawIndexed0(GPURenderBundleEncoder* self , jb_Any * indexCount) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawIndexed", em_Val_from(indexCount)));
}


jb_Undefined GPURenderBundleEncoder_drawIndexed1(GPURenderBundleEncoder* self , jb_Any * indexCount, jb_Any * instanceCount) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawIndexed", em_Val_from(indexCount), em_Val_from(instanceCount)));
}


jb_Undefined GPURenderBundleEncoder_drawIndexed2(GPURenderBundleEncoder* self , jb_Any * indexCount, jb_Any * instanceCount, jb_Any * firstIndex) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawIndexed", em_Val_from(indexCount), em_Val_from(instanceCount), em_Val_from(firstIndex)));
}


jb_Undefined GPURenderBundleEncoder_drawIndexed3(GPURenderBundleEncoder* self , jb_Any * indexCount, jb_Any * instanceCount, jb_Any * firstIndex, jb_Any * baseVertex) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawIndexed", em_Val_from(indexCount), em_Val_from(instanceCount), em_Val_from(firstIndex), em_Val_from(baseVertex)));
}


jb_Undefined GPURenderBundleEncoder_drawIndexed4(GPURenderBundleEncoder* self , jb_Any * indexCount, jb_Any * instanceCount, jb_Any * firstIndex, jb_Any * baseVertex, jb_Any * firstInstance) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawIndexed", em_Val_from(indexCount), em_Val_from(instanceCount), em_Val_from(firstIndex), em_Val_from(baseVertex), em_Val_from(firstInstance)));
}


jb_Undefined GPURenderBundleEncoder_drawIndirect(GPURenderBundleEncoder* self , GPUBuffer * indirectBuffer, jb_Any * indirectOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawIndirect", em_Val_from(indirectBuffer), em_Val_from(indirectOffset)));
}


jb_Undefined GPURenderBundleEncoder_drawIndexedIndirect(GPURenderBundleEncoder* self , GPUBuffer * indirectBuffer, jb_Any * indirectOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawIndexedIndirect", em_Val_from(indirectBuffer), em_Val_from(indirectOffset)));
}

