#include <webbind/MessagePort.h>

#include <webbind/StructuredSerializeOptions.h>

DEFINE_EMLITE_TYPE(MessagePort, EventTarget);


jb_Undefined MessagePort_postMessage0(MessagePort* self , jb_Any * message) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "postMessage", em_Val_from(message)));
}


jb_Undefined MessagePort_postMessage1(MessagePort* self , jb_Any * message, StructuredSerializeOptions * options) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "postMessage", em_Val_from(message), em_Val_from(options)));
}


jb_Undefined MessagePort_start(MessagePort* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "start"));
}


jb_Undefined MessagePort_close(MessagePort* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "close"));
}


jb_Any MessagePort_onclose(const MessagePort *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onclose")));
}


void MessagePort_set_onclose(MessagePort* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onclose"), em_Val_from(value));
}


jb_Any MessagePort_onmessage(const MessagePort *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onmessage")));
}


void MessagePort_set_onmessage(MessagePort* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onmessage"), em_Val_from(value));
}


jb_Any MessagePort_onmessageerror(const MessagePort *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onmessageerror")));
}


void MessagePort_set_onmessageerror(MessagePort* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onmessageerror"), em_Val_from(value));
}

