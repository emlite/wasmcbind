#include <webbind/CharacterBoundsUpdateEvent.h>


DEFINE_EMLITE_TYPE(CharacterBoundsUpdateEvent, Event);


CharacterBoundsUpdateEvent CharacterBoundsUpdateEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("CharacterBoundsUpdateEvent") , em_Val_from(type));
        return CharacterBoundsUpdateEvent_from_val(&vv);
      }


CharacterBoundsUpdateEvent CharacterBoundsUpdateEvent_new1(jb_String * type, jb_Any * options) {
        em_Val vv = em_Val_new(em_Val_global("CharacterBoundsUpdateEvent") , em_Val_from(type), em_Val_from(options));
        return CharacterBoundsUpdateEvent_from_val(&vv);
      }


unsigned long CharacterBoundsUpdateEvent_rangeStart(const CharacterBoundsUpdateEvent *self) {
    return em_Val_as(unsigned long, em_Val_get(Event_as_val(self->inner), em_Val_from("rangeStart")));
}


unsigned long CharacterBoundsUpdateEvent_rangeEnd(const CharacterBoundsUpdateEvent *self) {
    return em_Val_as(unsigned long, em_Val_get(Event_as_val(self->inner), em_Val_from("rangeEnd")));
}

