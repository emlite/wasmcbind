#include <webbind/GPU.h>

#include <webbind/GPUAdapter.h>
#include <webbind/GPURequestAdapterOptions.h>
#include <webbind/WGSLLanguageFeatures.h>

DEFINE_EMLITE_TYPE(GPU, em_Val);


jb_Promise GPU_requestAdapter0(GPU* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "requestAdapter"));
}


jb_Promise GPU_requestAdapter1(GPU* self , GPURequestAdapterOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "requestAdapter", em_Val_from(options)));
}


GPUTextureFormat GPU_getPreferredCanvasFormat(GPU* self ) {
    return em_Val_as(GPUTextureFormat, em_Val_call(em_Val_as_val(self->inner), "getPreferredCanvasFormat"));
}


WGSLLanguageFeatures GPU_wgslLanguageFeatures(const GPU *self) {
    return em_Val_as(WGSLLanguageFeatures, em_Val_get(em_Val_as_val(self->inner), em_Val_from("wgslLanguageFeatures")));
}

