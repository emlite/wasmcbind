#include <webbind/CommandEventInit.h>

#include <webbind/Element.h>

DEFINE_EMLITE_TYPE(CommandEventInit, EventInit);


Element CommandEventInit_source(const CommandEventInit *self) {
    return em_Val_as(Element, em_Val_get(EventInit_as_val(self->inner), em_Val_from("source")));
}


void CommandEventInit_set_source(CommandEventInit* self, Element * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("source"), em_Val_from(value));
}


jb_String CommandEventInit_command(const CommandEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("command")));
}


void CommandEventInit_set_command(CommandEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("command"), em_Val_from(value));
}


CommandEventInit CommandEventInit_new() {
    em_Val obj = em_Val_object();
    return CommandEventInit_from_val(&obj);
}

