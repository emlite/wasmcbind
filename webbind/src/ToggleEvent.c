#include <webbind/ToggleEvent.h>
#include <webbind/Element.h>


DEFINE_EMLITE_TYPE(ToggleEvent, Event);


ToggleEvent ToggleEvent_new(const jb_DOMString* type) : Event(em_Val_global("ToggleEvent").new_(em_Val_from(type))) {
        return ToggleEvent(em_Val_new(em_Val_global("ToggleEvent", em_Val_from(type)));
      }


ToggleEvent ToggleEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("ToggleEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return ToggleEvent(em_Val_new(em_Val_global("ToggleEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


jb_DOMString ToggleEvent_oldState(const ToggleEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Event_as_val(self->inner), "oldState"));
}


jb_DOMString ToggleEvent_newState(const ToggleEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Event_as_val(self->inner), "newState"));
}


Element ToggleEvent_source(const ToggleEvent *self) {
    return em_Val_as(Element, em_Val_get(Event_as_val(self->inner), "source"));
}

