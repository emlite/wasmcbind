#include <webbind/PortalHost.h>
#include <webbind/MessagePort.h>


DEFINE_EMLITE_TYPE(PortalHost, EventTarget);


jb_Undefined PortalHost_postMessage(PortalHost* self , const jb_Any* message) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "postMessage", em_Val_from(message)));
}


jb_Undefined PortalHost_postMessage(PortalHost* self , const jb_Any* message, const StructuredSerializeOptions* options) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "postMessage", em_Val_from(message), em_Val_from(options)));
}


jb_Any PortalHost_onmessage(const PortalHost *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onmessage"));
}


void PortalHost_set_onmessage(PortalHost* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onmessage", value);
}


jb_Any PortalHost_onmessageerror(const PortalHost *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onmessageerror"));
}


void PortalHost_set_onmessageerror(PortalHost* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onmessageerror", value);
}

