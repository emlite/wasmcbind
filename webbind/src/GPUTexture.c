#include <webbind/GPUTexture.h>
#include <webbind/GPUTextureView.h>


DEFINE_EMLITE_TYPE(GPUTextureViewDescriptor, em_Val);


GPUTextureFormat GPUTextureViewDescriptor_format(const GPUTextureViewDescriptor *self) {
    return em_Val_as(GPUTextureFormat, em_Val_get(em_Val_as_val(self->inner), "format"));
}


void GPUTextureViewDescriptor_set_format(GPUTextureViewDescriptor* self, const GPUTextureFormat* value) {
    em_Val_set(em_Val_as_val(self->inner), "format", value);
}


GPUTextureViewDimension GPUTextureViewDescriptor_dimension(const GPUTextureViewDescriptor *self) {
    return em_Val_as(GPUTextureViewDimension, em_Val_get(em_Val_as_val(self->inner), "dimension"));
}


void GPUTextureViewDescriptor_set_dimension(GPUTextureViewDescriptor* self, const GPUTextureViewDimension* value) {
    em_Val_set(em_Val_as_val(self->inner), "dimension", value);
}


jb_Any GPUTextureViewDescriptor_usage(const GPUTextureViewDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "usage"));
}


void GPUTextureViewDescriptor_set_usage(GPUTextureViewDescriptor* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "usage", value);
}


GPUTextureAspect GPUTextureViewDescriptor_aspect(const GPUTextureViewDescriptor *self) {
    return em_Val_as(GPUTextureAspect, em_Val_get(em_Val_as_val(self->inner), "aspect"));
}


void GPUTextureViewDescriptor_set_aspect(GPUTextureViewDescriptor* self, const GPUTextureAspect* value) {
    em_Val_set(em_Val_as_val(self->inner), "aspect", value);
}


jb_Any GPUTextureViewDescriptor_baseMipLevel(const GPUTextureViewDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "baseMipLevel"));
}


void GPUTextureViewDescriptor_set_baseMipLevel(GPUTextureViewDescriptor* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "baseMipLevel", value);
}


jb_Any GPUTextureViewDescriptor_mipLevelCount(const GPUTextureViewDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "mipLevelCount"));
}


void GPUTextureViewDescriptor_set_mipLevelCount(GPUTextureViewDescriptor* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "mipLevelCount", value);
}


jb_Any GPUTextureViewDescriptor_baseArrayLayer(const GPUTextureViewDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "baseArrayLayer"));
}


void GPUTextureViewDescriptor_set_baseArrayLayer(GPUTextureViewDescriptor* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "baseArrayLayer", value);
}


jb_Any GPUTextureViewDescriptor_arrayLayerCount(const GPUTextureViewDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "arrayLayerCount"));
}


void GPUTextureViewDescriptor_set_arrayLayerCount(GPUTextureViewDescriptor* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "arrayLayerCount", value);
}

DEFINE_EMLITE_TYPE(GPUTexture, em_Val);


GPUTextureView GPUTexture_createView(GPUTexture* self ) {
    return em_Val_as(GPUTextureView, em_Val_call(em_Val_as_val(self->inner), "createView"));
}


GPUTextureView GPUTexture_createView(GPUTexture* self , const GPUTextureViewDescriptor* descriptor) {
    return em_Val_as(GPUTextureView, em_Val_call(em_Val_as_val(self->inner), "createView", em_Val_from(descriptor)));
}


jb_Undefined GPUTexture_destroy(GPUTexture* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "destroy"));
}


jb_Any GPUTexture_width(const GPUTexture *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "width"));
}


jb_Any GPUTexture_height(const GPUTexture *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "height"));
}


jb_Any GPUTexture_depthOrArrayLayers(const GPUTexture *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "depthOrArrayLayers"));
}


jb_Any GPUTexture_mipLevelCount(const GPUTexture *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "mipLevelCount"));
}


jb_Any GPUTexture_sampleCount(const GPUTexture *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "sampleCount"));
}


GPUTextureDimension GPUTexture_dimension(const GPUTexture *self) {
    return em_Val_as(GPUTextureDimension, em_Val_get(em_Val_as_val(self->inner), "dimension"));
}


GPUTextureFormat GPUTexture_format(const GPUTexture *self) {
    return em_Val_as(GPUTextureFormat, em_Val_get(em_Val_as_val(self->inner), "format"));
}


jb_Any GPUTexture_usage(const GPUTexture *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "usage"));
}


jb_USVString GPUTexture_label(const GPUTexture *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "label"));
}


void GPUTexture_set_label(GPUTexture* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "label", value);
}

