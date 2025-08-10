#include <webbind/AuthenticationExtensionsClientInputsJSON.h>

DEFINE_EMLITE_TYPE(AuthenticationExtensionsClientInputsJSON, em_Val);


AuthenticationExtensionsLargeBlobInputsJSON AuthenticationExtensionsClientInputsJSON_largeBlob(const AuthenticationExtensionsClientInputsJSON *self) {
    return em_Val_as(AuthenticationExtensionsLargeBlobInputsJSON, em_Val_get(em_Val_as_val(self->inner), em_Val_from("largeBlob")));
}


void AuthenticationExtensionsClientInputsJSON_set_largeBlob(AuthenticationExtensionsClientInputsJSON* self, AuthenticationExtensionsLargeBlobInputsJSON * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("largeBlob"), em_Val_from(value));
}


AuthenticationExtensionsClientInputsJSON AuthenticationExtensionsClientInputsJSON_new() {
    em_Val obj = em_Val_object();
    return AuthenticationExtensionsClientInputsJSON_from_val(&obj);
}

