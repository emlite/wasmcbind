#include <webbind/GamepadEvent.h>
#include <webbind/Gamepad.h>


DEFINE_EMLITE_TYPE(GamepadEvent, Event);


GamepadEvent GamepadEvent_new(jb_DOMString * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("GamepadEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return GamepadEvent_from_val(&vv);
      }


Gamepad GamepadEvent_gamepad(const GamepadEvent *self) {
    return em_Val_as(Gamepad, em_Val_get(Event_as_val(self->inner), em_Val_from("gamepad")));
}

