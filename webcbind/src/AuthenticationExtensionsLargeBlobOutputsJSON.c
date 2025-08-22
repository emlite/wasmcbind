#include <webcbind/AuthenticationExtensionsLargeBlobOutputsJSON.h>

DEFINE_EMLITE_TYPE(AuthenticationExtensionsLargeBlobOutputsJSON, em_Val);


bool AuthenticationExtensionsLargeBlobOutputsJSON_supported(const AuthenticationExtensionsLargeBlobOutputsJSON *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("supported")));
}


void AuthenticationExtensionsLargeBlobOutputsJSON_set_supported(AuthenticationExtensionsLargeBlobOutputsJSON* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("supported"), em_Val_from(value));
}


jb_Any AuthenticationExtensionsLargeBlobOutputsJSON_blob(const AuthenticationExtensionsLargeBlobOutputsJSON *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("blob")));
}


void AuthenticationExtensionsLargeBlobOutputsJSON_set_blob(AuthenticationExtensionsLargeBlobOutputsJSON* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("blob"), em_Val_from(value));
}


bool AuthenticationExtensionsLargeBlobOutputsJSON_written(const AuthenticationExtensionsLargeBlobOutputsJSON *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("written")));
}


void AuthenticationExtensionsLargeBlobOutputsJSON_set_written(AuthenticationExtensionsLargeBlobOutputsJSON* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("written"), em_Val_from(value));
}


AuthenticationExtensionsLargeBlobOutputsJSON AuthenticationExtensionsLargeBlobOutputsJSON_new() {
    em_Val obj = em_Val_object();
    return AuthenticationExtensionsLargeBlobOutputsJSON_from_val(&obj);
}

