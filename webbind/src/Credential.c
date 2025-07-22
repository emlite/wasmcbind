#include <webbind/Credential.h>


DEFINE_EMLITE_TYPE(Credential, em_Val);


jb_USVString Credential_id(const Credential *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "id"));
}


jb_DOMString Credential_type(const Credential *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "type"));
}


jb_Promise Credential_isConditionalMediationAvailable(Credential* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("credential"), "isConditionalMediationAvailable"));
}


jb_Promise Credential_willRequestConditionalCreation(Credential* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("credential"), "willRequestConditionalCreation"));
}

