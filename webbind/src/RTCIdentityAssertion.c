#include <webbind/RTCIdentityAssertion.h>


DEFINE_EMLITE_TYPE(RTCIdentityAssertion, em_Val);


RTCIdentityAssertion RTCIdentityAssertion_new(const jb_DOMString* idp, const jb_DOMString* name) : em_Val(em_Val_global("RTCIdentityAssertion").new_(em_Val_from(idp), em_Val_from(name))) {
        return RTCIdentityAssertion(em_Val_new(em_Val_global("RTCIdentityAssertion", em_Val_from(idp), em_Val_from(name)));
      }


jb_DOMString RTCIdentityAssertion_idp(const RTCIdentityAssertion *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "idp"));
}


void RTCIdentityAssertion_set_idp(RTCIdentityAssertion* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "idp", value);
}


jb_DOMString RTCIdentityAssertion_name(const RTCIdentityAssertion *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "name"));
}


void RTCIdentityAssertion_set_name(RTCIdentityAssertion* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "name", value);
}

