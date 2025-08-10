#include <webbind/GPUStorageTextureBindingLayout.h>

DEFINE_EMLITE_TYPE(GPUStorageTextureBindingLayout, em_Val);


GPUStorageTextureAccess GPUStorageTextureBindingLayout_access(const GPUStorageTextureBindingLayout *self) {
    return em_Val_as(GPUStorageTextureAccess, em_Val_get(em_Val_as_val(self->inner), em_Val_from("access")));
}


void GPUStorageTextureBindingLayout_set_access(GPUStorageTextureBindingLayout* self, GPUStorageTextureAccess * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("access"), em_Val_from(value));
}


GPUTextureFormat GPUStorageTextureBindingLayout_format(const GPUStorageTextureBindingLayout *self) {
    return em_Val_as(GPUTextureFormat, em_Val_get(em_Val_as_val(self->inner), em_Val_from("format")));
}


void GPUStorageTextureBindingLayout_set_format(GPUStorageTextureBindingLayout* self, GPUTextureFormat * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("format"), em_Val_from(value));
}


GPUTextureViewDimension GPUStorageTextureBindingLayout_viewDimension(const GPUStorageTextureBindingLayout *self) {
    return em_Val_as(GPUTextureViewDimension, em_Val_get(em_Val_as_val(self->inner), em_Val_from("viewDimension")));
}


void GPUStorageTextureBindingLayout_set_viewDimension(GPUStorageTextureBindingLayout* self, GPUTextureViewDimension * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("viewDimension"), em_Val_from(value));
}


GPUStorageTextureBindingLayout GPUStorageTextureBindingLayout_new() {
    em_Val obj = em_Val_object();
    return GPUStorageTextureBindingLayout_from_val(&obj);
}

