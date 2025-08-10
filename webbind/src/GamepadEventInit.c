#include <webbind/GamepadEventInit.h>

#include <webbind/Gamepad.h>

DEFINE_EMLITE_TYPE(GamepadEventInit, EventInit);


Gamepad GamepadEventInit_gamepad(const GamepadEventInit *self) {
    return em_Val_as(Gamepad, em_Val_get(EventInit_as_val(self->inner), em_Val_from("gamepad")));
}


void GamepadEventInit_set_gamepad(GamepadEventInit* self, Gamepad * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("gamepad"), em_Val_from(value));
}


GamepadEventInit GamepadEventInit_new() {
    em_Val obj = em_Val_object();
    return GamepadEventInit_from_val(&obj);
}

