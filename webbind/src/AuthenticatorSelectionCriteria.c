#include <webbind/AuthenticatorSelectionCriteria.h>

DEFINE_EMLITE_TYPE(AuthenticatorSelectionCriteria, em_Val);


jb_String AuthenticatorSelectionCriteria_authenticatorAttachment(const AuthenticatorSelectionCriteria *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("authenticatorAttachment")));
}


void AuthenticatorSelectionCriteria_set_authenticatorAttachment(AuthenticatorSelectionCriteria* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("authenticatorAttachment"), em_Val_from(value));
}


jb_String AuthenticatorSelectionCriteria_residentKey(const AuthenticatorSelectionCriteria *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("residentKey")));
}


void AuthenticatorSelectionCriteria_set_residentKey(AuthenticatorSelectionCriteria* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("residentKey"), em_Val_from(value));
}


bool AuthenticatorSelectionCriteria_requireResidentKey(const AuthenticatorSelectionCriteria *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("requireResidentKey")));
}


void AuthenticatorSelectionCriteria_set_requireResidentKey(AuthenticatorSelectionCriteria* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("requireResidentKey"), em_Val_from(value));
}


jb_String AuthenticatorSelectionCriteria_userVerification(const AuthenticatorSelectionCriteria *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("userVerification")));
}


void AuthenticatorSelectionCriteria_set_userVerification(AuthenticatorSelectionCriteria* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("userVerification"), em_Val_from(value));
}


AuthenticatorSelectionCriteria AuthenticatorSelectionCriteria_new() {
    em_Val obj = em_Val_object();
    return AuthenticatorSelectionCriteria_from_val(&obj);
}

