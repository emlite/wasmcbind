#include <webbind/ExtendableMessageEvent.h>
#include <webbind/MessagePort.h>


DEFINE_EMLITE_TYPE(ExtendableMessageEvent, ExtendableEvent);


ExtendableMessageEvent ExtendableMessageEvent_new(const jb_DOMString* type) : ExtendableEvent(em_Val_global("ExtendableMessageEvent").new_(em_Val_from(type))) {
        return ExtendableMessageEvent(em_Val_new(em_Val_global("ExtendableMessageEvent", em_Val_from(type)));
      }


ExtendableMessageEvent ExtendableMessageEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : ExtendableEvent(em_Val_global("ExtendableMessageEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return ExtendableMessageEvent(em_Val_new(em_Val_global("ExtendableMessageEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


jb_Any ExtendableMessageEvent_data(const ExtendableMessageEvent *self) {
    return em_Val_as(jb_Any, em_Val_get(ExtendableEvent_as_val(self->inner), "data"));
}


jb_USVString ExtendableMessageEvent_origin(const ExtendableMessageEvent *self) {
    return em_Val_as(jb_USVString, em_Val_get(ExtendableEvent_as_val(self->inner), "origin"));
}


jb_DOMString ExtendableMessageEvent_lastEventId(const ExtendableMessageEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(ExtendableEvent_as_val(self->inner), "lastEventId"));
}


jb_Any ExtendableMessageEvent_source(const ExtendableMessageEvent *self) {
    return em_Val_as(jb_Any, em_Val_get(ExtendableEvent_as_val(self->inner), "source"));
}


jb_FrozenArray ExtendableMessageEvent_ports(const ExtendableMessageEvent *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(ExtendableEvent_as_val(self->inner), "ports"));
}

