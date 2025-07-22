#include <webbind/DevicePosture.h>


DEFINE_EMLITE_TYPE(DevicePosture, EventTarget);


DevicePostureType DevicePosture_type(const DevicePosture *self) {
    return em_Val_as(DevicePostureType, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("type")));
}


jb_Any DevicePosture_onchange(const DevicePosture *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onchange")));
}


void DevicePosture_set_onchange(DevicePosture* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onchange"), em_Val_from(value));
}

