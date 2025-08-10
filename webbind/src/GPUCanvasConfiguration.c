#include <webbind/GPUCanvasConfiguration.h>

#include <webbind/GPUDevice.h>

DEFINE_EMLITE_TYPE(GPUCanvasConfiguration, em_Val);


GPUDevice GPUCanvasConfiguration_device(const GPUCanvasConfiguration *self) {
    return em_Val_as(GPUDevice, em_Val_get(em_Val_as_val(self->inner), em_Val_from("device")));
}


void GPUCanvasConfiguration_set_device(GPUCanvasConfiguration* self, GPUDevice * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("device"), em_Val_from(value));
}


GPUTextureFormat GPUCanvasConfiguration_format(const GPUCanvasConfiguration *self) {
    return em_Val_as(GPUTextureFormat, em_Val_get(em_Val_as_val(self->inner), em_Val_from("format")));
}


void GPUCanvasConfiguration_set_format(GPUCanvasConfiguration* self, GPUTextureFormat * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("format"), em_Val_from(value));
}


jb_Any GPUCanvasConfiguration_usage(const GPUCanvasConfiguration *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("usage")));
}


void GPUCanvasConfiguration_set_usage(GPUCanvasConfiguration* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("usage"), em_Val_from(value));
}


jb_Array GPUCanvasConfiguration_viewFormats(const GPUCanvasConfiguration *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("viewFormats")));
}


void GPUCanvasConfiguration_set_viewFormats(GPUCanvasConfiguration* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("viewFormats"), em_Val_from(value));
}


PredefinedColorSpace GPUCanvasConfiguration_colorSpace(const GPUCanvasConfiguration *self) {
    return em_Val_as(PredefinedColorSpace, em_Val_get(em_Val_as_val(self->inner), em_Val_from("colorSpace")));
}


void GPUCanvasConfiguration_set_colorSpace(GPUCanvasConfiguration* self, PredefinedColorSpace * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("colorSpace"), em_Val_from(value));
}


GPUCanvasToneMapping GPUCanvasConfiguration_toneMapping(const GPUCanvasConfiguration *self) {
    return em_Val_as(GPUCanvasToneMapping, em_Val_get(em_Val_as_val(self->inner), em_Val_from("toneMapping")));
}


void GPUCanvasConfiguration_set_toneMapping(GPUCanvasConfiguration* self, GPUCanvasToneMapping * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("toneMapping"), em_Val_from(value));
}


GPUCanvasAlphaMode GPUCanvasConfiguration_alphaMode(const GPUCanvasConfiguration *self) {
    return em_Val_as(GPUCanvasAlphaMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("alphaMode")));
}


void GPUCanvasConfiguration_set_alphaMode(GPUCanvasConfiguration* self, GPUCanvasAlphaMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("alphaMode"), em_Val_from(value));
}


GPUCanvasConfiguration GPUCanvasConfiguration_new() {
    em_Val obj = em_Val_object();
    return GPUCanvasConfiguration_from_val(&obj);
}

