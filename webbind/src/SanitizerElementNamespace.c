#include <webbind/SanitizerElementNamespace.h>

DEFINE_EMLITE_TYPE(SanitizerElementNamespace, em_Val);


jb_String SanitizerElementNamespace_name(const SanitizerElementNamespace *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


void SanitizerElementNamespace_set_name(SanitizerElementNamespace* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


jb_String SanitizerElementNamespace_namespace_(const SanitizerElementNamespace *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("namespace")));
}


void SanitizerElementNamespace_set_namespace_(SanitizerElementNamespace* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("namespace"), em_Val_from(value));
}


SanitizerElementNamespace SanitizerElementNamespace_new() {
    em_Val obj = em_Val_object();
    return SanitizerElementNamespace_from_val(&obj);
}

