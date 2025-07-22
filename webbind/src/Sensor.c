#include <webbind/Sensor.h>


DEFINE_EMLITE_TYPE(Sensor, EventTarget);


bool Sensor_activated(const Sensor *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "activated"));
}


bool Sensor_hasReading(const Sensor *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "hasReading"));
}


jb_Any Sensor_timestamp(const Sensor *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "timestamp"));
}


jb_Undefined Sensor_start(Sensor* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "start"));
}


jb_Undefined Sensor_stop(Sensor* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "stop"));
}


jb_Any Sensor_onreading(const Sensor *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onreading"));
}


void Sensor_set_onreading(Sensor* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onreading", value);
}


jb_Any Sensor_onactivate(const Sensor *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onactivate"));
}


void Sensor_set_onactivate(Sensor* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onactivate", value);
}


jb_Any Sensor_onerror(const Sensor *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onerror"));
}


void Sensor_set_onerror(Sensor* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onerror", value);
}

