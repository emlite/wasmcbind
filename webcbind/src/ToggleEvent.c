#include <webcbind/ToggleEvent.h>

#include <webcbind/ToggleEventInit.h>
#include <webcbind/Element.h>

DEFINE_EMLITE_TYPE(ToggleEvent, Event);


ToggleEvent ToggleEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("ToggleEvent") , em_Val_from(type));
        return ToggleEvent_from_val(&vv);
      }


ToggleEvent ToggleEvent_new1(jb_String * type, ToggleEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("ToggleEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return ToggleEvent_from_val(&vv);
      }


jb_String ToggleEvent_oldState(const ToggleEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("oldState")));
}


jb_String ToggleEvent_newState(const ToggleEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("newState")));
}


Element ToggleEvent_source(const ToggleEvent *self) {
    return em_Val_as(Element, em_Val_get(Event_as_val(self->inner), em_Val_from("source")));
}

