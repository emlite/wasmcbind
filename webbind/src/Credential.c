#include <webbind/Credential.h>


DEFINE_EMLITE_TYPE(Credential, em_Val);


jb_String Credential_id(const Credential *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("id")));
}


jb_String Credential_type(const Credential *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


jb_Promise Credential_isConditionalMediationAvailable(Credential* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("credential"), "isConditionalMediationAvailable"));
}


jb_Promise Credential_willRequestConditionalCreation(Credential* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("credential"), "willRequestConditionalCreation"));
}

