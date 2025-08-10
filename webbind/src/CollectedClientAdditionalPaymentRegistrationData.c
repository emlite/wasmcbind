#include <webbind/CollectedClientAdditionalPaymentRegistrationData.h>

DEFINE_EMLITE_TYPE(CollectedClientAdditionalPaymentRegistrationData, em_Val);


jb_String CollectedClientAdditionalPaymentRegistrationData_browserBoundPublicKey(const CollectedClientAdditionalPaymentRegistrationData *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("browserBoundPublicKey")));
}


void CollectedClientAdditionalPaymentRegistrationData_set_browserBoundPublicKey(CollectedClientAdditionalPaymentRegistrationData* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("browserBoundPublicKey"), em_Val_from(value));
}


CollectedClientAdditionalPaymentRegistrationData CollectedClientAdditionalPaymentRegistrationData_new() {
    em_Val obj = em_Val_object();
    return CollectedClientAdditionalPaymentRegistrationData_from_val(&obj);
}

