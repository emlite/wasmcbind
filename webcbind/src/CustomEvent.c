#include <webcbind/CustomEvent.h>

#include <webcbind/CustomEventInit.h>

DEFINE_EMLITE_TYPE(CustomEvent, Event);


CustomEvent CustomEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("CustomEvent") , em_Val_from(type));
        return CustomEvent_from_val(&vv);
      }


CustomEvent CustomEvent_new1(jb_String * type, CustomEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("CustomEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return CustomEvent_from_val(&vv);
      }


jb_Any CustomEvent_detail(const CustomEvent *self) {
    return em_Val_as(jb_Any, em_Val_get(Event_as_val(self->inner), em_Val_from("detail")));
}


jb_Undefined CustomEvent_initCustomEvent0(CustomEvent* self , jb_String * type) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initCustomEvent", em_Val_from(type)));
}


jb_Undefined CustomEvent_initCustomEvent1(CustomEvent* self , jb_String * type, bool bubbles) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initCustomEvent", em_Val_from(type), em_Val_from(bubbles)));
}


jb_Undefined CustomEvent_initCustomEvent2(CustomEvent* self , jb_String * type, bool bubbles, bool cancelable) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initCustomEvent", em_Val_from(type), em_Val_from(bubbles), em_Val_from(cancelable)));
}


jb_Undefined CustomEvent_initCustomEvent3(CustomEvent* self , jb_String * type, bool bubbles, bool cancelable, jb_Any * detail) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initCustomEvent", em_Val_from(type), em_Val_from(bubbles), em_Val_from(cancelable), em_Val_from(detail)));
}

