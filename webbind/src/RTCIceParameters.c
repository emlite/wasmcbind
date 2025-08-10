#include <webbind/RTCIceParameters.h>

DEFINE_EMLITE_TYPE(RTCIceParameters, em_Val);


jb_String RTCIceParameters_usernameFragment(const RTCIceParameters *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("usernameFragment")));
}


void RTCIceParameters_set_usernameFragment(RTCIceParameters* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("usernameFragment"), em_Val_from(value));
}


jb_String RTCIceParameters_password(const RTCIceParameters *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("password")));
}


void RTCIceParameters_set_password(RTCIceParameters* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("password"), em_Val_from(value));
}


RTCIceParameters RTCIceParameters_new() {
    em_Val obj = em_Val_object();
    return RTCIceParameters_from_val(&obj);
}

