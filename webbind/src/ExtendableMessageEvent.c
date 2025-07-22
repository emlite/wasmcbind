#include <webbind/ExtendableMessageEvent.h>
#include <webbind/MessagePort.h>


DEFINE_EMLITE_TYPE(ExtendableMessageEvent, ExtendableEvent);


ExtendableMessageEvent ExtendableMessageEvent_new0(jb_DOMString * type) {
        em_Val vv = em_Val_new(em_Val_global("ExtendableMessageEvent") , em_Val_from(type));
        return ExtendableMessageEvent_from_val(&vv);
      }


ExtendableMessageEvent ExtendableMessageEvent_new1(jb_DOMString * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("ExtendableMessageEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return ExtendableMessageEvent_from_val(&vv);
      }


jb_Any ExtendableMessageEvent_data(const ExtendableMessageEvent *self) {
    return em_Val_as(jb_Any, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("data")));
}


jb_USVString ExtendableMessageEvent_origin(const ExtendableMessageEvent *self) {
    return em_Val_as(jb_USVString, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("origin")));
}


jb_DOMString ExtendableMessageEvent_lastEventId(const ExtendableMessageEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("lastEventId")));
}


jb_Any ExtendableMessageEvent_source(const ExtendableMessageEvent *self) {
    return em_Val_as(jb_Any, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("source")));
}


jb_FrozenArray ExtendableMessageEvent_ports(const ExtendableMessageEvent *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("ports")));
}

