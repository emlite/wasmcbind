#include <webbind/CommandEvent.h>
#include <webbind/Element.h>


DEFINE_EMLITE_TYPE(CommandEvent, Event);


CommandEvent CommandEvent_new(const jb_DOMString* type) : Event(em_Val_global("CommandEvent").new_(em_Val_from(type))) {
        return CommandEvent(em_Val_new(em_Val_global("CommandEvent", em_Val_from(type)));
      }


CommandEvent CommandEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("CommandEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return CommandEvent(em_Val_new(em_Val_global("CommandEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


Element CommandEvent_source(const CommandEvent *self) {
    return em_Val_as(Element, em_Val_get(Event_as_val(self->inner), "source"));
}


jb_DOMString CommandEvent_command(const CommandEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Event_as_val(self->inner), "command"));
}

