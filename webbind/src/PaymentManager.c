#include <webbind/PaymentManager.h>


DEFINE_EMLITE_TYPE(PaymentManager, em_Val);


jb_DOMString PaymentManager_userHint(const PaymentManager *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "userHint"));
}


void PaymentManager_set_userHint(PaymentManager* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "userHint", value);
}


jb_Promise PaymentManager_enableDelegations(PaymentManager* self , const jb_Sequence* delegations) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "enableDelegations", em_Val_from(delegations)));
}

