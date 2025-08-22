#include <webcbind/ValueEventInit.h>

DEFINE_EMLITE_TYPE(ValueEventInit, EventInit);


jb_Any ValueEventInit_value(const ValueEventInit *self) {
    return em_Val_as(jb_Any, em_Val_get(EventInit_as_val(self->inner), em_Val_from("value")));
}


void ValueEventInit_set_value(ValueEventInit* self, jb_Any * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("value"), em_Val_from(value));
}


ValueEventInit ValueEventInit_new() {
    em_Val obj = em_Val_object();
    return ValueEventInit_from_val(&obj);
}

