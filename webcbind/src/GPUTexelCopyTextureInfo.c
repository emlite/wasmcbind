#include <webcbind/GPUTexelCopyTextureInfo.h>

#include <webcbind/GPUTexture.h>

DEFINE_EMLITE_TYPE(GPUTexelCopyTextureInfo, em_Val);


GPUTexture GPUTexelCopyTextureInfo_texture(const GPUTexelCopyTextureInfo *self) {
    return em_Val_as(GPUTexture, em_Val_get(em_Val_as_val(self->inner), em_Val_from("texture")));
}


void GPUTexelCopyTextureInfo_set_texture(GPUTexelCopyTextureInfo* self, GPUTexture * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("texture"), em_Val_from(value));
}


jb_Any GPUTexelCopyTextureInfo_mipLevel(const GPUTexelCopyTextureInfo *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mipLevel")));
}


void GPUTexelCopyTextureInfo_set_mipLevel(GPUTexelCopyTextureInfo* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mipLevel"), em_Val_from(value));
}


jb_Any GPUTexelCopyTextureInfo_origin(const GPUTexelCopyTextureInfo *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("origin")));
}


void GPUTexelCopyTextureInfo_set_origin(GPUTexelCopyTextureInfo* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("origin"), em_Val_from(value));
}


GPUTextureAspect GPUTexelCopyTextureInfo_aspect(const GPUTexelCopyTextureInfo *self) {
    return em_Val_as(GPUTextureAspect, em_Val_get(em_Val_as_val(self->inner), em_Val_from("aspect")));
}


void GPUTexelCopyTextureInfo_set_aspect(GPUTexelCopyTextureInfo* self, GPUTextureAspect * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("aspect"), em_Val_from(value));
}


GPUTexelCopyTextureInfo GPUTexelCopyTextureInfo_new() {
    em_Val obj = em_Val_object();
    return GPUTexelCopyTextureInfo_from_val(&obj);
}

