#include <webbind/PurchaseDetails.h>

DEFINE_EMLITE_TYPE(PurchaseDetails, em_Val);


jb_String PurchaseDetails_itemId(const PurchaseDetails *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("itemId")));
}


void PurchaseDetails_set_itemId(PurchaseDetails* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("itemId"), em_Val_from(value));
}


jb_String PurchaseDetails_purchaseToken(const PurchaseDetails *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("purchaseToken")));
}


void PurchaseDetails_set_purchaseToken(PurchaseDetails* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("purchaseToken"), em_Val_from(value));
}


PurchaseDetails PurchaseDetails_new() {
    em_Val obj = em_Val_object();
    return PurchaseDetails_from_val(&obj);
}

