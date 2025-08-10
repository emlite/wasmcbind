#include <webbind/PublicKeyCredentialUserEntityJSON.h>

DEFINE_EMLITE_TYPE(PublicKeyCredentialUserEntityJSON, em_Val);


jb_Any PublicKeyCredentialUserEntityJSON_id(const PublicKeyCredentialUserEntityJSON *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("id")));
}


void PublicKeyCredentialUserEntityJSON_set_id(PublicKeyCredentialUserEntityJSON* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("id"), em_Val_from(value));
}


jb_String PublicKeyCredentialUserEntityJSON_name(const PublicKeyCredentialUserEntityJSON *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


void PublicKeyCredentialUserEntityJSON_set_name(PublicKeyCredentialUserEntityJSON* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


jb_String PublicKeyCredentialUserEntityJSON_displayName(const PublicKeyCredentialUserEntityJSON *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("displayName")));
}


void PublicKeyCredentialUserEntityJSON_set_displayName(PublicKeyCredentialUserEntityJSON* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("displayName"), em_Val_from(value));
}


PublicKeyCredentialUserEntityJSON PublicKeyCredentialUserEntityJSON_new() {
    em_Val obj = em_Val_object();
    return PublicKeyCredentialUserEntityJSON_from_val(&obj);
}

