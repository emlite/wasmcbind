#include <webcbind/DigitalCredentialRequestOptions.h>

DEFINE_EMLITE_TYPE(DigitalCredentialRequestOptions, em_Val);


jb_Array DigitalCredentialRequestOptions_requests(const DigitalCredentialRequestOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("requests")));
}


void DigitalCredentialRequestOptions_set_requests(DigitalCredentialRequestOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("requests"), em_Val_from(value));
}


DigitalCredentialRequestOptions DigitalCredentialRequestOptions_new() {
    em_Val obj = em_Val_object();
    return DigitalCredentialRequestOptions_from_val(&obj);
}

