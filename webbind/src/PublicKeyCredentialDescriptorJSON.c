#include <webbind/PublicKeyCredentialDescriptorJSON.h>

DEFINE_EMLITE_TYPE(PublicKeyCredentialDescriptorJSON, em_Val);


jb_String PublicKeyCredentialDescriptorJSON_type(const PublicKeyCredentialDescriptorJSON *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void PublicKeyCredentialDescriptorJSON_set_type(PublicKeyCredentialDescriptorJSON* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


jb_Any PublicKeyCredentialDescriptorJSON_id(const PublicKeyCredentialDescriptorJSON *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("id")));
}


void PublicKeyCredentialDescriptorJSON_set_id(PublicKeyCredentialDescriptorJSON* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("id"), em_Val_from(value));
}


jb_Array PublicKeyCredentialDescriptorJSON_transports(const PublicKeyCredentialDescriptorJSON *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("transports")));
}


void PublicKeyCredentialDescriptorJSON_set_transports(PublicKeyCredentialDescriptorJSON* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("transports"), em_Val_from(value));
}


PublicKeyCredentialDescriptorJSON PublicKeyCredentialDescriptorJSON_new() {
    em_Val obj = em_Val_object();
    return PublicKeyCredentialDescriptorJSON_from_val(&obj);
}

