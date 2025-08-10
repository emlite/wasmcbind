#include <webbind/InputDeviceCapabilities.h>

#include <webbind/InputDeviceCapabilitiesInit.h>

DEFINE_EMLITE_TYPE(InputDeviceCapabilities, em_Val);


InputDeviceCapabilities InputDeviceCapabilities_new0() {
        em_Val vv = em_Val_new(em_Val_global("InputDeviceCapabilities") );
        return InputDeviceCapabilities_from_val(&vv);
      }


InputDeviceCapabilities InputDeviceCapabilities_new1(InputDeviceCapabilitiesInit * deviceInitDict) {
        em_Val vv = em_Val_new(em_Val_global("InputDeviceCapabilities") , em_Val_from(deviceInitDict));
        return InputDeviceCapabilities_from_val(&vv);
      }


bool InputDeviceCapabilities_firesTouchEvents(const InputDeviceCapabilities *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("firesTouchEvents")));
}


bool InputDeviceCapabilities_pointerMovementScrolls(const InputDeviceCapabilities *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("pointerMovementScrolls")));
}

