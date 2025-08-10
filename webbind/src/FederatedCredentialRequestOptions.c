#include <webbind/FederatedCredentialRequestOptions.h>

DEFINE_EMLITE_TYPE(FederatedCredentialRequestOptions, em_Val);


jb_Array FederatedCredentialRequestOptions_providers(const FederatedCredentialRequestOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("providers")));
}


void FederatedCredentialRequestOptions_set_providers(FederatedCredentialRequestOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("providers"), em_Val_from(value));
}


jb_Array FederatedCredentialRequestOptions_protocols(const FederatedCredentialRequestOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("protocols")));
}


void FederatedCredentialRequestOptions_set_protocols(FederatedCredentialRequestOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("protocols"), em_Val_from(value));
}


FederatedCredentialRequestOptions FederatedCredentialRequestOptions_new() {
    em_Val obj = em_Val_object();
    return FederatedCredentialRequestOptions_from_val(&obj);
}

