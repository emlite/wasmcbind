#include <webbind/GPU.h>
#include <webbind/GPUAdapter.h>
#include <webbind/WGSLLanguageFeatures.h>


DEFINE_EMLITE_TYPE(GPURequestAdapterOptions, em_Val);


jb_DOMString GPURequestAdapterOptions_featureLevel(const GPURequestAdapterOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "featureLevel"));
}


void GPURequestAdapterOptions_set_featureLevel(GPURequestAdapterOptions* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "featureLevel", value);
}


GPUPowerPreference GPURequestAdapterOptions_powerPreference(const GPURequestAdapterOptions *self) {
    return em_Val_as(GPUPowerPreference, em_Val_get(em_Val_as_val(self->inner), "powerPreference"));
}


void GPURequestAdapterOptions_set_powerPreference(GPURequestAdapterOptions* self, const GPUPowerPreference* value) {
    em_Val_set(em_Val_as_val(self->inner), "powerPreference", value);
}


bool GPURequestAdapterOptions_forceFallbackAdapter(const GPURequestAdapterOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "forceFallbackAdapter"));
}


void GPURequestAdapterOptions_set_forceFallbackAdapter(GPURequestAdapterOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "forceFallbackAdapter", value);
}


bool GPURequestAdapterOptions_xrCompatible(const GPURequestAdapterOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "xrCompatible"));
}


void GPURequestAdapterOptions_set_xrCompatible(GPURequestAdapterOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "xrCompatible", value);
}

DEFINE_EMLITE_TYPE(GPU, em_Val);


jb_Promise GPU_requestAdapter(GPU* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "requestAdapter"));
}


jb_Promise GPU_requestAdapter(GPU* self , const GPURequestAdapterOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "requestAdapter", em_Val_from(options)));
}


GPUTextureFormat GPU_getPreferredCanvasFormat(GPU* self ) {
    return em_Val_as(GPUTextureFormat, em_Val_call(em_Val_as_val(self->inner), "getPreferredCanvasFormat"));
}


WGSLLanguageFeatures GPU_wgslLanguageFeatures(const GPU *self) {
    return em_Val_as(WGSLLanguageFeatures, em_Val_get(em_Val_as_val(self->inner), "wgslLanguageFeatures"));
}

