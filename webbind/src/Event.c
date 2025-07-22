#include <webbind/Event.h>
#include <webbind/EventTarget.h>


DEFINE_EMLITE_TYPE(Event, em_Val);


Event Event_new(const jb_DOMString* type) : em_Val(em_Val_global("Event").new_(em_Val_from(type))) {
        return Event(em_Val_new(em_Val_global("Event", em_Val_from(type)));
      }


Event Event_new(const jb_DOMString* type, const jb_Any* eventInitDict) : em_Val(em_Val_global("Event").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return Event(em_Val_new(em_Val_global("Event", em_Val_from(type), em_Val_from(eventInitDict)));
      }


jb_DOMString Event_type(const Event *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "type"));
}


EventTarget Event_target(const Event *self) {
    return em_Val_as(EventTarget, em_Val_get(em_Val_as_val(self->inner), "target"));
}


EventTarget Event_srcElement(const Event *self) {
    return em_Val_as(EventTarget, em_Val_get(em_Val_as_val(self->inner), "srcElement"));
}


EventTarget Event_currentTarget(const Event *self) {
    return em_Val_as(EventTarget, em_Val_get(em_Val_as_val(self->inner), "currentTarget"));
}


jb_Sequence Event_composedPath(Event* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "composedPath"));
}


unsigned short Event_eventPhase(const Event *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), "eventPhase"));
}


jb_Undefined Event_stopPropagation(Event* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "stopPropagation"));
}


bool Event_cancelBubble(const Event *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "cancelBubble"));
}


void Event_set_cancelBubble(Event* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "cancelBubble", value);
}


jb_Undefined Event_stopImmediatePropagation(Event* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "stopImmediatePropagation"));
}


bool Event_bubbles(const Event *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "bubbles"));
}


bool Event_cancelable(const Event *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "cancelable"));
}


bool Event_returnValue(const Event *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "returnValue"));
}


void Event_set_returnValue(Event* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "returnValue", value);
}


jb_Undefined Event_preventDefault(Event* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "preventDefault"));
}


bool Event_defaultPrevented(const Event *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "defaultPrevented"));
}


bool Event_composed(const Event *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "composed"));
}


bool Event_isTrusted(const Event *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "isTrusted"));
}


jb_Any Event_timeStamp(const Event *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "timeStamp"));
}


jb_Undefined Event_initEvent(Event* self , const jb_DOMString* type) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "initEvent", em_Val_from(type)));
}


jb_Undefined Event_initEvent(Event* self , const jb_DOMString* type, bool bubbles) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "initEvent", em_Val_from(type), em_Val_from(bubbles)));
}


jb_Undefined Event_initEvent(Event* self , const jb_DOMString* type, bool bubbles, bool cancelable) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "initEvent", em_Val_from(type), em_Val_from(bubbles), em_Val_from(cancelable)));
}

