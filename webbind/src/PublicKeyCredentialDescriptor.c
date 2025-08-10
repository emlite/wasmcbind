#include <webbind/PublicKeyCredentialDescriptor.h>

DEFINE_EMLITE_TYPE(PublicKeyCredentialDescriptor, em_Val);


jb_String PublicKeyCredentialDescriptor_type(const PublicKeyCredentialDescriptor *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void PublicKeyCredentialDescriptor_set_type(PublicKeyCredentialDescriptor* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


jb_Any PublicKeyCredentialDescriptor_id(const PublicKeyCredentialDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("id")));
}


void PublicKeyCredentialDescriptor_set_id(PublicKeyCredentialDescriptor* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("id"), em_Val_from(value));
}


jb_Array PublicKeyCredentialDescriptor_transports(const PublicKeyCredentialDescriptor *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("transports")));
}


void PublicKeyCredentialDescriptor_set_transports(PublicKeyCredentialDescriptor* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("transports"), em_Val_from(value));
}


PublicKeyCredentialDescriptor PublicKeyCredentialDescriptor_new() {
    em_Val obj = em_Val_object();
    return PublicKeyCredentialDescriptor_from_val(&obj);
}

