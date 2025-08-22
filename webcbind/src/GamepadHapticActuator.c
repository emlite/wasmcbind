#include <webcbind/GamepadHapticActuator.h>

#include <webcbind/GamepadEffectParameters.h>

DEFINE_EMLITE_TYPE(GamepadHapticActuator, em_Val);


jb_Array GamepadHapticActuator_effects(const GamepadHapticActuator *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("effects")));
}


jb_Promise GamepadHapticActuator_playEffect0(GamepadHapticActuator* self , GamepadHapticEffectType * type) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "playEffect", em_Val_from(type)));
}


jb_Promise GamepadHapticActuator_playEffect1(GamepadHapticActuator* self , GamepadHapticEffectType * type, GamepadEffectParameters * params) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "playEffect", em_Val_from(type), em_Val_from(params)));
}


jb_Promise GamepadHapticActuator_reset(GamepadHapticActuator* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "reset"));
}


jb_Promise GamepadHapticActuator_pulse(GamepadHapticActuator* self , double value, double duration) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "pulse", em_Val_from(value), em_Val_from(duration)));
}

