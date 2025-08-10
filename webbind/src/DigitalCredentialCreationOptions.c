#include <webbind/DigitalCredentialCreationOptions.h>

DEFINE_EMLITE_TYPE(DigitalCredentialCreationOptions, em_Val);


jb_Array DigitalCredentialCreationOptions_requests(const DigitalCredentialCreationOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("requests")));
}


void DigitalCredentialCreationOptions_set_requests(DigitalCredentialCreationOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("requests"), em_Val_from(value));
}


DigitalCredentialCreationOptions DigitalCredentialCreationOptions_new() {
    em_Val obj = em_Val_object();
    return DigitalCredentialCreationOptions_from_val(&obj);
}

