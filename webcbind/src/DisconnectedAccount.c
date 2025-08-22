#include <webcbind/DisconnectedAccount.h>

DEFINE_EMLITE_TYPE(DisconnectedAccount, em_Val);


jb_String DisconnectedAccount_account_id(const DisconnectedAccount *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("account_id")));
}


void DisconnectedAccount_set_account_id(DisconnectedAccount* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("account_id"), em_Val_from(value));
}


DisconnectedAccount DisconnectedAccount_new() {
    em_Val obj = em_Val_object();
    return DisconnectedAccount_from_val(&obj);
}

