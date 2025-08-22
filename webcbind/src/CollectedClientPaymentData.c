#include <webcbind/CollectedClientPaymentData.h>

DEFINE_EMLITE_TYPE(CollectedClientPaymentData, CollectedClientData);


jb_Any CollectedClientPaymentData_payment(const CollectedClientPaymentData *self) {
    return em_Val_as(jb_Any, em_Val_get(CollectedClientData_as_val(self->inner), em_Val_from("payment")));
}


void CollectedClientPaymentData_set_payment(CollectedClientPaymentData* self, jb_Any * value) {
    em_Val_set(CollectedClientData_as_val(self->inner), em_Val_from("payment"), em_Val_from(value));
}


CollectedClientPaymentData CollectedClientPaymentData_new() {
    em_Val obj = em_Val_object();
    return CollectedClientPaymentData_from_val(&obj);
}

