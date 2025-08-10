#include <webbind/DigitalCredentialCreateRequest.h>

DEFINE_EMLITE_TYPE(DigitalCredentialCreateRequest, em_Val);


jb_String DigitalCredentialCreateRequest_protocol(const DigitalCredentialCreateRequest *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("protocol")));
}


void DigitalCredentialCreateRequest_set_protocol(DigitalCredentialCreateRequest* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("protocol"), em_Val_from(value));
}


jb_Object DigitalCredentialCreateRequest_data(const DigitalCredentialCreateRequest *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("data")));
}


void DigitalCredentialCreateRequest_set_data(DigitalCredentialCreateRequest* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("data"), em_Val_from(value));
}


DigitalCredentialCreateRequest DigitalCredentialCreateRequest_new() {
    em_Val obj = em_Val_object();
    return DigitalCredentialCreateRequest_from_val(&obj);
}

