#include <webbind/GamepadHapticActuator.h>


DEFINE_EMLITE_TYPE(GamepadEffectParameters, em_Val);


long long GamepadEffectParameters_duration(const GamepadEffectParameters *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "duration"));
}


void GamepadEffectParameters_set_duration(GamepadEffectParameters* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "duration", value);
}


long long GamepadEffectParameters_startDelay(const GamepadEffectParameters *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "startDelay"));
}


void GamepadEffectParameters_set_startDelay(GamepadEffectParameters* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "startDelay", value);
}


double GamepadEffectParameters_strongMagnitude(const GamepadEffectParameters *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "strongMagnitude"));
}


void GamepadEffectParameters_set_strongMagnitude(GamepadEffectParameters* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "strongMagnitude", value);
}


double GamepadEffectParameters_weakMagnitude(const GamepadEffectParameters *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "weakMagnitude"));
}


void GamepadEffectParameters_set_weakMagnitude(GamepadEffectParameters* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "weakMagnitude", value);
}


double GamepadEffectParameters_leftTrigger(const GamepadEffectParameters *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "leftTrigger"));
}


void GamepadEffectParameters_set_leftTrigger(GamepadEffectParameters* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "leftTrigger", value);
}


double GamepadEffectParameters_rightTrigger(const GamepadEffectParameters *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "rightTrigger"));
}


void GamepadEffectParameters_set_rightTrigger(GamepadEffectParameters* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "rightTrigger", value);
}

DEFINE_EMLITE_TYPE(GamepadHapticActuator, em_Val);


jb_FrozenArray GamepadHapticActuator_effects(const GamepadHapticActuator *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "effects"));
}


jb_Promise GamepadHapticActuator_playEffect(GamepadHapticActuator* self , const GamepadHapticEffectType* type) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "playEffect", em_Val_from(type)));
}


jb_Promise GamepadHapticActuator_playEffect(GamepadHapticActuator* self , const GamepadHapticEffectType* type, const GamepadEffectParameters* params) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "playEffect", em_Val_from(type), em_Val_from(params)));
}


jb_Promise GamepadHapticActuator_reset(GamepadHapticActuator* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "reset"));
}


jb_Promise GamepadHapticActuator_pulse(GamepadHapticActuator* self , double value, double duration) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "pulse", em_Val_from(value), em_Val_from(duration)));
}

