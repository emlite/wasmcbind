#include <webbind/GPUBindGroupEntry.h>

DEFINE_EMLITE_TYPE(GPUBindGroupEntry, em_Val);


jb_Any GPUBindGroupEntry_binding(const GPUBindGroupEntry *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("binding")));
}


void GPUBindGroupEntry_set_binding(GPUBindGroupEntry* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("binding"), em_Val_from(value));
}


jb_Any GPUBindGroupEntry_resource(const GPUBindGroupEntry *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("resource")));
}


void GPUBindGroupEntry_set_resource(GPUBindGroupEntry* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("resource"), em_Val_from(value));
}


GPUBindGroupEntry GPUBindGroupEntry_new() {
    em_Val obj = em_Val_object();
    return GPUBindGroupEntry_from_val(&obj);
}

