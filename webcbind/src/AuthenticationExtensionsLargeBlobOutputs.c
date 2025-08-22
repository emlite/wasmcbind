#include <webcbind/AuthenticationExtensionsLargeBlobOutputs.h>

DEFINE_EMLITE_TYPE(AuthenticationExtensionsLargeBlobOutputs, em_Val);


bool AuthenticationExtensionsLargeBlobOutputs_supported(const AuthenticationExtensionsLargeBlobOutputs *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("supported")));
}


void AuthenticationExtensionsLargeBlobOutputs_set_supported(AuthenticationExtensionsLargeBlobOutputs* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("supported"), em_Val_from(value));
}


jb_ArrayBuffer AuthenticationExtensionsLargeBlobOutputs_blob(const AuthenticationExtensionsLargeBlobOutputs *self) {
    return em_Val_as(jb_ArrayBuffer, em_Val_get(em_Val_as_val(self->inner), em_Val_from("blob")));
}


void AuthenticationExtensionsLargeBlobOutputs_set_blob(AuthenticationExtensionsLargeBlobOutputs* self, jb_ArrayBuffer * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("blob"), em_Val_from(value));
}


bool AuthenticationExtensionsLargeBlobOutputs_written(const AuthenticationExtensionsLargeBlobOutputs *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("written")));
}


void AuthenticationExtensionsLargeBlobOutputs_set_written(AuthenticationExtensionsLargeBlobOutputs* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("written"), em_Val_from(value));
}


AuthenticationExtensionsLargeBlobOutputs AuthenticationExtensionsLargeBlobOutputs_new() {
    em_Val obj = em_Val_object();
    return AuthenticationExtensionsLargeBlobOutputs_from_val(&obj);
}

