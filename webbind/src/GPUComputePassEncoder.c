#include <webbind/GPUComputePassEncoder.h>
#include <webbind/GPUComputePipeline.h>
#include <webbind/GPUBuffer.h>
#include <webbind/GPUBindGroup.h>


DEFINE_EMLITE_TYPE(GPUComputePassEncoder, em_Val);


jb_Undefined GPUComputePassEncoder_setPipeline(GPUComputePassEncoder* self , GPUComputePipeline * pipeline) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setPipeline", em_Val_from(pipeline)));
}


jb_Undefined GPUComputePassEncoder_dispatchWorkgroups0(GPUComputePassEncoder* self , jb_Any * workgroupCountX) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "dispatchWorkgroups", em_Val_from(workgroupCountX)));
}


jb_Undefined GPUComputePassEncoder_dispatchWorkgroups1(GPUComputePassEncoder* self , jb_Any * workgroupCountX, jb_Any * workgroupCountY) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "dispatchWorkgroups", em_Val_from(workgroupCountX), em_Val_from(workgroupCountY)));
}


jb_Undefined GPUComputePassEncoder_dispatchWorkgroups2(GPUComputePassEncoder* self , jb_Any * workgroupCountX, jb_Any * workgroupCountY, jb_Any * workgroupCountZ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "dispatchWorkgroups", em_Val_from(workgroupCountX), em_Val_from(workgroupCountY), em_Val_from(workgroupCountZ)));
}


jb_Undefined GPUComputePassEncoder_dispatchWorkgroupsIndirect(GPUComputePassEncoder* self , GPUBuffer * indirectBuffer, jb_Any * indirectOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "dispatchWorkgroupsIndirect", em_Val_from(indirectBuffer), em_Val_from(indirectOffset)));
}


jb_Undefined GPUComputePassEncoder_end(GPUComputePassEncoder* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "end"));
}


jb_USVString GPUComputePassEncoder_label(const GPUComputePassEncoder *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("label")));
}


void GPUComputePassEncoder_set_label(GPUComputePassEncoder* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}


jb_Undefined GPUComputePassEncoder_pushDebugGroup(GPUComputePassEncoder* self , jb_USVString * groupLabel) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "pushDebugGroup", em_Val_from(groupLabel)));
}


jb_Undefined GPUComputePassEncoder_popDebugGroup(GPUComputePassEncoder* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "popDebugGroup"));
}


jb_Undefined GPUComputePassEncoder_insertDebugMarker(GPUComputePassEncoder* self , jb_USVString * markerLabel) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "insertDebugMarker", em_Val_from(markerLabel)));
}


jb_Undefined GPUComputePassEncoder_setBindGroup(GPUComputePassEncoder* self , jb_Any * index, GPUBindGroup * bindGroup, jb_Uint32Array * dynamicOffsetsData, jb_Any * dynamicOffsetsDataStart, jb_Any * dynamicOffsetsDataLength) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setBindGroup", em_Val_from(index), em_Val_from(bindGroup), em_Val_from(dynamicOffsetsData), em_Val_from(dynamicOffsetsDataStart), em_Val_from(dynamicOffsetsDataLength)));
}

