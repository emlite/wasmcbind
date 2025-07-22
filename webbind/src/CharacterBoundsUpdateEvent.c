#include <webbind/CharacterBoundsUpdateEvent.h>


DEFINE_EMLITE_TYPE(CharacterBoundsUpdateEvent, Event);


CharacterBoundsUpdateEvent CharacterBoundsUpdateEvent_new(const jb_DOMString* type) : Event(em_Val_global("CharacterBoundsUpdateEvent").new_(em_Val_from(type))) {
        return CharacterBoundsUpdateEvent(em_Val_new(em_Val_global("CharacterBoundsUpdateEvent", em_Val_from(type)));
      }


CharacterBoundsUpdateEvent CharacterBoundsUpdateEvent_new(const jb_DOMString* type, const jb_Any* options) : Event(em_Val_global("CharacterBoundsUpdateEvent").new_(em_Val_from(type), em_Val_from(options))) {
        return CharacterBoundsUpdateEvent(em_Val_new(em_Val_global("CharacterBoundsUpdateEvent", em_Val_from(type), em_Val_from(options)));
      }


unsigned long CharacterBoundsUpdateEvent_rangeStart(const CharacterBoundsUpdateEvent *self) {
    return em_Val_as(unsigned long, em_Val_get(Event_as_val(self->inner), "rangeStart"));
}


unsigned long CharacterBoundsUpdateEvent_rangeEnd(const CharacterBoundsUpdateEvent *self) {
    return em_Val_as(unsigned long, em_Val_get(Event_as_val(self->inner), "rangeEnd"));
}

