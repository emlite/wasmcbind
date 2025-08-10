#include <webbind/CharacterBoundsUpdateEventInit.h>

DEFINE_EMLITE_TYPE(CharacterBoundsUpdateEventInit, EventInit);


unsigned long CharacterBoundsUpdateEventInit_rangeStart(const CharacterBoundsUpdateEventInit *self) {
    return em_Val_as(unsigned long, em_Val_get(EventInit_as_val(self->inner), em_Val_from("rangeStart")));
}


void CharacterBoundsUpdateEventInit_set_rangeStart(CharacterBoundsUpdateEventInit* self, unsigned long value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("rangeStart"), em_Val_from(value));
}


unsigned long CharacterBoundsUpdateEventInit_rangeEnd(const CharacterBoundsUpdateEventInit *self) {
    return em_Val_as(unsigned long, em_Val_get(EventInit_as_val(self->inner), em_Val_from("rangeEnd")));
}


void CharacterBoundsUpdateEventInit_set_rangeEnd(CharacterBoundsUpdateEventInit* self, unsigned long value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("rangeEnd"), em_Val_from(value));
}


CharacterBoundsUpdateEventInit CharacterBoundsUpdateEventInit_new() {
    em_Val obj = em_Val_object();
    return CharacterBoundsUpdateEventInit_from_val(&obj);
}

