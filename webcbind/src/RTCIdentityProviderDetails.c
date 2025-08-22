#include <webcbind/RTCIdentityProviderDetails.h>

DEFINE_EMLITE_TYPE(RTCIdentityProviderDetails, em_Val);


jb_String RTCIdentityProviderDetails_domain(const RTCIdentityProviderDetails *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("domain")));
}


void RTCIdentityProviderDetails_set_domain(RTCIdentityProviderDetails* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("domain"), em_Val_from(value));
}


jb_String RTCIdentityProviderDetails_protocol(const RTCIdentityProviderDetails *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("protocol")));
}


void RTCIdentityProviderDetails_set_protocol(RTCIdentityProviderDetails* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("protocol"), em_Val_from(value));
}


RTCIdentityProviderDetails RTCIdentityProviderDetails_new() {
    em_Val obj = em_Val_object();
    return RTCIdentityProviderDetails_from_val(&obj);
}

