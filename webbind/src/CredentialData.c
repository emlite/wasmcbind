#include <webbind/CredentialData.h>

DEFINE_EMLITE_TYPE(CredentialData, em_Val);


jb_String CredentialData_id(const CredentialData *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("id")));
}


void CredentialData_set_id(CredentialData* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("id"), em_Val_from(value));
}


CredentialData CredentialData_new() {
    em_Val obj = em_Val_object();
    return CredentialData_from_val(&obj);
}

