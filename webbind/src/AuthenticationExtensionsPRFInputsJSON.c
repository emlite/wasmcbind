#include <webbind/AuthenticationExtensionsPRFInputsJSON.h>

DEFINE_EMLITE_TYPE(AuthenticationExtensionsPRFInputsJSON, em_Val);


AuthenticationExtensionsPRFValuesJSON AuthenticationExtensionsPRFInputsJSON_eval(const AuthenticationExtensionsPRFInputsJSON *self) {
    return em_Val_as(AuthenticationExtensionsPRFValuesJSON, em_Val_get(em_Val_as_val(self->inner), em_Val_from("eval")));
}


void AuthenticationExtensionsPRFInputsJSON_set_eval(AuthenticationExtensionsPRFInputsJSON* self, AuthenticationExtensionsPRFValuesJSON * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("eval"), em_Val_from(value));
}


jb_Object AuthenticationExtensionsPRFInputsJSON_evalByCredential(const AuthenticationExtensionsPRFInputsJSON *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("evalByCredential")));
}


void AuthenticationExtensionsPRFInputsJSON_set_evalByCredential(AuthenticationExtensionsPRFInputsJSON* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("evalByCredential"), em_Val_from(value));
}


AuthenticationExtensionsPRFInputsJSON AuthenticationExtensionsPRFInputsJSON_new() {
    em_Val obj = em_Val_object();
    return AuthenticationExtensionsPRFInputsJSON_from_val(&obj);
}

