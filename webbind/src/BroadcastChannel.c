#include <webbind/BroadcastChannel.h>


DEFINE_EMLITE_TYPE(BroadcastChannel, EventTarget);


BroadcastChannel BroadcastChannel_new(const jb_DOMString* name) : EventTarget(em_Val_global("BroadcastChannel").new_(em_Val_from(name))) {
        return BroadcastChannel(em_Val_new(em_Val_global("BroadcastChannel", em_Val_from(name)));
      }


jb_DOMString BroadcastChannel_name(const BroadcastChannel *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "name"));
}


jb_Undefined BroadcastChannel_postMessage(BroadcastChannel* self , const jb_Any* message) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "postMessage", em_Val_from(message)));
}


jb_Undefined BroadcastChannel_close(BroadcastChannel* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "close"));
}


jb_Any BroadcastChannel_onmessage(const BroadcastChannel *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onmessage"));
}


void BroadcastChannel_set_onmessage(BroadcastChannel* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onmessage", value);
}


jb_Any BroadcastChannel_onmessageerror(const BroadcastChannel *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onmessageerror"));
}


void BroadcastChannel_set_onmessageerror(BroadcastChannel* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onmessageerror", value);
}

