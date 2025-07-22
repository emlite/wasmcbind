#include <webbind/GPUCanvasContext.h>
#include <webbind/GPUTexture.h>
#include <webbind/GPUDevice.h>


DEFINE_EMLITE_TYPE(GPUCanvasConfiguration, em_Val);


GPUDevice GPUCanvasConfiguration_device(const GPUCanvasConfiguration *self) {
    return em_Val_as(GPUDevice, em_Val_get(em_Val_as_val(self->inner), "device"));
}


void GPUCanvasConfiguration_set_device(GPUCanvasConfiguration* self, const GPUDevice* value) {
    em_Val_set(em_Val_as_val(self->inner), "device", value);
}


GPUTextureFormat GPUCanvasConfiguration_format(const GPUCanvasConfiguration *self) {
    return em_Val_as(GPUTextureFormat, em_Val_get(em_Val_as_val(self->inner), "format"));
}


void GPUCanvasConfiguration_set_format(GPUCanvasConfiguration* self, const GPUTextureFormat* value) {
    em_Val_set(em_Val_as_val(self->inner), "format", value);
}


jb_Any GPUCanvasConfiguration_usage(const GPUCanvasConfiguration *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "usage"));
}


void GPUCanvasConfiguration_set_usage(GPUCanvasConfiguration* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "usage", value);
}


jb_Sequence GPUCanvasConfiguration_viewFormats(const GPUCanvasConfiguration *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "viewFormats"));
}


void GPUCanvasConfiguration_set_viewFormats(GPUCanvasConfiguration* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "viewFormats", value);
}


PredefinedColorSpace GPUCanvasConfiguration_colorSpace(const GPUCanvasConfiguration *self) {
    return em_Val_as(PredefinedColorSpace, em_Val_get(em_Val_as_val(self->inner), "colorSpace"));
}


void GPUCanvasConfiguration_set_colorSpace(GPUCanvasConfiguration* self, const PredefinedColorSpace* value) {
    em_Val_set(em_Val_as_val(self->inner), "colorSpace", value);
}


jb_Any GPUCanvasConfiguration_toneMapping(const GPUCanvasConfiguration *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "toneMapping"));
}


void GPUCanvasConfiguration_set_toneMapping(GPUCanvasConfiguration* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "toneMapping", value);
}


GPUCanvasAlphaMode GPUCanvasConfiguration_alphaMode(const GPUCanvasConfiguration *self) {
    return em_Val_as(GPUCanvasAlphaMode, em_Val_get(em_Val_as_val(self->inner), "alphaMode"));
}


void GPUCanvasConfiguration_set_alphaMode(GPUCanvasConfiguration* self, const GPUCanvasAlphaMode* value) {
    em_Val_set(em_Val_as_val(self->inner), "alphaMode", value);
}

DEFINE_EMLITE_TYPE(GPUCanvasContext, em_Val);


jb_Any GPUCanvasContext_canvas(const GPUCanvasContext *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "canvas"));
}


jb_Undefined GPUCanvasContext_configure(GPUCanvasContext* self , const GPUCanvasConfiguration* configuration) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "configure", em_Val_from(configuration)));
}


jb_Undefined GPUCanvasContext_unconfigure(GPUCanvasContext* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "unconfigure"));
}


GPUCanvasConfiguration GPUCanvasContext_getConfiguration(GPUCanvasContext* self ) {
    return em_Val_as(GPUCanvasConfiguration, em_Val_call(em_Val_as_val(self->inner), "getConfiguration"));
}


GPUTexture GPUCanvasContext_getCurrentTexture(GPUCanvasContext* self ) {
    return em_Val_as(GPUTexture, em_Val_call(em_Val_as_val(self->inner), "getCurrentTexture"));
}

