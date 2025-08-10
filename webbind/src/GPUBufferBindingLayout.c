#include <webbind/GPUBufferBindingLayout.h>

DEFINE_EMLITE_TYPE(GPUBufferBindingLayout, em_Val);


GPUBufferBindingType GPUBufferBindingLayout_type(const GPUBufferBindingLayout *self) {
    return em_Val_as(GPUBufferBindingType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void GPUBufferBindingLayout_set_type(GPUBufferBindingLayout* self, GPUBufferBindingType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


bool GPUBufferBindingLayout_hasDynamicOffset(const GPUBufferBindingLayout *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hasDynamicOffset")));
}


void GPUBufferBindingLayout_set_hasDynamicOffset(GPUBufferBindingLayout* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("hasDynamicOffset"), em_Val_from(value));
}


jb_Any GPUBufferBindingLayout_minBindingSize(const GPUBufferBindingLayout *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("minBindingSize")));
}


void GPUBufferBindingLayout_set_minBindingSize(GPUBufferBindingLayout* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("minBindingSize"), em_Val_from(value));
}


GPUBufferBindingLayout GPUBufferBindingLayout_new() {
    em_Val obj = em_Val_object();
    return GPUBufferBindingLayout_from_val(&obj);
}

