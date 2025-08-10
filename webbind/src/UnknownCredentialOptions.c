#include <webbind/UnknownCredentialOptions.h>

DEFINE_EMLITE_TYPE(UnknownCredentialOptions, em_Val);


jb_String UnknownCredentialOptions_rpId(const UnknownCredentialOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rpId")));
}


void UnknownCredentialOptions_set_rpId(UnknownCredentialOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rpId"), em_Val_from(value));
}


jb_Any UnknownCredentialOptions_credentialId(const UnknownCredentialOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("credentialId")));
}


void UnknownCredentialOptions_set_credentialId(UnknownCredentialOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("credentialId"), em_Val_from(value));
}


UnknownCredentialOptions UnknownCredentialOptions_new() {
    em_Val obj = em_Val_object();
    return UnknownCredentialOptions_from_val(&obj);
}

