#include <webbind/AuthenticationExtensionsLargeBlobInputs.h>

DEFINE_EMLITE_TYPE(AuthenticationExtensionsLargeBlobInputs, em_Val);


jb_String AuthenticationExtensionsLargeBlobInputs_support(const AuthenticationExtensionsLargeBlobInputs *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("support")));
}


void AuthenticationExtensionsLargeBlobInputs_set_support(AuthenticationExtensionsLargeBlobInputs* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("support"), em_Val_from(value));
}


bool AuthenticationExtensionsLargeBlobInputs_read(const AuthenticationExtensionsLargeBlobInputs *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("read")));
}


void AuthenticationExtensionsLargeBlobInputs_set_read(AuthenticationExtensionsLargeBlobInputs* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("read"), em_Val_from(value));
}


jb_Any AuthenticationExtensionsLargeBlobInputs_write(const AuthenticationExtensionsLargeBlobInputs *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("write")));
}


void AuthenticationExtensionsLargeBlobInputs_set_write(AuthenticationExtensionsLargeBlobInputs* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("write"), em_Val_from(value));
}


AuthenticationExtensionsLargeBlobInputs AuthenticationExtensionsLargeBlobInputs_new() {
    em_Val obj = em_Val_object();
    return AuthenticationExtensionsLargeBlobInputs_from_val(&obj);
}

