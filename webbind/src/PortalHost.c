#include <webbind/PortalHost.h>

#include <webbind/StructuredSerializeOptions.h>

DEFINE_EMLITE_TYPE(PortalHost, EventTarget);


jb_Undefined PortalHost_postMessage0(PortalHost* self , jb_Any * message) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "postMessage", em_Val_from(message)));
}


jb_Undefined PortalHost_postMessage1(PortalHost* self , jb_Any * message, StructuredSerializeOptions * options) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "postMessage", em_Val_from(message), em_Val_from(options)));
}


jb_Any PortalHost_onmessage(const PortalHost *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onmessage")));
}


void PortalHost_set_onmessage(PortalHost* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onmessage"), em_Val_from(value));
}


jb_Any PortalHost_onmessageerror(const PortalHost *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onmessageerror")));
}


void PortalHost_set_onmessageerror(PortalHost* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onmessageerror"), em_Val_from(value));
}

