#include <webbind/IdentityProviderAccountList.h>

DEFINE_EMLITE_TYPE(IdentityProviderAccountList, em_Val);


jb_Array IdentityProviderAccountList_accounts(const IdentityProviderAccountList *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("accounts")));
}


void IdentityProviderAccountList_set_accounts(IdentityProviderAccountList* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("accounts"), em_Val_from(value));
}


IdentityProviderAccountList IdentityProviderAccountList_new() {
    em_Val obj = em_Val_object();
    return IdentityProviderAccountList_from_val(&obj);
}

