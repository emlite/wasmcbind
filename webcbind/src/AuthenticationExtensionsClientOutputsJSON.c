#include <webcbind/AuthenticationExtensionsClientOutputsJSON.h>

DEFINE_EMLITE_TYPE(AuthenticationExtensionsClientOutputsJSON, em_Val);


AuthenticationExtensionsLargeBlobOutputsJSON AuthenticationExtensionsClientOutputsJSON_largeBlob(const AuthenticationExtensionsClientOutputsJSON *self) {
    return em_Val_as(AuthenticationExtensionsLargeBlobOutputsJSON, em_Val_get(em_Val_as_val(self->inner), em_Val_from("largeBlob")));
}


void AuthenticationExtensionsClientOutputsJSON_set_largeBlob(AuthenticationExtensionsClientOutputsJSON* self, AuthenticationExtensionsLargeBlobOutputsJSON * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("largeBlob"), em_Val_from(value));
}


AuthenticationExtensionsClientOutputsJSON AuthenticationExtensionsClientOutputsJSON_new() {
    em_Val obj = em_Val_object();
    return AuthenticationExtensionsClientOutputsJSON_from_val(&obj);
}

