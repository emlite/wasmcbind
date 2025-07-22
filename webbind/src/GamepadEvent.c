#include <webbind/GamepadEvent.h>
#include <webbind/Gamepad.h>


DEFINE_EMLITE_TYPE(GamepadEvent, Event);


GamepadEvent GamepadEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("GamepadEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return GamepadEvent(em_Val_new(em_Val_global("GamepadEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


Gamepad GamepadEvent_gamepad(const GamepadEvent *self) {
    return em_Val_as(Gamepad, em_Val_get(Event_as_val(self->inner), "gamepad"));
}

