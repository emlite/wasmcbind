#include <webcbind/GPUDevice.h>

#include <webcbind/GPUSupportedFeatures.h>
#include <webcbind/GPUSupportedLimits.h>
#include <webcbind/GPUAdapterInfo.h>
#include <webcbind/GPUQueue.h>
#include <webcbind/GPUBuffer.h>
#include <webcbind/GPUBufferDescriptor.h>
#include <webcbind/GPUTexture.h>
#include <webcbind/GPUTextureDescriptor.h>
#include <webcbind/GPUSampler.h>
#include <webcbind/GPUSamplerDescriptor.h>
#include <webcbind/GPUExternalTexture.h>
#include <webcbind/GPUExternalTextureDescriptor.h>
#include <webcbind/GPUBindGroupLayout.h>
#include <webcbind/GPUBindGroupLayoutDescriptor.h>
#include <webcbind/GPUPipelineLayout.h>
#include <webcbind/GPUPipelineLayoutDescriptor.h>
#include <webcbind/GPUBindGroup.h>
#include <webcbind/GPUBindGroupDescriptor.h>
#include <webcbind/GPUShaderModule.h>
#include <webcbind/GPUShaderModuleDescriptor.h>
#include <webcbind/GPUComputePipeline.h>
#include <webcbind/GPUComputePipelineDescriptor.h>
#include <webcbind/GPURenderPipeline.h>
#include <webcbind/GPURenderPipelineDescriptor.h>
#include <webcbind/GPUCommandEncoder.h>
#include <webcbind/GPUCommandEncoderDescriptor.h>
#include <webcbind/GPURenderBundleEncoder.h>
#include <webcbind/GPURenderBundleEncoderDescriptor.h>
#include <webcbind/GPUQuerySet.h>
#include <webcbind/GPUQuerySetDescriptor.h>
#include <webcbind/GPUDeviceLostInfo.h>
#include <webcbind/GPUError.h>

DEFINE_EMLITE_TYPE(GPUDevice, EventTarget);


GPUSupportedFeatures GPUDevice_features(const GPUDevice *self) {
    return em_Val_as(GPUSupportedFeatures, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("features")));
}


GPUSupportedLimits GPUDevice_limits(const GPUDevice *self) {
    return em_Val_as(GPUSupportedLimits, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("limits")));
}


GPUAdapterInfo GPUDevice_adapterInfo(const GPUDevice *self) {
    return em_Val_as(GPUAdapterInfo, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("adapterInfo")));
}


GPUQueue GPUDevice_queue(const GPUDevice *self) {
    return em_Val_as(GPUQueue, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("queue")));
}


jb_Undefined GPUDevice_destroy(GPUDevice* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "destroy"));
}


GPUBuffer GPUDevice_createBuffer(GPUDevice* self , GPUBufferDescriptor * descriptor) {
    return em_Val_as(GPUBuffer, em_Val_call(EventTarget_as_val(self->inner), "createBuffer", em_Val_from(descriptor)));
}


GPUTexture GPUDevice_createTexture(GPUDevice* self , GPUTextureDescriptor * descriptor) {
    return em_Val_as(GPUTexture, em_Val_call(EventTarget_as_val(self->inner), "createTexture", em_Val_from(descriptor)));
}


GPUSampler GPUDevice_createSampler0(GPUDevice* self ) {
    return em_Val_as(GPUSampler, em_Val_call(EventTarget_as_val(self->inner), "createSampler"));
}


GPUSampler GPUDevice_createSampler1(GPUDevice* self , GPUSamplerDescriptor * descriptor) {
    return em_Val_as(GPUSampler, em_Val_call(EventTarget_as_val(self->inner), "createSampler", em_Val_from(descriptor)));
}


GPUExternalTexture GPUDevice_importExternalTexture(GPUDevice* self , GPUExternalTextureDescriptor * descriptor) {
    return em_Val_as(GPUExternalTexture, em_Val_call(EventTarget_as_val(self->inner), "importExternalTexture", em_Val_from(descriptor)));
}


GPUBindGroupLayout GPUDevice_createBindGroupLayout(GPUDevice* self , GPUBindGroupLayoutDescriptor * descriptor) {
    return em_Val_as(GPUBindGroupLayout, em_Val_call(EventTarget_as_val(self->inner), "createBindGroupLayout", em_Val_from(descriptor)));
}


GPUPipelineLayout GPUDevice_createPipelineLayout(GPUDevice* self , GPUPipelineLayoutDescriptor * descriptor) {
    return em_Val_as(GPUPipelineLayout, em_Val_call(EventTarget_as_val(self->inner), "createPipelineLayout", em_Val_from(descriptor)));
}


GPUBindGroup GPUDevice_createBindGroup(GPUDevice* self , GPUBindGroupDescriptor * descriptor) {
    return em_Val_as(GPUBindGroup, em_Val_call(EventTarget_as_val(self->inner), "createBindGroup", em_Val_from(descriptor)));
}


GPUShaderModule GPUDevice_createShaderModule(GPUDevice* self , GPUShaderModuleDescriptor * descriptor) {
    return em_Val_as(GPUShaderModule, em_Val_call(EventTarget_as_val(self->inner), "createShaderModule", em_Val_from(descriptor)));
}


GPUComputePipeline GPUDevice_createComputePipeline(GPUDevice* self , GPUComputePipelineDescriptor * descriptor) {
    return em_Val_as(GPUComputePipeline, em_Val_call(EventTarget_as_val(self->inner), "createComputePipeline", em_Val_from(descriptor)));
}


GPURenderPipeline GPUDevice_createRenderPipeline(GPUDevice* self , GPURenderPipelineDescriptor * descriptor) {
    return em_Val_as(GPURenderPipeline, em_Val_call(EventTarget_as_val(self->inner), "createRenderPipeline", em_Val_from(descriptor)));
}


jb_Promise GPUDevice_createComputePipelineAsync(GPUDevice* self , GPUComputePipelineDescriptor * descriptor) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "createComputePipelineAsync", em_Val_from(descriptor)));
}


jb_Promise GPUDevice_createRenderPipelineAsync(GPUDevice* self , GPURenderPipelineDescriptor * descriptor) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "createRenderPipelineAsync", em_Val_from(descriptor)));
}


GPUCommandEncoder GPUDevice_createCommandEncoder0(GPUDevice* self ) {
    return em_Val_as(GPUCommandEncoder, em_Val_call(EventTarget_as_val(self->inner), "createCommandEncoder"));
}


GPUCommandEncoder GPUDevice_createCommandEncoder1(GPUDevice* self , GPUCommandEncoderDescriptor * descriptor) {
    return em_Val_as(GPUCommandEncoder, em_Val_call(EventTarget_as_val(self->inner), "createCommandEncoder", em_Val_from(descriptor)));
}


GPURenderBundleEncoder GPUDevice_createRenderBundleEncoder(GPUDevice* self , GPURenderBundleEncoderDescriptor * descriptor) {
    return em_Val_as(GPURenderBundleEncoder, em_Val_call(EventTarget_as_val(self->inner), "createRenderBundleEncoder", em_Val_from(descriptor)));
}


GPUQuerySet GPUDevice_createQuerySet(GPUDevice* self , GPUQuerySetDescriptor * descriptor) {
    return em_Val_as(GPUQuerySet, em_Val_call(EventTarget_as_val(self->inner), "createQuerySet", em_Val_from(descriptor)));
}


jb_Promise GPUDevice_lost(const GPUDevice *self) {
    return em_Val_as(jb_Promise, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("lost")));
}


jb_Undefined GPUDevice_pushErrorScope(GPUDevice* self , GPUErrorFilter * filter) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "pushErrorScope", em_Val_from(filter)));
}


jb_Promise GPUDevice_popErrorScope(GPUDevice* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "popErrorScope"));
}


jb_Any GPUDevice_onuncapturederror(const GPUDevice *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onuncapturederror")));
}


void GPUDevice_set_onuncapturederror(GPUDevice* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onuncapturederror"), em_Val_from(value));
}


jb_String GPUDevice_label(const GPUDevice *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("label")));
}


void GPUDevice_set_label(GPUDevice* self, jb_String * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}

