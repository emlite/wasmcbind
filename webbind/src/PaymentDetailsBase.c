#include <webbind/PaymentDetailsBase.h>

DEFINE_EMLITE_TYPE(PaymentDetailsBase, em_Val);


jb_Array PaymentDetailsBase_displayItems(const PaymentDetailsBase *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("displayItems")));
}


void PaymentDetailsBase_set_displayItems(PaymentDetailsBase* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("displayItems"), em_Val_from(value));
}


jb_Array PaymentDetailsBase_shippingOptions(const PaymentDetailsBase *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("shippingOptions")));
}


void PaymentDetailsBase_set_shippingOptions(PaymentDetailsBase* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("shippingOptions"), em_Val_from(value));
}


jb_Array PaymentDetailsBase_modifiers(const PaymentDetailsBase *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("modifiers")));
}


void PaymentDetailsBase_set_modifiers(PaymentDetailsBase* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("modifiers"), em_Val_from(value));
}


PaymentDetailsBase PaymentDetailsBase_new() {
    em_Val obj = em_Val_object();
    return PaymentDetailsBase_from_val(&obj);
}

