#include <webbind/GPUSupportedLimits.h>

DEFINE_EMLITE_TYPE(GPUSupportedLimits, em_Val);


unsigned long GPUSupportedLimits_maxTextureDimension1D(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxTextureDimension1D")));
}


unsigned long GPUSupportedLimits_maxTextureDimension2D(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxTextureDimension2D")));
}


unsigned long GPUSupportedLimits_maxTextureDimension3D(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxTextureDimension3D")));
}


unsigned long GPUSupportedLimits_maxTextureArrayLayers(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxTextureArrayLayers")));
}


unsigned long GPUSupportedLimits_maxBindGroups(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxBindGroups")));
}


unsigned long GPUSupportedLimits_maxBindGroupsPlusVertexBuffers(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxBindGroupsPlusVertexBuffers")));
}


unsigned long GPUSupportedLimits_maxBindingsPerBindGroup(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxBindingsPerBindGroup")));
}


unsigned long GPUSupportedLimits_maxDynamicUniformBuffersPerPipelineLayout(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxDynamicUniformBuffersPerPipelineLayout")));
}


unsigned long GPUSupportedLimits_maxDynamicStorageBuffersPerPipelineLayout(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxDynamicStorageBuffersPerPipelineLayout")));
}


unsigned long GPUSupportedLimits_maxSampledTexturesPerShaderStage(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxSampledTexturesPerShaderStage")));
}


unsigned long GPUSupportedLimits_maxSamplersPerShaderStage(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxSamplersPerShaderStage")));
}


unsigned long GPUSupportedLimits_maxStorageBuffersPerShaderStage(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxStorageBuffersPerShaderStage")));
}


unsigned long GPUSupportedLimits_maxStorageTexturesPerShaderStage(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxStorageTexturesPerShaderStage")));
}


unsigned long GPUSupportedLimits_maxUniformBuffersPerShaderStage(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxUniformBuffersPerShaderStage")));
}


long long GPUSupportedLimits_maxUniformBufferBindingSize(const GPUSupportedLimits *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxUniformBufferBindingSize")));
}


long long GPUSupportedLimits_maxStorageBufferBindingSize(const GPUSupportedLimits *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxStorageBufferBindingSize")));
}


unsigned long GPUSupportedLimits_minUniformBufferOffsetAlignment(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("minUniformBufferOffsetAlignment")));
}


unsigned long GPUSupportedLimits_minStorageBufferOffsetAlignment(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("minStorageBufferOffsetAlignment")));
}


unsigned long GPUSupportedLimits_maxVertexBuffers(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxVertexBuffers")));
}


long long GPUSupportedLimits_maxBufferSize(const GPUSupportedLimits *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxBufferSize")));
}


unsigned long GPUSupportedLimits_maxVertexAttributes(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxVertexAttributes")));
}


unsigned long GPUSupportedLimits_maxVertexBufferArrayStride(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxVertexBufferArrayStride")));
}


unsigned long GPUSupportedLimits_maxInterStageShaderVariables(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxInterStageShaderVariables")));
}


unsigned long GPUSupportedLimits_maxColorAttachments(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxColorAttachments")));
}


unsigned long GPUSupportedLimits_maxColorAttachmentBytesPerSample(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxColorAttachmentBytesPerSample")));
}


unsigned long GPUSupportedLimits_maxComputeWorkgroupStorageSize(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxComputeWorkgroupStorageSize")));
}


unsigned long GPUSupportedLimits_maxComputeInvocationsPerWorkgroup(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxComputeInvocationsPerWorkgroup")));
}


unsigned long GPUSupportedLimits_maxComputeWorkgroupSizeX(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxComputeWorkgroupSizeX")));
}


unsigned long GPUSupportedLimits_maxComputeWorkgroupSizeY(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxComputeWorkgroupSizeY")));
}


unsigned long GPUSupportedLimits_maxComputeWorkgroupSizeZ(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxComputeWorkgroupSizeZ")));
}


unsigned long GPUSupportedLimits_maxComputeWorkgroupsPerDimension(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxComputeWorkgroupsPerDimension")));
}

