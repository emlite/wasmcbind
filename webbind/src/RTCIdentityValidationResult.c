#include <webbind/RTCIdentityValidationResult.h>

DEFINE_EMLITE_TYPE(RTCIdentityValidationResult, em_Val);


jb_String RTCIdentityValidationResult_identity(const RTCIdentityValidationResult *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("identity")));
}


void RTCIdentityValidationResult_set_identity(RTCIdentityValidationResult* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("identity"), em_Val_from(value));
}


jb_String RTCIdentityValidationResult_contents(const RTCIdentityValidationResult *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("contents")));
}


void RTCIdentityValidationResult_set_contents(RTCIdentityValidationResult* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("contents"), em_Val_from(value));
}


RTCIdentityValidationResult RTCIdentityValidationResult_new() {
    em_Val obj = em_Val_object();
    return RTCIdentityValidationResult_from_val(&obj);
}

