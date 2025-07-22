#include <webbind/BroadcastChannel.h>


DEFINE_EMLITE_TYPE(BroadcastChannel, EventTarget);


BroadcastChannel BroadcastChannel_new(jb_DOMString * name) {
        em_Val vv = em_Val_new(em_Val_global("BroadcastChannel") , em_Val_from(name));
        return BroadcastChannel_from_val(&vv);
      }


jb_DOMString BroadcastChannel_name(const BroadcastChannel *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("name")));
}


jb_Undefined BroadcastChannel_postMessage(BroadcastChannel* self , jb_Any * message) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "postMessage", em_Val_from(message)));
}


jb_Undefined BroadcastChannel_close(BroadcastChannel* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "close"));
}


jb_Any BroadcastChannel_onmessage(const BroadcastChannel *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onmessage")));
}


void BroadcastChannel_set_onmessage(BroadcastChannel* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onmessage"), em_Val_from(value));
}


jb_Any BroadcastChannel_onmessageerror(const BroadcastChannel *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onmessageerror")));
}


void BroadcastChannel_set_onmessageerror(BroadcastChannel* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onmessageerror"), em_Val_from(value));
}

