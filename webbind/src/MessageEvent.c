#include <webbind/MessageEvent.h>
#include <webbind/MessagePort.h>


DEFINE_EMLITE_TYPE(MessageEvent, Event);


MessageEvent MessageEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("MessageEvent") , em_Val_from(type));
        return MessageEvent_from_val(&vv);
      }


MessageEvent MessageEvent_new1(jb_String * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("MessageEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return MessageEvent_from_val(&vv);
      }


jb_Any MessageEvent_data(const MessageEvent *self) {
    return em_Val_as(jb_Any, em_Val_get(Event_as_val(self->inner), em_Val_from("data")));
}


jb_String MessageEvent_origin(const MessageEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("origin")));
}


jb_String MessageEvent_lastEventId(const MessageEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("lastEventId")));
}


jb_Any MessageEvent_source(const MessageEvent *self) {
    return em_Val_as(jb_Any, em_Val_get(Event_as_val(self->inner), em_Val_from("source")));
}


jb_Array MessageEvent_ports(const MessageEvent *self) {
    return em_Val_as(jb_Array, em_Val_get(Event_as_val(self->inner), em_Val_from("ports")));
}


jb_Undefined MessageEvent_initMessageEvent0(MessageEvent* self , jb_String * type) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initMessageEvent", em_Val_from(type)));
}


jb_Undefined MessageEvent_initMessageEvent1(MessageEvent* self , jb_String * type, bool bubbles) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initMessageEvent", em_Val_from(type), em_Val_from(bubbles)));
}


jb_Undefined MessageEvent_initMessageEvent2(MessageEvent* self , jb_String * type, bool bubbles, bool cancelable) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initMessageEvent", em_Val_from(type), em_Val_from(bubbles), em_Val_from(cancelable)));
}


jb_Undefined MessageEvent_initMessageEvent3(MessageEvent* self , jb_String * type, bool bubbles, bool cancelable, jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initMessageEvent", em_Val_from(type), em_Val_from(bubbles), em_Val_from(cancelable), em_Val_from(data)));
}


jb_Undefined MessageEvent_initMessageEvent4(MessageEvent* self , jb_String * type, bool bubbles, bool cancelable, jb_Any * data, jb_String * origin) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initMessageEvent", em_Val_from(type), em_Val_from(bubbles), em_Val_from(cancelable), em_Val_from(data), em_Val_from(origin)));
}


jb_Undefined MessageEvent_initMessageEvent5(MessageEvent* self , jb_String * type, bool bubbles, bool cancelable, jb_Any * data, jb_String * origin, jb_String * lastEventId) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initMessageEvent", em_Val_from(type), em_Val_from(bubbles), em_Val_from(cancelable), em_Val_from(data), em_Val_from(origin), em_Val_from(lastEventId)));
}


jb_Undefined MessageEvent_initMessageEvent6(MessageEvent* self , jb_String * type, bool bubbles, bool cancelable, jb_Any * data, jb_String * origin, jb_String * lastEventId, jb_Any * source) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initMessageEvent", em_Val_from(type), em_Val_from(bubbles), em_Val_from(cancelable), em_Val_from(data), em_Val_from(origin), em_Val_from(lastEventId), em_Val_from(source)));
}


jb_Undefined MessageEvent_initMessageEvent7(MessageEvent* self , jb_String * type, bool bubbles, bool cancelable, jb_Any * data, jb_String * origin, jb_String * lastEventId, jb_Any * source, jb_Array * ports) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initMessageEvent", em_Val_from(type), em_Val_from(bubbles), em_Val_from(cancelable), em_Val_from(data), em_Val_from(origin), em_Val_from(lastEventId), em_Val_from(source), em_Val_from(ports)));
}

