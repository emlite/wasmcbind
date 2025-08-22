#include <webcbind/AuthenticationExtensionsPRFOutputsJSON.h>

DEFINE_EMLITE_TYPE(AuthenticationExtensionsPRFOutputsJSON, em_Val);


bool AuthenticationExtensionsPRFOutputsJSON_enabled(const AuthenticationExtensionsPRFOutputsJSON *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("enabled")));
}


void AuthenticationExtensionsPRFOutputsJSON_set_enabled(AuthenticationExtensionsPRFOutputsJSON* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("enabled"), em_Val_from(value));
}


AuthenticationExtensionsPRFValuesJSON AuthenticationExtensionsPRFOutputsJSON_results(const AuthenticationExtensionsPRFOutputsJSON *self) {
    return em_Val_as(AuthenticationExtensionsPRFValuesJSON, em_Val_get(em_Val_as_val(self->inner), em_Val_from("results")));
}


void AuthenticationExtensionsPRFOutputsJSON_set_results(AuthenticationExtensionsPRFOutputsJSON* self, AuthenticationExtensionsPRFValuesJSON * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("results"), em_Val_from(value));
}


AuthenticationExtensionsPRFOutputsJSON AuthenticationExtensionsPRFOutputsJSON_new() {
    em_Val obj = em_Val_object();
    return AuthenticationExtensionsPRFOutputsJSON_from_val(&obj);
}

