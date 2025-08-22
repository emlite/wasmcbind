#include <webcbind/DigitalCredentialGetRequest.h>

DEFINE_EMLITE_TYPE(DigitalCredentialGetRequest, em_Val);


jb_String DigitalCredentialGetRequest_protocol(const DigitalCredentialGetRequest *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("protocol")));
}


void DigitalCredentialGetRequest_set_protocol(DigitalCredentialGetRequest* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("protocol"), em_Val_from(value));
}


jb_Object DigitalCredentialGetRequest_data(const DigitalCredentialGetRequest *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("data")));
}


void DigitalCredentialGetRequest_set_data(DigitalCredentialGetRequest* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("data"), em_Val_from(value));
}


DigitalCredentialGetRequest DigitalCredentialGetRequest_new() {
    em_Val obj = em_Val_object();
    return DigitalCredentialGetRequest_from_val(&obj);
}

