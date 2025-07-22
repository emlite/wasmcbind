#include <webbind/GPUSampler.h>


DEFINE_EMLITE_TYPE(GPUSampler, em_Val);


jb_USVString GPUSampler_label(const GPUSampler *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("label")));
}


void GPUSampler_set_label(GPUSampler* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}

