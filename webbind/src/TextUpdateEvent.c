#include <webbind/TextUpdateEvent.h>


DEFINE_EMLITE_TYPE(TextUpdateEvent, Event);


TextUpdateEvent TextUpdateEvent_new(const jb_DOMString* type) : Event(em_Val_global("TextUpdateEvent").new_(em_Val_from(type))) {
        return TextUpdateEvent(em_Val_new(em_Val_global("TextUpdateEvent", em_Val_from(type)));
      }


TextUpdateEvent TextUpdateEvent_new(const jb_DOMString* type, const jb_Any* options) : Event(em_Val_global("TextUpdateEvent").new_(em_Val_from(type), em_Val_from(options))) {
        return TextUpdateEvent(em_Val_new(em_Val_global("TextUpdateEvent", em_Val_from(type), em_Val_from(options)));
      }


unsigned long TextUpdateEvent_updateRangeStart(const TextUpdateEvent *self) {
    return em_Val_as(unsigned long, em_Val_get(Event_as_val(self->inner), "updateRangeStart"));
}


unsigned long TextUpdateEvent_updateRangeEnd(const TextUpdateEvent *self) {
    return em_Val_as(unsigned long, em_Val_get(Event_as_val(self->inner), "updateRangeEnd"));
}


jb_DOMString TextUpdateEvent_text(const TextUpdateEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Event_as_val(self->inner), "text"));
}


unsigned long TextUpdateEvent_selectionStart(const TextUpdateEvent *self) {
    return em_Val_as(unsigned long, em_Val_get(Event_as_val(self->inner), "selectionStart"));
}


unsigned long TextUpdateEvent_selectionEnd(const TextUpdateEvent *self) {
    return em_Val_as(unsigned long, em_Val_get(Event_as_val(self->inner), "selectionEnd"));
}

