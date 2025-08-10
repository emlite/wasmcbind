#include <webbind/RTCIdentityAssertion.h>

DEFINE_EMLITE_TYPE(RTCIdentityAssertion, em_Val);


RTCIdentityAssertion RTCIdentityAssertion_new(jb_String * idp, jb_String * name) {
        em_Val vv = em_Val_new(em_Val_global("RTCIdentityAssertion") , em_Val_from(idp), em_Val_from(name));
        return RTCIdentityAssertion_from_val(&vv);
      }


jb_String RTCIdentityAssertion_idp(const RTCIdentityAssertion *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("idp")));
}


void RTCIdentityAssertion_set_idp(RTCIdentityAssertion* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("idp"), em_Val_from(value));
}


jb_String RTCIdentityAssertion_name(const RTCIdentityAssertion *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


void RTCIdentityAssertion_set_name(RTCIdentityAssertion* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}

