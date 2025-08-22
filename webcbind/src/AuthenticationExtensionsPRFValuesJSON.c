#include <webcbind/AuthenticationExtensionsPRFValuesJSON.h>

DEFINE_EMLITE_TYPE(AuthenticationExtensionsPRFValuesJSON, em_Val);


jb_Any AuthenticationExtensionsPRFValuesJSON_first(const AuthenticationExtensionsPRFValuesJSON *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("first")));
}


void AuthenticationExtensionsPRFValuesJSON_set_first(AuthenticationExtensionsPRFValuesJSON* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("first"), em_Val_from(value));
}


jb_Any AuthenticationExtensionsPRFValuesJSON_second(const AuthenticationExtensionsPRFValuesJSON *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("second")));
}


void AuthenticationExtensionsPRFValuesJSON_set_second(AuthenticationExtensionsPRFValuesJSON* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("second"), em_Val_from(value));
}


AuthenticationExtensionsPRFValuesJSON AuthenticationExtensionsPRFValuesJSON_new() {
    em_Val obj = em_Val_object();
    return AuthenticationExtensionsPRFValuesJSON_from_val(&obj);
}

