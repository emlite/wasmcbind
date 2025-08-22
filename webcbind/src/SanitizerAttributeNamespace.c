#include <webcbind/SanitizerAttributeNamespace.h>

DEFINE_EMLITE_TYPE(SanitizerAttributeNamespace, em_Val);


jb_String SanitizerAttributeNamespace_name(const SanitizerAttributeNamespace *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


void SanitizerAttributeNamespace_set_name(SanitizerAttributeNamespace* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


jb_String SanitizerAttributeNamespace_namespace_(const SanitizerAttributeNamespace *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("namespace")));
}


void SanitizerAttributeNamespace_set_namespace_(SanitizerAttributeNamespace* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("namespace"), em_Val_from(value));
}


SanitizerAttributeNamespace SanitizerAttributeNamespace_new() {
    em_Val obj = em_Val_object();
    return SanitizerAttributeNamespace_from_val(&obj);
}

