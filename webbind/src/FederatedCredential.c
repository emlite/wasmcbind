#include <webbind/FederatedCredential.h>


DEFINE_EMLITE_TYPE(FederatedCredential, Credential);


FederatedCredential FederatedCredential_new(jb_Any * data) {
        em_Val vv = em_Val_new(em_Val_global("FederatedCredential") , em_Val_from(data));
        return FederatedCredential_from_val(&vv);
      }


jb_String FederatedCredential_provider(const FederatedCredential *self) {
    return em_Val_as(jb_String, em_Val_get(Credential_as_val(self->inner), em_Val_from("provider")));
}


jb_String FederatedCredential_protocol(const FederatedCredential *self) {
    return em_Val_as(jb_String, em_Val_get(Credential_as_val(self->inner), em_Val_from("protocol")));
}


jb_String FederatedCredential_name(const FederatedCredential *self) {
    return em_Val_as(jb_String, em_Val_get(Credential_as_val(self->inner), em_Val_from("name")));
}


jb_String FederatedCredential_iconURL(const FederatedCredential *self) {
    return em_Val_as(jb_String, em_Val_get(Credential_as_val(self->inner), em_Val_from("iconURL")));
}

