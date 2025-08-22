#include <webcbind/TimeEvent.h>

#include <webcbind/Window.h>

DEFINE_EMLITE_TYPE(TimeEvent, Event);


jb_Any TimeEvent_view(const TimeEvent *self) {
    return em_Val_as(jb_Any, em_Val_get(Event_as_val(self->inner), em_Val_from("view")));
}


long TimeEvent_detail(const TimeEvent *self) {
    return em_Val_as(long, em_Val_get(Event_as_val(self->inner), em_Val_from("detail")));
}


jb_Undefined TimeEvent_initTimeEvent(TimeEvent* self , jb_String * typeArg, Window * viewArg, long detailArg) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initTimeEvent", em_Val_from(typeArg), em_Val_from(viewArg), em_Val_from(detailArg)));
}

