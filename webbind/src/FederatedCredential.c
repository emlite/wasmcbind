#include <webbind/FederatedCredential.h>


DEFINE_EMLITE_TYPE(FederatedCredential, Credential);


FederatedCredential FederatedCredential_new(jb_Any * data) {
        em_Val vv = em_Val_new(em_Val_global("FederatedCredential") , em_Val_from(data));
        return FederatedCredential_from_val(&vv);
      }


jb_USVString FederatedCredential_provider(const FederatedCredential *self) {
    return em_Val_as(jb_USVString, em_Val_get(Credential_as_val(self->inner), em_Val_from("provider")));
}


jb_DOMString FederatedCredential_protocol(const FederatedCredential *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Credential_as_val(self->inner), em_Val_from("protocol")));
}


jb_USVString FederatedCredential_name(const FederatedCredential *self) {
    return em_Val_as(jb_USVString, em_Val_get(Credential_as_val(self->inner), em_Val_from("name")));
}


jb_USVString FederatedCredential_iconURL(const FederatedCredential *self) {
    return em_Val_as(jb_USVString, em_Val_get(Credential_as_val(self->inner), em_Val_from("iconURL")));
}

