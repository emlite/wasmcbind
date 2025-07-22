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
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "size"));
}


void GPUBufferDescriptor_set_size(GPUBufferDescriptor* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "size", value);
}


jb_Any GPUBufferDescriptor_usage(const GPUBufferDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "usage"));
}


void GPUBufferDescriptor_set_usage(GPUBufferDescriptor* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "usage", value);
}


bool GPUBufferDescriptor_mappedAtCreation(const GPUBufferDescriptor *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "mappedAtCreation"));
}


void GPUBufferDescriptor_set_mappedAtCreation(GPUBufferDescriptor* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "mappedAtCreation", value);
}

DEFINE_EMLITE_TYPE(GPUTextureDescriptor, em_Val);


jb_Any GPUTextureDescriptor_size(const GPUTextureDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "size"));
}


void GPUTextureDescriptor_set_size(GPUTextureDescriptor* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "size", value);
}


jb_Any GPUTextureDescriptor_mipLevelCount(const GPUTextureDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "mipLevelCount"));
}


void GPUTextureDescriptor_set_mipLevelCount(GPUTextureDescriptor* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "mipLevelCount", value);
}


jb_Any GPUTextureDescriptor_sampleCount(const GPUTextureDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "sampleCount"));
}


void GPUTextureDescriptor_set_sampleCount(GPUTextureDescriptor* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "sampleCount", value);
}


GPUTextureDimension GPUTextureDescriptor_dimension(const GPUTextureDescriptor *self) {
    return em_Val_as(GPUTextureDimension, em_Val_get(em_Val_as_val(self->inner), "dimension"));
}


void GPUTextureDescriptor_set_dimension(GPUTextureDescriptor* self, const GPUTextureDimension* value) {
    em_Val_set(em_Val_as_val(self->inner), "dimension", value);
}


GPUTextureFormat GPUTextureDescriptor_format(const GPUTextureDescriptor *self) {
    return em_Val_as(GPUTextureFormat, em_Val_get(em_Val_as_val(self->inner), "format"));
}


void GPUTextureDescriptor_set_format(GPUTextureDescriptor* self, const GPUTextureFormat* value) {
    em_Val_set(em_Val_as_val(self->inner), "format", value);
}


jb_Any GPUTextureDescriptor_usage(const GPUTextureDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "usage"));
}


void GPUTextureDescriptor_set_usage(GPUTextureDescriptor* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "usage", value);
}


jb_Sequence GPUTextureDescriptor_viewFormats(const GPUTextureDescriptor *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "viewFormats"));
}


void GPUTextureDescriptor_set_viewFormats(GPUTextureDescriptor* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "viewFormats", value);
}

DEFINE_EMLITE_TYPE(GPUSamplerDescriptor, em_Val);


GPUAddressMode GPUSamplerDescriptor_addressModeU(const GPUSamplerDescriptor *self) {
    return em_Val_as(GPUAddressMode, em_Val_get(em_Val_as_val(self->inner), "addressModeU"));
}


void GPUSamplerDescriptor_set_addressModeU(GPUSamplerDescriptor* self, const GPUAddressMode* value) {
    em_Val_set(em_Val_as_val(self->inner), "addressModeU", value);
}


GPUAddressMode GPUSamplerDescriptor_addressModeV(const GPUSamplerDescriptor *self) {
    return em_Val_as(GPUAddressMode, em_Val_get(em_Val_as_val(self->inner), "addressModeV"));
}


void GPUSamplerDescriptor_set_addressModeV(GPUSamplerDescriptor* self, const GPUAddressMode* value) {
    em_Val_set(em_Val_as_val(self->inner), "addressModeV", value);
}


GPUAddressMode GPUSamplerDescriptor_addressModeW(const GPUSamplerDescriptor *self) {
    return em_Val_as(GPUAddressMode, em_Val_get(em_Val_as_val(self->inner), "addressModeW"));
}


void GPUSamplerDescriptor_set_addressModeW(GPUSamplerDescriptor* self, const GPUAddressMode* value) {
    em_Val_set(em_Val_as_val(self->inner), "addressModeW", value);
}


GPUFilterMode GPUSamplerDescriptor_magFilter(const GPUSamplerDescriptor *self) {
    return em_Val_as(GPUFilterMode, em_Val_get(em_Val_as_val(self->inner), "magFilter"));
}


void GPUSamplerDescriptor_set_magFilter(GPUSamplerDescriptor* self, const GPUFilterMode* value) {
    em_Val_set(em_Val_as_val(self->inner), "magFilter", value);
}


GPUFilterMode GPUSamplerDescriptor_minFilter(const GPUSamplerDescriptor *self) {
    return em_Val_as(GPUFilterMode, em_Val_get(em_Val_as_val(self->inner), "minFilter"));
}


void GPUSamplerDescriptor_set_minFilter(GPUSamplerDescriptor* self, const GPUFilterMode* value) {
    em_Val_set(em_Val_as_val(self->inner), "minFilter", value);
}


GPUMipmapFilterMode GPUSamplerDescriptor_mipmapFilter(const GPUSamplerDescriptor *self) {
    return em_Val_as(GPUMipmapFilterMode, em_Val_get(em_Val_as_val(self->inner), "mipmapFilter"));
}


void GPUSamplerDescriptor_set_mipmapFilter(GPUSamplerDescriptor* self, const GPUMipmapFilterMode* value) {
    em_Val_set(em_Val_as_val(self->inner), "mipmapFilter", value);
}


float GPUSamplerDescriptor_lodMinClamp(const GPUSamplerDescriptor *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), "lodMinClamp"));
}


void GPUSamplerDescriptor_set_lodMinClamp(GPUSamplerDescriptor* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), "lodMinClamp", value);
}


float GPUSamplerDescriptor_lodMaxClamp(const GPUSamplerDescriptor *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), "lodMaxClamp"));
}


void GPUSamplerDescriptor_set_lodMaxClamp(GPUSamplerDescriptor* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), "lodMaxClamp", value);
}


GPUCompareFunction GPUSamplerDescriptor_compare(const GPUSamplerDescriptor *self) {
    return em_Val_as(GPUCompareFunction, em_Val_get(em_Val_as_val(self->inner), "compare"));
}


void GPUSamplerDescriptor_set_compare(GPUSamplerDescriptor* self, const GPUCompareFunction* value) {
    em_Val_set(em_Val_as_val(self->inner), "compare", value);
}


unsigned short GPUSamplerDescriptor_maxAnisotropy(const GPUSamplerDescriptor *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), "maxAnisotropy"));
}


void GPUSamplerDescriptor_set_maxAnisotropy(GPUSamplerDescriptor* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), "maxAnisotropy", value);
}

DEFINE_EMLITE_TYPE(GPUExternalTextureDescriptor, em_Val);


jb_Any GPUExternalTextureDescriptor_source(const GPUExternalTextureDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "source"));
}


void GPUExternalTextureDescriptor_set_source(GPUExternalTextureDescriptor* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "source", value);
}


PredefinedColorSpace GPUExternalTextureDescriptor_colorSpace(const GPUExternalTextureDescriptor *self) {
    return em_Val_as(PredefinedColorSpace, em_Val_get(em_Val_as_val(self->inner), "colorSpace"));
}


void GPUExternalTextureDescriptor_set_colorSpace(GPUExternalTextureDescriptor* self, const PredefinedColorSpace* value) {
    em_Val_set(em_Val_as_val(self->inner), "colorSpace", value);
}

DEFINE_EMLITE_TYPE(GPUBindGroupLayoutDescriptor, em_Val);


jb_Sequence GPUBindGroupLayoutDescriptor_entries(const GPUBindGroupLayoutDescriptor *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "entries"));
}


void GPUBindGroupLayoutDescriptor_set_entries(GPUBindGroupLayoutDescriptor* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "entries", value);
}

DEFINE_EMLITE_TYPE(GPUPipelineLayoutDescriptor, em_Val);


jb_Sequence GPUPipelineLayoutDescriptor_bindGroupLayouts(const GPUPipelineLayoutDescriptor *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "bindGroupLayouts"));
}


void GPUPipelineLayoutDescriptor_set_bindGroupLayouts(GPUPipelineLayoutDescriptor* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "bindGroupLayouts", value);
}

DEFINE_EMLITE_TYPE(GPUBindGroupDescriptor, em_Val);


GPUBindGroupLayout GPUBindGroupDescriptor_layout(const GPUBindGroupDescriptor *self) {
    return em_Val_as(GPUBindGroupLayout, em_Val_get(em_Val_as_val(self->inner), "layout"));
}


void GPUBindGroupDescriptor_set_layout(GPUBindGroupDescriptor* self, const GPUBindGroupLayout* value) {
    em_Val_set(em_Val_as_val(self->inner), "layout", value);
}


jb_Sequence GPUBindGroupDescriptor_entries(const GPUBindGroupDescriptor *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "entries"));
}


void GPUBindGroupDescriptor_set_entries(GPUBindGroupDescriptor* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "entries", value);
}

DEFINE_EMLITE_TYPE(GPUShaderModuleDescriptor, em_Val);


jb_USVString GPUShaderModuleDescriptor_code(const GPUShaderModuleDescriptor *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "code"));
}


void GPUShaderModuleDescriptor_set_code(GPUShaderModuleDescriptor* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "code", value);
}


jb_Sequence GPUShaderModuleDescriptor_compilationHints(const GPUShaderModuleDescriptor *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "compilationHints"));
}


void GPUShaderModuleDescriptor_set_compilationHints(GPUShaderModuleDescriptor* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "compilationHints", value);
}

DEFINE_EMLITE_TYPE(GPUComputePipelineDescriptor, em_Val);


jb_Any GPUComputePipelineDescriptor_compute(const GPUComputePipelineDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "compute"));
}


void GPUComputePipelineDescriptor_set_compute(GPUComputePipelineDescriptor* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "compute", value);
}

DEFINE_EMLITE_TYPE(GPURenderPipelineDescriptor, em_Val);


jb_Any GPURenderPipelineDescriptor_vertex(const GPURenderPipelineDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "vertex"));
}


void GPURenderPipelineDescriptor_set_vertex(GPURenderPipelineDescriptor* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "vertex", value);
}


jb_Any GPURenderPipelineDescriptor_primitive(const GPURenderPipelineDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "primitive"));
}


void GPURenderPipelineDescriptor_set_primitive(GPURenderPipelineDescriptor* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "primitive", value);
}


jb_Any GPURenderPipelineDescriptor_depthStencil(const GPURenderPipelineDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "depthStencil"));
}


void GPURenderPipelineDescriptor_set_depthStencil(GPURenderPipelineDescriptor* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "depthStencil", value);
}


jb_Any GPURenderPipelineDescriptor_multisample(const GPURenderPipelineDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "multisample"));
}


void GPURenderPipelineDescriptor_set_multisample(GPURenderPipelineDescriptor* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "multisample", value);
}


jb_Any GPURenderPipelineDescriptor_fragment(const GPURenderPipelineDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "fragment"));
}


void GPURenderPipelineDescriptor_set_fragment(GPURenderPipelineDescriptor* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "fragment", value);
}

DEFINE_EMLITE_TYPE(GPUCommandEncoderDescriptor, em_Val);

DEFINE_EMLITE_TYPE(GPURenderBundleEncoderDescriptor, em_Val);


bool GPURenderBundleEncoderDescriptor_depthReadOnly(const GPURenderBundleEncoderDescriptor *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "depthReadOnly"));
}


void GPURenderBundleEncoderDescriptor_set_depthReadOnly(GPURenderBundleEncoderDescriptor* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "depthReadOnly", value);
}


bool GPURenderBundleEncoderDescriptor_stencilReadOnly(const GPURenderBundleEncoderDescriptor *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "stencilReadOnly"));
}


void GPURenderBundleEncoderDescriptor_set_stencilReadOnly(GPURenderBundleEncoderDescriptor* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "stencilReadOnly", value);
}

DEFINE_EMLITE_TYPE(GPUQuerySetDescriptor, em_Val);


GPUQueryType GPUQuerySetDescriptor_type(const GPUQuerySetDescriptor *self) {
    return em_Val_as(GPUQueryType, em_Val_get(em_Val_as_val(self->inner), "type"));
}


void GPUQuerySetDescriptor_set_type(GPUQuerySetDescriptor* self, const GPUQueryType* value) {
    em_Val_set(em_Val_as_val(self->inner), "type", value);
}


jb_Any GPUQuerySetDescriptor_count(const GPUQuerySetDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "count"));
}


void GPUQuerySetDescriptor_set_count(GPUQuerySetDescriptor* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "count", value);
}

DEFINE_EMLITE_TYPE(GPUDevice, EventTarget);


GPUSupportedFeatures GPUDevice_features(const GPUDevice *self) {
    return em_Val_as(GPUSupportedFeatures, em_Val_get(EventTarget_as_val(self->inner), "features"));
}


GPUSupportedLimits GPUDevice_limits(const GPUDevice *self) {
    return em_Val_as(GPUSupportedLimits, em_Val_get(EventTarget_as_val(self->inner), "limits"));
}


GPUAdapterInfo GPUDevice_adapterInfo(const GPUDevice *self) {
    return em_Val_as(GPUAdapterInfo, em_Val_get(EventTarget_as_val(self->inner), "adapterInfo"));
}


GPUQueue GPUDevice_queue(const GPUDevice *self) {
    return em_Val_as(GPUQueue, em_Val_get(EventTarget_as_val(self->inner), "queue"));
}


jb_Undefined GPUDevice_destroy(GPUDevice* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "destroy"));
}


GPUBuffer GPUDevice_createBuffer(GPUDevice* self , const GPUBufferDescriptor* descriptor) {
    return em_Val_as(GPUBuffer, em_Val_call(EventTarget_as_val(self->inner), "createBuffer", em_Val_from(descriptor)));
}


GPUTexture GPUDevice_createTexture(GPUDevice* self , const GPUTextureDescriptor* descriptor) {
    return em_Val_as(GPUTexture, em_Val_call(EventTarget_as_val(self->inner), "createTexture", em_Val_from(descriptor)));
}


GPUSampler GPUDevice_createSampler(GPUDevice* self ) {
    return em_Val_as(GPUSampler, em_Val_call(EventTarget_as_val(self->inner), "createSampler"));
}


GPUSampler GPUDevice_createSampler(GPUDevice* self , const GPUSamplerDescriptor* descriptor) {
    return em_Val_as(GPUSampler, em_Val_call(EventTarget_as_val(self->inner), "createSampler", em_Val_from(descriptor)));
}


GPUExternalTexture GPUDevice_importExternalTexture(GPUDevice* self , const GPUExternalTextureDescriptor* descriptor) {
    return em_Val_as(GPUExternalTexture, em_Val_call(EventTarget_as_val(self->inner), "importExternalTexture", em_Val_from(descriptor)));
}


GPUBindGroupLayout GPUDevice_createBindGroupLayout(GPUDevice* self , const GPUBindGroupLayoutDescriptor* descriptor) {
    return em_Val_as(GPUBindGroupLayout, em_Val_call(EventTarget_as_val(self->inner), "createBindGroupLayout", em_Val_from(descriptor)));
}


GPUPipelineLayout GPUDevice_createPipelineLayout(GPUDevice* self , const GPUPipelineLayoutDescriptor* descriptor) {
    return em_Val_as(GPUPipelineLayout, em_Val_call(EventTarget_as_val(self->inner), "createPipelineLayout", em_Val_from(descriptor)));
}


GPUBindGroup GPUDevice_createBindGroup(GPUDevice* self , const GPUBindGroupDescriptor* descriptor) {
    return em_Val_as(GPUBindGroup, em_Val_call(EventTarget_as_val(self->inner), "createBindGroup", em_Val_from(descriptor)));
}


GPUShaderModule GPUDevice_createShaderModule(GPUDevice* self , const GPUShaderModuleDescriptor* descriptor) {
    return em_Val_as(GPUShaderModule, em_Val_call(EventTarget_as_val(self->inner), "createShaderModule", em_Val_from(descriptor)));
}


GPUComputePipeline GPUDevice_createComputePipeline(GPUDevice* self , const GPUComputePipelineDescriptor* descriptor) {
    return em_Val_as(GPUComputePipeline, em_Val_call(EventTarget_as_val(self->inner), "createComputePipeline", em_Val_from(descriptor)));
}


GPURenderPipeline GPUDevice_createRenderPipeline(GPUDevice* self , const GPURenderPipelineDescriptor* descriptor) {
    return em_Val_as(GPURenderPipeline, em_Val_call(EventTarget_as_val(self->inner), "createRenderPipeline", em_Val_from(descriptor)));
}


jb_Promise GPUDevice_createComputePipelineAsync(GPUDevice* self , const GPUComputePipelineDescriptor* descriptor) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "createComputePipelineAsync", em_Val_from(descriptor)));
}


jb_Promise GPUDevice_createRenderPipelineAsync(GPUDevice* self , const GPURenderPipelineDescriptor* descriptor) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "createRenderPipelineAsync", em_Val_from(descriptor)));
}


GPUCommandEncoder GPUDevice_createCommandEncoder(GPUDevice* self ) {
    return em_Val_as(GPUCommandEncoder, em_Val_call(EventTarget_as_val(self->inner), "createCommandEncoder"));
}


GPUCommandEncoder GPUDevice_createCommandEncoder(GPUDevice* self , const GPUCommandEncoderDescriptor* descriptor) {
    return em_Val_as(GPUCommandEncoder, em_Val_call(EventTarget_as_val(self->inner), "createCommandEncoder", em_Val_from(descriptor)));
}


GPURenderBundleEncoder GPUDevice_createRenderBundleEncoder(GPUDevice* self , const GPURenderBundleEncoderDescriptor* descriptor) {
    return em_Val_as(GPURenderBundleEncoder, em_Val_call(EventTarget_as_val(self->inner), "createRenderBundleEncoder", em_Val_from(descriptor)));
}


GPUQuerySet GPUDevice_createQuerySet(GPUDevice* self , const GPUQuerySetDescriptor* descriptor) {
    return em_Val_as(GPUQuerySet, em_Val_call(EventTarget_as_val(self->inner), "createQuerySet", em_Val_from(descriptor)));
}


jb_Promise GPUDevice_lost(const GPUDevice *self) {
    return em_Val_as(jb_Promise, em_Val_get(EventTarget_as_val(self->inner), "lost"));
}


jb_Undefined GPUDevice_pushErrorScope(GPUDevice* self , const GPUErrorFilter* filter) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "pushErrorScope", em_Val_from(filter)));
}


jb_Promise GPUDevice_popErrorScope(GPUDevice* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "popErrorScope"));
}


jb_Any GPUDevice_onuncapturederror(const GPUDevice *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onuncapturederror"));
}


void GPUDevice_set_onuncapturederror(GPUDevice* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onuncapturederror", value);
}


jb_USVString GPUDevice_label(const GPUDevice *self) {
    return em_Val_as(jb_USVString, em_Val_get(EventTarget_as_val(self->inner), "label"));
}


void GPUDevice_set_label(GPUDevice* self, const jb_USVString* value) {
    em_Val_set(EventTarget_as_val(self->inner), "label", value);
}

