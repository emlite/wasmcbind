#include <webbind/InputDeviceCapabilitiesInit.h>

DEFINE_EMLITE_TYPE(InputDeviceCapabilitiesInit, em_Val);


bool InputDeviceCapabilitiesInit_firesTouchEvents(const InputDeviceCapabilitiesInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("firesTouchEvents")));
}


void InputDeviceCapabilitiesInit_set_firesTouchEvents(InputDeviceCapabilitiesInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("firesTouchEvents"), em_Val_from(value));
}


bool InputDeviceCapabilitiesInit_pointerMovementScrolls(const InputDeviceCapabilitiesInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("pointerMovementScrolls")));
}


void InputDeviceCapabilitiesInit_set_pointerMovementScrolls(InputDeviceCapabilitiesInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("pointerMovementScrolls"), em_Val_from(value));
}


InputDeviceCapabilitiesInit InputDeviceCapabilitiesInit_new() {
    em_Val obj = em_Val_object();
    return InputDeviceCapabilitiesInit_from_val(&obj);
}

