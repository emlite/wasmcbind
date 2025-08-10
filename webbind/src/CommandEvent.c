#include <webbind/CommandEvent.h>

#include <webbind/CommandEventInit.h>
#include <webbind/Element.h>

DEFINE_EMLITE_TYPE(CommandEvent, Event);


CommandEvent CommandEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("CommandEvent") , em_Val_from(type));
        return CommandEvent_from_val(&vv);
      }


CommandEvent CommandEvent_new1(jb_String * type, CommandEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("CommandEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return CommandEvent_from_val(&vv);
      }


Element CommandEvent_source(const CommandEvent *self) {
    return em_Val_as(Element, em_Val_get(Event_as_val(self->inner), em_Val_from("source")));
}


jb_String CommandEvent_command(const CommandEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("command")));
}

