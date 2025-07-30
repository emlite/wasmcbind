#include <webbind/GamepadHapticActuator.h>


DEFINE_EMLITE_TYPE(GamepadEffectParameters, em_Val);


long long GamepadEffectParameters_duration(const GamepadEffectParameters *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("duration")));
}


void GamepadEffectParameters_set_duration(GamepadEffectParameters* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("duration"), em_Val_from(value));
}


long long GamepadEffectParameters_startDelay(const GamepadEffectParameters *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("startDelay")));
}


void GamepadEffectParameters_set_startDelay(GamepadEffectParameters* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("startDelay"), em_Val_from(value));
}


double GamepadEffectParameters_strongMagnitude(const GamepadEffectParameters *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("strongMagnitude")));
}


void GamepadEffectParameters_set_strongMagnitude(GamepadEffectParameters* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("strongMagnitude"), em_Val_from(value));
}


double GamepadEffectParameters_weakMagnitude(const GamepadEffectParameters *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("weakMagnitude")));
}


void GamepadEffectParameters_set_weakMagnitude(GamepadEffectParameters* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("weakMagnitude"), em_Val_from(value));
}


double GamepadEffectParameters_leftTrigger(const GamepadEffectParameters *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("leftTrigger")));
}


void GamepadEffectParameters_set_leftTrigger(GamepadEffectParameters* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("leftTrigger"), em_Val_from(value));
}


double GamepadEffectParameters_rightTrigger(const GamepadEffectParameters *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rightTrigger")));
}


void GamepadEffectParameters_set_rightTrigger(GamepadEffectParameters* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rightTrigger"), em_Val_from(value));
}

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

