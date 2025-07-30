#include <webbind/TextUpdateEvent.h>


DEFINE_EMLITE_TYPE(TextUpdateEvent, Event);


TextUpdateEvent TextUpdateEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("TextUpdateEvent") , em_Val_from(type));
        return TextUpdateEvent_from_val(&vv);
      }


TextUpdateEvent TextUpdateEvent_new1(jb_String * type, jb_Any * options) {
        em_Val vv = em_Val_new(em_Val_global("TextUpdateEvent") , em_Val_from(type), em_Val_from(options));
        return TextUpdateEvent_from_val(&vv);
      }


unsigned long TextUpdateEvent_updateRangeStart(const TextUpdateEvent *self) {
    return em_Val_as(unsigned long, em_Val_get(Event_as_val(self->inner), em_Val_from("updateRangeStart")));
}


unsigned long TextUpdateEvent_updateRangeEnd(const TextUpdateEvent *self) {
    return em_Val_as(unsigned long, em_Val_get(Event_as_val(self->inner), em_Val_from("updateRangeEnd")));
}


jb_String TextUpdateEvent_text(const TextUpdateEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("text")));
}


unsigned long TextUpdateEvent_selectionStart(const TextUpdateEvent *self) {
    return em_Val_as(unsigned long, em_Val_get(Event_as_val(self->inner), em_Val_from("selectionStart")));
}


unsigned long TextUpdateEvent_selectionEnd(const TextUpdateEvent *self) {
    return em_Val_as(unsigned long, em_Val_get(Event_as_val(self->inner), em_Val_from("selectionEnd")));
}

