#include <webcbind/IdentityCredentialErrorInit.h>

DEFINE_EMLITE_TYPE(IdentityCredentialErrorInit, em_Val);


jb_String IdentityCredentialErrorInit_error(const IdentityCredentialErrorInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("error")));
}


void IdentityCredentialErrorInit_set_error(IdentityCredentialErrorInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("error"), em_Val_from(value));
}


jb_String IdentityCredentialErrorInit_url(const IdentityCredentialErrorInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("url")));
}


void IdentityCredentialErrorInit_set_url(IdentityCredentialErrorInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("url"), em_Val_from(value));
}


IdentityCredentialErrorInit IdentityCredentialErrorInit_new() {
    em_Val obj = em_Val_object();
    return IdentityCredentialErrorInit_from_val(&obj);
}

