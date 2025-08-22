#include <webcbind/FederatedCredentialInit.h>

DEFINE_EMLITE_TYPE(FederatedCredentialInit, CredentialData);


jb_String FederatedCredentialInit_name(const FederatedCredentialInit *self) {
    return em_Val_as(jb_String, em_Val_get(CredentialData_as_val(self->inner), em_Val_from("name")));
}


void FederatedCredentialInit_set_name(FederatedCredentialInit* self, jb_String * value) {
    em_Val_set(CredentialData_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


jb_String FederatedCredentialInit_iconURL(const FederatedCredentialInit *self) {
    return em_Val_as(jb_String, em_Val_get(CredentialData_as_val(self->inner), em_Val_from("iconURL")));
}


void FederatedCredentialInit_set_iconURL(FederatedCredentialInit* self, jb_String * value) {
    em_Val_set(CredentialData_as_val(self->inner), em_Val_from("iconURL"), em_Val_from(value));
}


jb_String FederatedCredentialInit_origin(const FederatedCredentialInit *self) {
    return em_Val_as(jb_String, em_Val_get(CredentialData_as_val(self->inner), em_Val_from("origin")));
}


void FederatedCredentialInit_set_origin(FederatedCredentialInit* self, jb_String * value) {
    em_Val_set(CredentialData_as_val(self->inner), em_Val_from("origin"), em_Val_from(value));
}


jb_String FederatedCredentialInit_provider(const FederatedCredentialInit *self) {
    return em_Val_as(jb_String, em_Val_get(CredentialData_as_val(self->inner), em_Val_from("provider")));
}


void FederatedCredentialInit_set_provider(FederatedCredentialInit* self, jb_String * value) {
    em_Val_set(CredentialData_as_val(self->inner), em_Val_from("provider"), em_Val_from(value));
}


jb_String FederatedCredentialInit_protocol(const FederatedCredentialInit *self) {
    return em_Val_as(jb_String, em_Val_get(CredentialData_as_val(self->inner), em_Val_from("protocol")));
}


void FederatedCredentialInit_set_protocol(FederatedCredentialInit* self, jb_String * value) {
    em_Val_set(CredentialData_as_val(self->inner), em_Val_from("protocol"), em_Val_from(value));
}


FederatedCredentialInit FederatedCredentialInit_new() {
    em_Val obj = em_Val_object();
    return FederatedCredentialInit_from_val(&obj);
}

