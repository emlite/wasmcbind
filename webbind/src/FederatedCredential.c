#include <webbind/FederatedCredential.h>


DEFINE_EMLITE_TYPE(FederatedCredential, Credential);


FederatedCredential FederatedCredential_new(const jb_Any* data) : Credential(em_Val_global("FederatedCredential").new_(em_Val_from(data))) {
        return FederatedCredential(em_Val_new(em_Val_global("FederatedCredential", em_Val_from(data)));
      }


jb_USVString FederatedCredential_provider(const FederatedCredential *self) {
    return em_Val_as(jb_USVString, em_Val_get(Credential_as_val(self->inner), "provider"));
}


jb_DOMString FederatedCredential_protocol(const FederatedCredential *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Credential_as_val(self->inner), "protocol"));
}


jb_USVString FederatedCredential_name(const FederatedCredential *self) {
    return em_Val_as(jb_USVString, em_Val_get(Credential_as_val(self->inner), "name"));
}


jb_USVString FederatedCredential_iconURL(const FederatedCredential *self) {
    return em_Val_as(jb_USVString, em_Val_get(Credential_as_val(self->inner), "iconURL"));
}

