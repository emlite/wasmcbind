#include <webbind/PaymentManager.h>

DEFINE_EMLITE_TYPE(PaymentManager, em_Val);


jb_String PaymentManager_userHint(const PaymentManager *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("userHint")));
}


void PaymentManager_set_userHint(PaymentManager* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("userHint"), em_Val_from(value));
}


jb_Promise PaymentManager_enableDelegations(PaymentManager* self , jb_Array * delegations) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "enableDelegations", em_Val_from(delegations)));
}

