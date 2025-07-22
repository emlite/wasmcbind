#include <webbind/GamepadButton.h>


DEFINE_EMLITE_TYPE(GamepadButton, em_Val);


bool GamepadButton_pressed(const GamepadButton *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "pressed"));
}


bool GamepadButton_touched(const GamepadButton *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "touched"));
}


double GamepadButton_value(const GamepadButton *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "value"));
}

