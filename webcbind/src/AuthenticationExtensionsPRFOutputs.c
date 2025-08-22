#include <webcbind/AuthenticationExtensionsPRFOutputs.h>

DEFINE_EMLITE_TYPE(AuthenticationExtensionsPRFOutputs, em_Val);


bool AuthenticationExtensionsPRFOutputs_enabled(const AuthenticationExtensionsPRFOutputs *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("enabled")));
}


void AuthenticationExtensionsPRFOutputs_set_enabled(AuthenticationExtensionsPRFOutputs* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("enabled"), em_Val_from(value));
}


AuthenticationExtensionsPRFValues AuthenticationExtensionsPRFOutputs_results(const AuthenticationExtensionsPRFOutputs *self) {
    return em_Val_as(AuthenticationExtensionsPRFValues, em_Val_get(em_Val_as_val(self->inner), em_Val_from("results")));
}


void AuthenticationExtensionsPRFOutputs_set_results(AuthenticationExtensionsPRFOutputs* self, AuthenticationExtensionsPRFValues * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("results"), em_Val_from(value));
}


AuthenticationExtensionsPRFOutputs AuthenticationExtensionsPRFOutputs_new() {
    em_Val obj = em_Val_object();
    return AuthenticationExtensionsPRFOutputs_from_val(&obj);
}

