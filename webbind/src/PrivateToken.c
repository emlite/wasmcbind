#include <webbind/PrivateToken.h>

DEFINE_EMLITE_TYPE(PrivateToken, em_Val);


TokenVersion PrivateToken_version(const PrivateToken *self) {
    return em_Val_as(TokenVersion, em_Val_get(em_Val_as_val(self->inner), em_Val_from("version")));
}


void PrivateToken_set_version(PrivateToken* self, TokenVersion * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("version"), em_Val_from(value));
}


OperationType PrivateToken_operation(const PrivateToken *self) {
    return em_Val_as(OperationType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("operation")));
}


void PrivateToken_set_operation(PrivateToken* self, OperationType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("operation"), em_Val_from(value));
}


RefreshPolicy PrivateToken_refreshPolicy(const PrivateToken *self) {
    return em_Val_as(RefreshPolicy, em_Val_get(em_Val_as_val(self->inner), em_Val_from("refreshPolicy")));
}


void PrivateToken_set_refreshPolicy(PrivateToken* self, RefreshPolicy * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("refreshPolicy"), em_Val_from(value));
}


jb_Array PrivateToken_issuers(const PrivateToken *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("issuers")));
}


void PrivateToken_set_issuers(PrivateToken* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("issuers"), em_Val_from(value));
}


PrivateToken PrivateToken_new() {
    em_Val obj = em_Val_object();
    return PrivateToken_from_val(&obj);
}

