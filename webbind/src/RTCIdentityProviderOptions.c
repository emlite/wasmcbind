#include <webbind/RTCIdentityProviderOptions.h>

DEFINE_EMLITE_TYPE(RTCIdentityProviderOptions, em_Val);


jb_String RTCIdentityProviderOptions_protocol(const RTCIdentityProviderOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("protocol")));
}


void RTCIdentityProviderOptions_set_protocol(RTCIdentityProviderOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("protocol"), em_Val_from(value));
}


jb_String RTCIdentityProviderOptions_usernameHint(const RTCIdentityProviderOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("usernameHint")));
}


void RTCIdentityProviderOptions_set_usernameHint(RTCIdentityProviderOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("usernameHint"), em_Val_from(value));
}


jb_String RTCIdentityProviderOptions_peerIdentity(const RTCIdentityProviderOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("peerIdentity")));
}


void RTCIdentityProviderOptions_set_peerIdentity(RTCIdentityProviderOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("peerIdentity"), em_Val_from(value));
}


RTCIdentityProviderOptions RTCIdentityProviderOptions_new() {
    em_Val obj = em_Val_object();
    return RTCIdentityProviderOptions_from_val(&obj);
}

