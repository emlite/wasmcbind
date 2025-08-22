#include <webcbind/GPUBindGroupLayoutEntry.h>

DEFINE_EMLITE_TYPE(GPUBindGroupLayoutEntry, em_Val);


jb_Any GPUBindGroupLayoutEntry_binding(const GPUBindGroupLayoutEntry *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("binding")));
}


void GPUBindGroupLayoutEntry_set_binding(GPUBindGroupLayoutEntry* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("binding"), em_Val_from(value));
}


jb_Any GPUBindGroupLayoutEntry_visibility(const GPUBindGroupLayoutEntry *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("visibility")));
}


void GPUBindGroupLayoutEntry_set_visibility(GPUBindGroupLayoutEntry* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("visibility"), em_Val_from(value));
}


GPUBufferBindingLayout GPUBindGroupLayoutEntry_buffer(const GPUBindGroupLayoutEntry *self) {
    return em_Val_as(GPUBufferBindingLayout, em_Val_get(em_Val_as_val(self->inner), em_Val_from("buffer")));
}


void GPUBindGroupLayoutEntry_set_buffer(GPUBindGroupLayoutEntry* self, GPUBufferBindingLayout * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("buffer"), em_Val_from(value));
}


GPUSamplerBindingLayout GPUBindGroupLayoutEntry_sampler(const GPUBindGroupLayoutEntry *self) {
    return em_Val_as(GPUSamplerBindingLayout, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sampler")));
}


void GPUBindGroupLayoutEntry_set_sampler(GPUBindGroupLayoutEntry* self, GPUSamplerBindingLayout * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sampler"), em_Val_from(value));
}


GPUTextureBindingLayout GPUBindGroupLayoutEntry_texture(const GPUBindGroupLayoutEntry *self) {
    return em_Val_as(GPUTextureBindingLayout, em_Val_get(em_Val_as_val(self->inner), em_Val_from("texture")));
}


void GPUBindGroupLayoutEntry_set_texture(GPUBindGroupLayoutEntry* self, GPUTextureBindingLayout * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("texture"), em_Val_from(value));
}


GPUStorageTextureBindingLayout GPUBindGroupLayoutEntry_storageTexture(const GPUBindGroupLayoutEntry *self) {
    return em_Val_as(GPUStorageTextureBindingLayout, em_Val_get(em_Val_as_val(self->inner), em_Val_from("storageTexture")));
}


void GPUBindGroupLayoutEntry_set_storageTexture(GPUBindGroupLayoutEntry* self, GPUStorageTextureBindingLayout * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("storageTexture"), em_Val_from(value));
}


GPUExternalTextureBindingLayout GPUBindGroupLayoutEntry_externalTexture(const GPUBindGroupLayoutEntry *self) {
    return em_Val_as(GPUExternalTextureBindingLayout, em_Val_get(em_Val_as_val(self->inner), em_Val_from("externalTexture")));
}


void GPUBindGroupLayoutEntry_set_externalTexture(GPUBindGroupLayoutEntry* self, GPUExternalTextureBindingLayout * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("externalTexture"), em_Val_from(value));
}


GPUBindGroupLayoutEntry GPUBindGroupLayoutEntry_new() {
    em_Val obj = em_Val_object();
    return GPUBindGroupLayoutEntry_from_val(&obj);
}

