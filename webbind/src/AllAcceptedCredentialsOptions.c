#include <webbind/AllAcceptedCredentialsOptions.h>

DEFINE_EMLITE_TYPE(AllAcceptedCredentialsOptions, em_Val);


jb_String AllAcceptedCredentialsOptions_rpId(const AllAcceptedCredentialsOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rpId")));
}


void AllAcceptedCredentialsOptions_set_rpId(AllAcceptedCredentialsOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rpId"), em_Val_from(value));
}


jb_Any AllAcceptedCredentialsOptions_userId(const AllAcceptedCredentialsOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("userId")));
}


void AllAcceptedCredentialsOptions_set_userId(AllAcceptedCredentialsOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("userId"), em_Val_from(value));
}


jb_Array AllAcceptedCredentialsOptions_allAcceptedCredentialIds(const AllAcceptedCredentialsOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("allAcceptedCredentialIds")));
}


void AllAcceptedCredentialsOptions_set_allAcceptedCredentialIds(AllAcceptedCredentialsOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("allAcceptedCredentialIds"), em_Val_from(value));
}


AllAcceptedCredentialsOptions AllAcceptedCredentialsOptions_new() {
    em_Val obj = em_Val_object();
    return AllAcceptedCredentialsOptions_from_val(&obj);
}

