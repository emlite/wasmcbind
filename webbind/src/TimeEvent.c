#include <webbind/TimeEvent.h>
#include <webbind/Window.h>


DEFINE_EMLITE_TYPE(TimeEvent, Event);


jb_Any TimeEvent_view(const TimeEvent *self) {
    return em_Val_as(jb_Any, em_Val_get(Event_as_val(self->inner), "view"));
}


long TimeEvent_detail(const TimeEvent *self) {
    return em_Val_as(long, em_Val_get(Event_as_val(self->inner), "detail"));
}


jb_Undefined TimeEvent_initTimeEvent(TimeEvent* self , const jb_DOMString* typeArg, const Window* viewArg, long detailArg) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initTimeEvent", em_Val_from(typeArg), em_Val_from(viewArg), em_Val_from(detailArg)));
}

