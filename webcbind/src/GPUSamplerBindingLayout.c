#include <webcbind/GPUSamplerBindingLayout.h>

DEFINE_EMLITE_TYPE(GPUSamplerBindingLayout, em_Val);


GPUSamplerBindingType GPUSamplerBindingLayout_type(const GPUSamplerBindingLayout *self) {
    return em_Val_as(GPUSamplerBindingType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void GPUSamplerBindingLayout_set_type(GPUSamplerBindingLayout* self, GPUSamplerBindingType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


GPUSamplerBindingLayout GPUSamplerBindingLayout_new() {
    em_Val obj = em_Val_object();
    return GPUSamplerBindingLayout_from_val(&obj);
}

