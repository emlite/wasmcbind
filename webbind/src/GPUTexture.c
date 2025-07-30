#include <webbind/GPUTexture.h>
#include <webbind/GPUTextureView.h>


DEFINE_EMLITE_TYPE(GPUTextureViewDescriptor, em_Val);


GPUTextureFormat GPUTextureViewDescriptor_format(const GPUTextureViewDescriptor *self) {
    return em_Val_as(GPUTextureFormat, em_Val_get(em_Val_as_val(self->inner), em_Val_from("format")));
}


void GPUTextureViewDescriptor_set_format(GPUTextureViewDescriptor* self, GPUTextureFormat * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("format"), em_Val_from(value));
}


GPUTextureViewDimension GPUTextureViewDescriptor_dimension(const GPUTextureViewDescriptor *self) {
    return em_Val_as(GPUTextureViewDimension, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dimension")));
}


void GPUTextureViewDescriptor_set_dimension(GPUTextureViewDescriptor* self, GPUTextureViewDimension * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("dimension"), em_Val_from(value));
}


jb_Any GPUTextureViewDescriptor_usage(const GPUTextureViewDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("usage")));
}


void GPUTextureViewDescriptor_set_usage(GPUTextureViewDescriptor* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("usage"), em_Val_from(value));
}


GPUTextureAspect GPUTextureViewDescriptor_aspect(const GPUTextureViewDescriptor *self) {
    return em_Val_as(GPUTextureAspect, em_Val_get(em_Val_as_val(self->inner), em_Val_from("aspect")));
}


void GPUTextureViewDescriptor_set_aspect(GPUTextureViewDescriptor* self, GPUTextureAspect * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("aspect"), em_Val_from(value));
}


jb_Any GPUTextureViewDescriptor_baseMipLevel(const GPUTextureViewDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("baseMipLevel")));
}


void GPUTextureViewDescriptor_set_baseMipLevel(GPUTextureViewDescriptor* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("baseMipLevel"), em_Val_from(value));
}


jb_Any GPUTextureViewDescriptor_mipLevelCount(const GPUTextureViewDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mipLevelCount")));
}


void GPUTextureViewDescriptor_set_mipLevelCount(GPUTextureViewDescriptor* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mipLevelCount"), em_Val_from(value));
}


jb_Any GPUTextureViewDescriptor_baseArrayLayer(const GPUTextureViewDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("baseArrayLayer")));
}


void GPUTextureViewDescriptor_set_baseArrayLayer(GPUTextureViewDescriptor* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("baseArrayLayer"), em_Val_from(value));
}


jb_Any GPUTextureViewDescriptor_arrayLayerCount(const GPUTextureViewDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("arrayLayerCount")));
}


void GPUTextureViewDescriptor_set_arrayLayerCount(GPUTextureViewDescriptor* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("arrayLayerCount"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(GPUTexture, em_Val);


GPUTextureView GPUTexture_createView0(GPUTexture* self ) {
    return em_Val_as(GPUTextureView, em_Val_call(em_Val_as_val(self->inner), "createView"));
}


GPUTextureView GPUTexture_createView1(GPUTexture* self , GPUTextureViewDescriptor * descriptor) {
    return em_Val_as(GPUTextureView, em_Val_call(em_Val_as_val(self->inner), "createView", em_Val_from(descriptor)));
}


jb_Undefined GPUTexture_destroy(GPUTexture* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "destroy"));
}


jb_Any GPUTexture_width(const GPUTexture *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("width")));
}


jb_Any GPUTexture_height(const GPUTexture *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("height")));
}


jb_Any GPUTexture_depthOrArrayLayers(const GPUTexture *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("depthOrArrayLayers")));
}


jb_Any GPUTexture_mipLevelCount(const GPUTexture *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mipLevelCount")));
}


jb_Any GPUTexture_sampleCount(const GPUTexture *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sampleCount")));
}


GPUTextureDimension GPUTexture_dimension(const GPUTexture *self) {
    return em_Val_as(GPUTextureDimension, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dimension")));
}


GPUTextureFormat GPUTexture_format(const GPUTexture *self) {
    return em_Val_as(GPUTextureFormat, em_Val_get(em_Val_as_val(self->inner), em_Val_from("format")));
}


jb_Any GPUTexture_usage(const GPUTexture *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("usage")));
}


jb_String GPUTexture_label(const GPUTexture *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("label")));
}


void GPUTexture_set_label(GPUTexture* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}

