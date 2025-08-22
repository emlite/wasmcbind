#include <webcbind/TouchEventInit.h>

#include <webcbind/Touch.h>

DEFINE_EMLITE_TYPE(TouchEventInit, EventModifierInit);


jb_Array TouchEventInit_touches(const TouchEventInit *self) {
    return em_Val_as(jb_Array, em_Val_get(EventModifierInit_as_val(self->inner), em_Val_from("touches")));
}


void TouchEventInit_set_touches(TouchEventInit* self, jb_Array * value) {
    em_Val_set(EventModifierInit_as_val(self->inner), em_Val_from("touches"), em_Val_from(value));
}


jb_Array TouchEventInit_targetTouches(const TouchEventInit *self) {
    return em_Val_as(jb_Array, em_Val_get(EventModifierInit_as_val(self->inner), em_Val_from("targetTouches")));
}


void TouchEventInit_set_targetTouches(TouchEventInit* self, jb_Array * value) {
    em_Val_set(EventModifierInit_as_val(self->inner), em_Val_from("targetTouches"), em_Val_from(value));
}


jb_Array TouchEventInit_changedTouches(const TouchEventInit *self) {
    return em_Val_as(jb_Array, em_Val_get(EventModifierInit_as_val(self->inner), em_Val_from("changedTouches")));
}


void TouchEventInit_set_changedTouches(TouchEventInit* self, jb_Array * value) {
    em_Val_set(EventModifierInit_as_val(self->inner), em_Val_from("changedTouches"), em_Val_from(value));
}


TouchEventInit TouchEventInit_new() {
    em_Val obj = em_Val_object();
    return TouchEventInit_from_val(&obj);
}

