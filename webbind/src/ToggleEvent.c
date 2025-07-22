#include <webbind/ToggleEvent.h>
#include <webbind/Element.h>


DEFINE_EMLITE_TYPE(ToggleEvent, Event);


ToggleEvent ToggleEvent_new0(jb_DOMString * type) {
        em_Val vv = em_Val_new(em_Val_global("ToggleEvent") , em_Val_from(type));
        return ToggleEvent_from_val(&vv);
      }


ToggleEvent ToggleEvent_new1(jb_DOMString * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("ToggleEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return ToggleEvent_from_val(&vv);
      }


jb_DOMString ToggleEvent_oldState(const ToggleEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Event_as_val(self->inner), em_Val_from("oldState")));
}


jb_DOMString ToggleEvent_newState(const ToggleEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Event_as_val(self->inner), em_Val_from("newState")));
}


Element ToggleEvent_source(const ToggleEvent *self) {
    return em_Val_as(Element, em_Val_get(Event_as_val(self->inner), em_Val_from("source")));
}

