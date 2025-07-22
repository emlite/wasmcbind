#include <webbind/GPUSupportedLimits.h>


DEFINE_EMLITE_TYPE(GPUSupportedLimits, em_Val);


unsigned long GPUSupportedLimits_maxTextureDimension1D(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "maxTextureDimension1D"));
}


unsigned long GPUSupportedLimits_maxTextureDimension2D(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "maxTextureDimension2D"));
}


unsigned long GPUSupportedLimits_maxTextureDimension3D(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "maxTextureDimension3D"));
}


unsigned long GPUSupportedLimits_maxTextureArrayLayers(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "maxTextureArrayLayers"));
}


unsigned long GPUSupportedLimits_maxBindGroups(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "maxBindGroups"));
}


unsigned long GPUSupportedLimits_maxBindGroupsPlusVertexBuffers(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "maxBindGroupsPlusVertexBuffers"));
}


unsigned long GPUSupportedLimits_maxBindingsPerBindGroup(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "maxBindingsPerBindGroup"));
}


unsigned long GPUSupportedLimits_maxDynamicUniformBuffersPerPipelineLayout(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "maxDynamicUniformBuffersPerPipelineLayout"));
}


unsigned long GPUSupportedLimits_maxDynamicStorageBuffersPerPipelineLayout(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "maxDynamicStorageBuffersPerPipelineLayout"));
}


unsigned long GPUSupportedLimits_maxSampledTexturesPerShaderStage(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "maxSampledTexturesPerShaderStage"));
}


unsigned long GPUSupportedLimits_maxSamplersPerShaderStage(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "maxSamplersPerShaderStage"));
}


unsigned long GPUSupportedLimits_maxStorageBuffersPerShaderStage(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "maxStorageBuffersPerShaderStage"));
}


unsigned long GPUSupportedLimits_maxStorageTexturesPerShaderStage(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "maxStorageTexturesPerShaderStage"));
}


unsigned long GPUSupportedLimits_maxUniformBuffersPerShaderStage(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "maxUniformBuffersPerShaderStage"));
}


long long GPUSupportedLimits_maxUniformBufferBindingSize(const GPUSupportedLimits *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "maxUniformBufferBindingSize"));
}


long long GPUSupportedLimits_maxStorageBufferBindingSize(const GPUSupportedLimits *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "maxStorageBufferBindingSize"));
}


unsigned long GPUSupportedLimits_minUniformBufferOffsetAlignment(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "minUniformBufferOffsetAlignment"));
}


unsigned long GPUSupportedLimits_minStorageBufferOffsetAlignment(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "minStorageBufferOffsetAlignment"));
}


unsigned long GPUSupportedLimits_maxVertexBuffers(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "maxVertexBuffers"));
}


long long GPUSupportedLimits_maxBufferSize(const GPUSupportedLimits *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "maxBufferSize"));
}


unsigned long GPUSupportedLimits_maxVertexAttributes(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "maxVertexAttributes"));
}


unsigned long GPUSupportedLimits_maxVertexBufferArrayStride(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "maxVertexBufferArrayStride"));
}


unsigned long GPUSupportedLimits_maxInterStageShaderVariables(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "maxInterStageShaderVariables"));
}


unsigned long GPUSupportedLimits_maxColorAttachments(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "maxColorAttachments"));
}


unsigned long GPUSupportedLimits_maxColorAttachmentBytesPerSample(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "maxColorAttachmentBytesPerSample"));
}


unsigned long GPUSupportedLimits_maxComputeWorkgroupStorageSize(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "maxComputeWorkgroupStorageSize"));
}


unsigned long GPUSupportedLimits_maxComputeInvocationsPerWorkgroup(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "maxComputeInvocationsPerWorkgroup"));
}


unsigned long GPUSupportedLimits_maxComputeWorkgroupSizeX(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "maxComputeWorkgroupSizeX"));
}


unsigned long GPUSupportedLimits_maxComputeWorkgroupSizeY(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "maxComputeWorkgroupSizeY"));
}


unsigned long GPUSupportedLimits_maxComputeWorkgroupSizeZ(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "maxComputeWorkgroupSizeZ"));
}


unsigned long GPUSupportedLimits_maxComputeWorkgroupsPerDimension(const GPUSupportedLimits *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "maxComputeWorkgroupsPerDimension"));
}

