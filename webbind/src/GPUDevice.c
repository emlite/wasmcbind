#include <webbind/GPUDevice.h>
#include <webbind/GPUSupportedFeatures.h>
#include <webbind/GPUSupportedLimits.h>
#include <webbind/GPUAdapterInfo.h>
#include <webbind/GPUQueue.h>
#include <webbind/GPUBuffer.h>
#include <webbind/GPUTexture.h>
#include <webbind/GPUSampler.h>
#include <webbind/GPUExternalTexture.h>
#include <webbind/GPUBindGroupLayout.h>
#include <webbind/GPUPipelineLayout.h>
#include <webbind/GPUBindGroup.h>
#include <webbind/GPUShaderModule.h>
#include <webbind/GPUComputePipeline.h>
#include <webbind/GPURenderPipeline.h>
#include <webbind/GPUCommandEncoder.h>
#include <webbind/GPURenderBundleEncoder.h>
#include <webbind/GPUQuerySet.h>
#include <webbind/GPUDeviceLostInfo.h>
#include <webbind/GPUError.h>


DEFINE_EMLITE_TYPE(GPUBufferDescriptor, em_Val);


jb_Any GPUBufferDescriptor_size(const GPUBufferDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("size")));
}


void GPUBufferDescriptor_set_size(GPUBufferDescriptor* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("size"), em_Val_from(value));
}


jb_Any GPUBufferDescriptor_usage(const GPUBufferDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("usage")));
}


void GPUBufferDescriptor_set_usage(GPUBufferDescriptor* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("usage"), em_Val_from(value));
}


bool GPUBufferDescriptor_mappedAtCreation(const GPUBufferDescriptor *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mappedAtCreation")));
}


void GPUBufferDescriptor_set_mappedAtCreation(GPUBufferDescriptor* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mappedAtCreation"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(GPUTextureDescriptor, em_Val);


jb_Any GPUTextureDescriptor_size(const GPUTextureDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("size")));
}


void GPUTextureDescriptor_set_size(GPUTextureDescriptor* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("size"), em_Val_from(value));
}


jb_Any GPUTextureDescriptor_mipLevelCount(const GPUTextureDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mipLevelCount")));
}


void GPUTextureDescriptor_set_mipLevelCount(GPUTextureDescriptor* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mipLevelCount"), em_Val_from(value));
}


jb_Any GPUTextureDescriptor_sampleCount(const GPUTextureDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sampleCount")));
}


void GPUTextureDescriptor_set_sampleCount(GPUTextureDescriptor* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sampleCount"), em_Val_from(value));
}


GPUTextureDimension GPUTextureDescriptor_dimension(const GPUTextureDescriptor *self) {
    return em_Val_as(GPUTextureDimension, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dimension")));
}


void GPUTextureDescriptor_set_dimension(GPUTextureDescriptor* self, GPUTextureDimension * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("dimension"), em_Val_from(value));
}


GPUTextureFormat GPUTextureDescriptor_format(const GPUTextureDescriptor *self) {
    return em_Val_as(GPUTextureFormat, em_Val_get(em_Val_as_val(self->inner), em_Val_from("format")));
}


void GPUTextureDescriptor_set_format(GPUTextureDescriptor* self, GPUTextureFormat * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("format"), em_Val_from(value));
}


jb_Any GPUTextureDescriptor_usage(const GPUTextureDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("usage")));
}


void GPUTextureDescriptor_set_usage(GPUTextureDescriptor* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("usage"), em_Val_from(value));
}


jb_Sequence GPUTextureDescriptor_viewFormats(const GPUTextureDescriptor *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("viewFormats")));
}


void GPUTextureDescriptor_set_viewFormats(GPUTextureDescriptor* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("viewFormats"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(GPUSamplerDescriptor, em_Val);


GPUAddressMode GPUSamplerDescriptor_addressModeU(const GPUSamplerDescriptor *self) {
    return em_Val_as(GPUAddressMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("addressModeU")));
}


void GPUSamplerDescriptor_set_addressModeU(GPUSamplerDescriptor* self, GPUAddressMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("addressModeU"), em_Val_from(value));
}


GPUAddressMode GPUSamplerDescriptor_addressModeV(const GPUSamplerDescriptor *self) {
    return em_Val_as(GPUAddressMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("addressModeV")));
}


void GPUSamplerDescriptor_set_addressModeV(GPUSamplerDescriptor* self, GPUAddressMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("addressModeV"), em_Val_from(value));
}


GPUAddressMode GPUSamplerDescriptor_addressModeW(const GPUSamplerDescriptor *self) {
    return em_Val_as(GPUAddressMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("addressModeW")));
}


void GPUSamplerDescriptor_set_addressModeW(GPUSamplerDescriptor* self, GPUAddressMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("addressModeW"), em_Val_from(value));
}


GPUFilterMode GPUSamplerDescriptor_magFilter(const GPUSamplerDescriptor *self) {
    return em_Val_as(GPUFilterMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("magFilter")));
}


void GPUSamplerDescriptor_set_magFilter(GPUSamplerDescriptor* self, GPUFilterMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("magFilter"), em_Val_from(value));
}


GPUFilterMode GPUSamplerDescriptor_minFilter(const GPUSamplerDescriptor *self) {
    return em_Val_as(GPUFilterMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("minFilter")));
}


void GPUSamplerDescriptor_set_minFilter(GPUSamplerDescriptor* self, GPUFilterMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("minFilter"), em_Val_from(value));
}


GPUMipmapFilterMode GPUSamplerDescriptor_mipmapFilter(const GPUSamplerDescriptor *self) {
    return em_Val_as(GPUMipmapFilterMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mipmapFilter")));
}


void GPUSamplerDescriptor_set_mipmapFilter(GPUSamplerDescriptor* self, GPUMipmapFilterMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mipmapFilter"), em_Val_from(value));
}


float GPUSamplerDescriptor_lodMinClamp(const GPUSamplerDescriptor *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("lodMinClamp")));
}


void GPUSamplerDescriptor_set_lodMinClamp(GPUSamplerDescriptor* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("lodMinClamp"), em_Val_from(value));
}


float GPUSamplerDescriptor_lodMaxClamp(const GPUSamplerDescriptor *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("lodMaxClamp")));
}


void GPUSamplerDescriptor_set_lodMaxClamp(GPUSamplerDescriptor* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("lodMaxClamp"), em_Val_from(value));
}


GPUCompareFunction GPUSamplerDescriptor_compare(const GPUSamplerDescriptor *self) {
    return em_Val_as(GPUCompareFunction, em_Val_get(em_Val_as_val(self->inner), em_Val_from("compare")));
}


void GPUSamplerDescriptor_set_compare(GPUSamplerDescriptor* self, GPUCompareFunction * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("compare"), em_Val_from(value));
}


unsigned short GPUSamplerDescriptor_maxAnisotropy(const GPUSamplerDescriptor *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxAnisotropy")));
}


void GPUSamplerDescriptor_set_maxAnisotropy(GPUSamplerDescriptor* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("maxAnisotropy"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(GPUExternalTextureDescriptor, em_Val);


jb_Any GPUExternalTextureDescriptor_source(const GPUExternalTextureDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("source")));
}


void GPUExternalTextureDescriptor_set_source(GPUExternalTextureDescriptor* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("source"), em_Val_from(value));
}


PredefinedColorSpace GPUExternalTextureDescriptor_colorSpace(const GPUExternalTextureDescriptor *self) {
    return em_Val_as(PredefinedColorSpace, em_Val_get(em_Val_as_val(self->inner), em_Val_from("colorSpace")));
}


void GPUExternalTextureDescriptor_set_colorSpace(GPUExternalTextureDescriptor* self, PredefinedColorSpace * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("colorSpace"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(GPUBindGroupLayoutDescriptor, em_Val);


jb_Sequence GPUBindGroupLayoutDescriptor_entries(const GPUBindGroupLayoutDescriptor *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("entries")));
}


void GPUBindGroupLayoutDescriptor_set_entries(GPUBindGroupLayoutDescriptor* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("entries"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(GPUPipelineLayoutDescriptor, em_Val);


jb_Sequence GPUPipelineLayoutDescriptor_bindGroupLayouts(const GPUPipelineLayoutDescriptor *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bindGroupLayouts")));
}


void GPUPipelineLayoutDescriptor_set_bindGroupLayouts(GPUPipelineLayoutDescriptor* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bindGroupLayouts"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(GPUBindGroupDescriptor, em_Val);


GPUBindGroupLayout GPUBindGroupDescriptor_layout(const GPUBindGroupDescriptor *self) {
    return em_Val_as(GPUBindGroupLayout, em_Val_get(em_Val_as_val(self->inner), em_Val_from("layout")));
}


void GPUBindGroupDescriptor_set_layout(GPUBindGroupDescriptor* self, GPUBindGroupLayout * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("layout"), em_Val_from(value));
}


jb_Sequence GPUBindGroupDescriptor_entries(const GPUBindGroupDescriptor *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("entries")));
}


void GPUBindGroupDescriptor_set_entries(GPUBindGroupDescriptor* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("entries"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(GPUShaderModuleDescriptor, em_Val);


jb_USVString GPUShaderModuleDescriptor_code(const GPUShaderModuleDescriptor *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("code")));
}


void GPUShaderModuleDescriptor_set_code(GPUShaderModuleDescriptor* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("code"), em_Val_from(value));
}


jb_Sequence GPUShaderModuleDescriptor_compilationHints(const GPUShaderModuleDescriptor *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("compilationHints")));
}


void GPUShaderModuleDescriptor_set_compilationHints(GPUShaderModuleDescriptor* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("compilationHints"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(GPUComputePipelineDescriptor, em_Val);


jb_Any GPUComputePipelineDescriptor_compute(const GPUComputePipelineDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("compute")));
}


void GPUComputePipelineDescriptor_set_compute(GPUComputePipelineDescriptor* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("compute"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(GPURenderPipelineDescriptor, em_Val);


jb_Any GPURenderPipelineDescriptor_vertex(const GPURenderPipelineDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("vertex")));
}


void GPURenderPipelineDescriptor_set_vertex(GPURenderPipelineDescriptor* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("vertex"), em_Val_from(value));
}


jb_Any GPURenderPipelineDescriptor_primitive(const GPURenderPipelineDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("primitive")));
}


void GPURenderPipelineDescriptor_set_primitive(GPURenderPipelineDescriptor* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("primitive"), em_Val_from(value));
}


jb_Any GPURenderPipelineDescriptor_depthStencil(const GPURenderPipelineDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("depthStencil")));
}


void GPURenderPipelineDescriptor_set_depthStencil(GPURenderPipelineDescriptor* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("depthStencil"), em_Val_from(value));
}


jb_Any GPURenderPipelineDescriptor_multisample(const GPURenderPipelineDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("multisample")));
}


void GPURenderPipelineDescriptor_set_multisample(GPURenderPipelineDescriptor* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("multisample"), em_Val_from(value));
}


jb_Any GPURenderPipelineDescriptor_fragment(const GPURenderPipelineDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("fragment")));
}


void GPURenderPipelineDescriptor_set_fragment(GPURenderPipelineDescriptor* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("fragment"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(GPUCommandEncoderDescriptor, em_Val);

DEFINE_EMLITE_TYPE(GPURenderBundleEncoderDescriptor, em_Val);


bool GPURenderBundleEncoderDescriptor_depthReadOnly(const GPURenderBundleEncoderDescriptor *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("depthReadOnly")));
}


void GPURenderBundleEncoderDescriptor_set_depthReadOnly(GPURenderBundleEncoderDescriptor* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("depthReadOnly"), em_Val_from(value));
}


bool GPURenderBundleEncoderDescriptor_stencilReadOnly(const GPURenderBundleEncoderDescriptor *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("stencilReadOnly")));
}


void GPURenderBundleEncoderDescriptor_set_stencilReadOnly(GPURenderBundleEncoderDescriptor* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("stencilReadOnly"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(GPUQuerySetDescriptor, em_Val);


GPUQueryType GPUQuerySetDescriptor_type(const GPUQuerySetDescriptor *self) {
    return em_Val_as(GPUQueryType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void GPUQuerySetDescriptor_set_type(GPUQuerySetDescriptor* self, GPUQueryType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


jb_Any GPUQuerySetDescriptor_count(const GPUQuerySetDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("count")));
}


void GPUQuerySetDescriptor_set_count(GPUQuerySetDescriptor* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("count"), em_Val_from(value));
}

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


jb_USVString GPUDevice_label(const GPUDevice *self) {
    return em_Val_as(jb_USVString, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("label")));
}


void GPUDevice_set_label(GPUDevice* self, jb_USVString * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}

