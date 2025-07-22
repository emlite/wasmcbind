#include <webbind/Event.h>
#include <webbind/EventTarget.h>


DEFINE_EMLITE_TYPE(Event, em_Val);


Event Event_new0(jb_DOMString * type) {
        em_Val vv = em_Val_new(em_Val_global("Event") , em_Val_from(type));
        return Event_from_val(&vv);
      }


Event Event_new1(jb_DOMString * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("Event") , em_Val_from(type), em_Val_from(eventInitDict));
        return Event_from_val(&vv);
      }


jb_DOMString Event_type(const Event *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


EventTarget Event_target(const Event *self) {
    return em_Val_as(EventTarget, em_Val_get(em_Val_as_val(self->inner), em_Val_from("target")));
}


EventTarget Event_srcElement(const Event *self) {
    return em_Val_as(EventTarget, em_Val_get(em_Val_as_val(self->inner), em_Val_from("srcElement")));
}


EventTarget Event_currentTarget(const Event *self) {
    return em_Val_as(EventTarget, em_Val_get(em_Val_as_val(self->inner), em_Val_from("currentTarget")));
}


jb_Sequence Event_composedPath(Event* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "composedPath"));
}


unsigned short Event_eventPhase(const Event *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("eventPhase")));
}


jb_Undefined Event_stopPropagation(Event* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "stopPropagation"));
}


bool Event_cancelBubble(const Event *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("cancelBubble")));
}


void Event_set_cancelBubble(Event* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("cancelBubble"), em_Val_from(value));
}


jb_Undefined Event_stopImmediatePropagation(Event* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "stopImmediatePropagation"));
}


bool Event_bubbles(const Event *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bubbles")));
}


bool Event_cancelable(const Event *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("cancelable")));
}


bool Event_returnValue(const Event *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("returnValue")));
}


void Event_set_returnValue(Event* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("returnValue"), em_Val_from(value));
}


jb_Undefined Event_preventDefault(Event* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "preventDefault"));
}


bool Event_defaultPrevented(const Event *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("defaultPrevented")));
}


bool Event_composed(const Event *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("composed")));
}


bool Event_isTrusted(const Event *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("isTrusted")));
}


jb_Any Event_timeStamp(const Event *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("timeStamp")));
}


jb_Undefined Event_initEvent0(Event* self , jb_DOMString * type) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "initEvent", em_Val_from(type)));
}


jb_Undefined Event_initEvent1(Event* self , jb_DOMString * type, bool bubbles) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "initEvent", em_Val_from(type), em_Val_from(bubbles)));
}


jb_Undefined Event_initEvent2(Event* self , jb_DOMString * type, bool bubbles, bool cancelable) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "initEvent", em_Val_from(type), em_Val_from(bubbles), em_Val_from(cancelable)));
}

