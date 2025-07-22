#include <webbind/MessagePort.h>


DEFINE_EMLITE_TYPE(StructuredSerializeOptions, em_Val);


jb_Sequence StructuredSerializeOptions_transfer(const StructuredSerializeOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "transfer"));
}


void StructuredSerializeOptions_set_transfer(StructuredSerializeOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "transfer", value);
}

DEFINE_EMLITE_TYPE(MessagePort, EventTarget);


jb_Undefined MessagePort_postMessage(MessagePort* self , const jb_Any* message) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "postMessage", em_Val_from(message)));
}


jb_Undefined MessagePort_postMessage(MessagePort* self , const jb_Any* message, const StructuredSerializeOptions* options) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "postMessage", em_Val_from(message), em_Val_from(options)));
}


jb_Undefined MessagePort_start(MessagePort* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "start"));
}


jb_Undefined MessagePort_close(MessagePort* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "close"));
}


jb_Any MessagePort_onclose(const MessagePort *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onclose"));
}


void MessagePort_set_onclose(MessagePort* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onclose", value);
}


jb_Any MessagePort_onmessage(const MessagePort *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onmessage"));
}


void MessagePort_set_onmessage(MessagePort* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onmessage", value);
}


jb_Any MessagePort_onmessageerror(const MessagePort *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onmessageerror"));
}


void MessagePort_set_onmessageerror(MessagePort* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onmessageerror", value);
}

