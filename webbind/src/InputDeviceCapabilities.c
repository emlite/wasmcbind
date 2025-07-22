#include <webbind/InputDeviceCapabilities.h>


DEFINE_EMLITE_TYPE(InputDeviceCapabilities, em_Val);


InputDeviceCapabilities InputDeviceCapabilities_new() : em_Val(em_Val_global("InputDeviceCapabilities").new_()) {
        return InputDeviceCapabilities(em_Val_new(em_Val_global("InputDeviceCapabilities", ));
      }


InputDeviceCapabilities InputDeviceCapabilities_new(const jb_Any* deviceInitDict) : em_Val(em_Val_global("InputDeviceCapabilities").new_(em_Val_from(deviceInitDict))) {
        return InputDeviceCapabilities(em_Val_new(em_Val_global("InputDeviceCapabilities", em_Val_from(deviceInitDict)));
      }


bool InputDeviceCapabilities_firesTouchEvents(const InputDeviceCapabilities *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "firesTouchEvents"));
}


bool InputDeviceCapabilities_pointerMovementScrolls(const InputDeviceCapabilities *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "pointerMovementScrolls"));
}

