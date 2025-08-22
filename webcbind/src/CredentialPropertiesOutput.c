#include <webcbind/CredentialPropertiesOutput.h>

DEFINE_EMLITE_TYPE(CredentialPropertiesOutput, em_Val);


bool CredentialPropertiesOutput_rk(const CredentialPropertiesOutput *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rk")));
}


void CredentialPropertiesOutput_set_rk(CredentialPropertiesOutput* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rk"), em_Val_from(value));
}


CredentialPropertiesOutput CredentialPropertiesOutput_new() {
    em_Val obj = em_Val_object();
    return CredentialPropertiesOutput_from_val(&obj);
}

