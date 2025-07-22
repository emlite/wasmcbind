#include <webbind/DigitalCredential.h>


DEFINE_EMLITE_TYPE(DigitalCredential, Credential);


jb_Object DigitalCredential_toJSON(DigitalCredential* self ) {
    return em_Val_as(jb_Object, em_Val_call(Credential_as_val(self->inner), "toJSON"));
}


jb_DOMString DigitalCredential_protocol(const DigitalCredential *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Credential_as_val(self->inner), em_Val_from("protocol")));
}


jb_Object DigitalCredential_data(const DigitalCredential *self) {
    return em_Val_as(jb_Object, em_Val_get(Credential_as_val(self->inner), em_Val_from("data")));
}


bool DigitalCredential_userAgentAllowsProtocol(DigitalCredential* self , jb_DOMString * protocol) {
    return em_Val_as(bool, em_Val_call(em_Val_global("digitalcredential"), "userAgentAllowsProtocol", em_Val_from(protocol)));
}

