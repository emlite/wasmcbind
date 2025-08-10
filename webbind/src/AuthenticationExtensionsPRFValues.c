#include <webbind/AuthenticationExtensionsPRFValues.h>

DEFINE_EMLITE_TYPE(AuthenticationExtensionsPRFValues, em_Val);


jb_Any AuthenticationExtensionsPRFValues_first(const AuthenticationExtensionsPRFValues *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("first")));
}


void AuthenticationExtensionsPRFValues_set_first(AuthenticationExtensionsPRFValues* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("first"), em_Val_from(value));
}


jb_Any AuthenticationExtensionsPRFValues_second(const AuthenticationExtensionsPRFValues *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("second")));
}


void AuthenticationExtensionsPRFValues_set_second(AuthenticationExtensionsPRFValues* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("second"), em_Val_from(value));
}


AuthenticationExtensionsPRFValues AuthenticationExtensionsPRFValues_new() {
    em_Val obj = em_Val_object();
    return AuthenticationExtensionsPRFValues_from_val(&obj);
}

