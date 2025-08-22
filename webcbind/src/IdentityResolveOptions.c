#include <webcbind/IdentityResolveOptions.h>

DEFINE_EMLITE_TYPE(IdentityResolveOptions, em_Val);


jb_String IdentityResolveOptions_accountId(const IdentityResolveOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("accountId")));
}


void IdentityResolveOptions_set_accountId(IdentityResolveOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("accountId"), em_Val_from(value));
}


IdentityResolveOptions IdentityResolveOptions_new() {
    em_Val obj = em_Val_object();
    return IdentityResolveOptions_from_val(&obj);
}

