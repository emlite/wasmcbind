#include <webbind/MessageEvent.h>
#include <webbind/MessagePort.h>


DEFINE_EMLITE_TYPE(MessageEvent, Event);


MessageEvent MessageEvent_new(const jb_DOMString* type) : Event(em_Val_global("MessageEvent").new_(em_Val_from(type))) {
        return MessageEvent(em_Val_new(em_Val_global("MessageEvent", em_Val_from(type)));
      }


MessageEvent MessageEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("MessageEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return MessageEvent(em_Val_new(em_Val_global("MessageEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


jb_Any MessageEvent_data(const MessageEvent *self) {
    return em_Val_as(jb_Any, em_Val_get(Event_as_val(self->inner), "data"));
}


jb_USVString MessageEvent_origin(const MessageEvent *self) {
    return em_Val_as(jb_USVString, em_Val_get(Event_as_val(self->inner), "origin"));
}


jb_DOMString MessageEvent_lastEventId(const MessageEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Event_as_val(self->inner), "lastEventId"));
}


jb_Any MessageEvent_source(const MessageEvent *self) {
    return em_Val_as(jb_Any, em_Val_get(Event_as_val(self->inner), "source"));
}


jb_FrozenArray MessageEvent_ports(const MessageEvent *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(Event_as_val(self->inner), "ports"));
}


jb_Undefined MessageEvent_initMessageEvent(MessageEvent* self , const jb_DOMString* type) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initMessageEvent", em_Val_from(type)));
}


jb_Undefined MessageEvent_initMessageEvent(MessageEvent* self , const jb_DOMString* type, bool bubbles) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initMessageEvent", em_Val_from(type), em_Val_from(bubbles)));
}


jb_Undefined MessageEvent_initMessageEvent(MessageEvent* self , const jb_DOMString* type, bool bubbles, bool cancelable) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initMessageEvent", em_Val_from(type), em_Val_from(bubbles), em_Val_from(cancelable)));
}


jb_Undefined MessageEvent_initMessageEvent(MessageEvent* self , const jb_DOMString* type, bool bubbles, bool cancelable, const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initMessageEvent", em_Val_from(type), em_Val_from(bubbles), em_Val_from(cancelable), em_Val_from(data)));
}


jb_Undefined MessageEvent_initMessageEvent(MessageEvent* self , const jb_DOMString* type, bool bubbles, bool cancelable, const jb_Any* data, const jb_USVString* origin) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initMessageEvent", em_Val_from(type), em_Val_from(bubbles), em_Val_from(cancelable), em_Val_from(data), em_Val_from(origin)));
}


jb_Undefined MessageEvent_initMessageEvent(MessageEvent* self , const jb_DOMString* type, bool bubbles, bool cancelable, const jb_Any* data, const jb_USVString* origin, const jb_DOMString* lastEventId) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initMessageEvent", em_Val_from(type), em_Val_from(bubbles), em_Val_from(cancelable), em_Val_from(data), em_Val_from(origin), em_Val_from(lastEventId)));
}


jb_Undefined MessageEvent_initMessageEvent(MessageEvent* self , const jb_DOMString* type, bool bubbles, bool cancelable, const jb_Any* data, const jb_USVString* origin, const jb_DOMString* lastEventId, const jb_Any* source) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initMessageEvent", em_Val_from(type), em_Val_from(bubbles), em_Val_from(cancelable), em_Val_from(data), em_Val_from(origin), em_Val_from(lastEventId), em_Val_from(source)));
}


jb_Undefined MessageEvent_initMessageEvent(MessageEvent* self , const jb_DOMString* type, bool bubbles, bool cancelable, const jb_Any* data, const jb_USVString* origin, const jb_DOMString* lastEventId, const jb_Any* source, const jb_Sequence* ports) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initMessageEvent", em_Val_from(type), em_Val_from(bubbles), em_Val_from(cancelable), em_Val_from(data), em_Val_from(origin), em_Val_from(lastEventId), em_Val_from(source), em_Val_from(ports)));
}

