#include <webcbind/PaymentCompleteDetails.h>

DEFINE_EMLITE_TYPE(PaymentCompleteDetails, em_Val);


jb_Object PaymentCompleteDetails_data(const PaymentCompleteDetails *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("data")));
}


void PaymentCompleteDetails_set_data(PaymentCompleteDetails* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("data"), em_Val_from(value));
}


PaymentCompleteDetails PaymentCompleteDetails_new() {
    em_Val obj = em_Val_object();
    return PaymentCompleteDetails_from_val(&obj);
}

