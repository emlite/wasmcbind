#include <webcbind/SensorErrorEventInit.h>

#include <webcbind/DOMException.h>

DEFINE_EMLITE_TYPE(SensorErrorEventInit, EventInit);


DOMException SensorErrorEventInit_error(const SensorErrorEventInit *self) {
    return em_Val_as(DOMException, em_Val_get(EventInit_as_val(self->inner), em_Val_from("error")));
}


void SensorErrorEventInit_set_error(SensorErrorEventInit* self, DOMException * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("error"), em_Val_from(value));
}


SensorErrorEventInit SensorErrorEventInit_new() {
    em_Val obj = em_Val_object();
    return SensorErrorEventInit_from_val(&obj);
}

