#include <webcbind/AuthenticationExtensionsPRFInputs.h>

DEFINE_EMLITE_TYPE(AuthenticationExtensionsPRFInputs, em_Val);


AuthenticationExtensionsPRFValues AuthenticationExtensionsPRFInputs_eval(const AuthenticationExtensionsPRFInputs *self) {
    return em_Val_as(AuthenticationExtensionsPRFValues, em_Val_get(em_Val_as_val(self->inner), em_Val_from("eval")));
}


void AuthenticationExtensionsPRFInputs_set_eval(AuthenticationExtensionsPRFInputs* self, AuthenticationExtensionsPRFValues * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("eval"), em_Val_from(value));
}


jb_Object AuthenticationExtensionsPRFInputs_evalByCredential(const AuthenticationExtensionsPRFInputs *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("evalByCredential")));
}


void AuthenticationExtensionsPRFInputs_set_evalByCredential(AuthenticationExtensionsPRFInputs* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("evalByCredential"), em_Val_from(value));
}


AuthenticationExtensionsPRFInputs AuthenticationExtensionsPRFInputs_new() {
    em_Val obj = em_Val_object();
    return AuthenticationExtensionsPRFInputs_from_val(&obj);
}

