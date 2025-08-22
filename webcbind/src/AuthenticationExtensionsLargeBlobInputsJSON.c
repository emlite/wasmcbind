#include <webcbind/AuthenticationExtensionsLargeBlobInputsJSON.h>

DEFINE_EMLITE_TYPE(AuthenticationExtensionsLargeBlobInputsJSON, em_Val);


jb_String AuthenticationExtensionsLargeBlobInputsJSON_support(const AuthenticationExtensionsLargeBlobInputsJSON *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("support")));
}


void AuthenticationExtensionsLargeBlobInputsJSON_set_support(AuthenticationExtensionsLargeBlobInputsJSON* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("support"), em_Val_from(value));
}


bool AuthenticationExtensionsLargeBlobInputsJSON_read(const AuthenticationExtensionsLargeBlobInputsJSON *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("read")));
}


void AuthenticationExtensionsLargeBlobInputsJSON_set_read(AuthenticationExtensionsLargeBlobInputsJSON* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("read"), em_Val_from(value));
}


jb_Any AuthenticationExtensionsLargeBlobInputsJSON_write(const AuthenticationExtensionsLargeBlobInputsJSON *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("write")));
}


void AuthenticationExtensionsLargeBlobInputsJSON_set_write(AuthenticationExtensionsLargeBlobInputsJSON* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("write"), em_Val_from(value));
}


AuthenticationExtensionsLargeBlobInputsJSON AuthenticationExtensionsLargeBlobInputsJSON_new() {
    em_Val obj = em_Val_object();
    return AuthenticationExtensionsLargeBlobInputsJSON_from_val(&obj);
}

