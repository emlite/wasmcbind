#include <webcbind/AudioParam.h>

DEFINE_EMLITE_TYPE(AudioParam, em_Val);


float AudioParam_value(const AudioParam *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("value")));
}


void AudioParam_set_value(AudioParam* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("value"), em_Val_from(value));
}


AutomationRate AudioParam_automationRate(const AudioParam *self) {
    return em_Val_as(AutomationRate, em_Val_get(em_Val_as_val(self->inner), em_Val_from("automationRate")));
}


void AudioParam_set_automationRate(AudioParam* self, AutomationRate * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("automationRate"), em_Val_from(value));
}


float AudioParam_defaultValue(const AudioParam *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("defaultValue")));
}


float AudioParam_minValue(const AudioParam *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("minValue")));
}


float AudioParam_maxValue(const AudioParam *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxValue")));
}


AudioParam AudioParam_setValueAtTime(AudioParam* self , float value, double startTime) {
    return em_Val_as(AudioParam, em_Val_call(em_Val_as_val(self->inner), "setValueAtTime", em_Val_from(value), em_Val_from(startTime)));
}


AudioParam AudioParam_linearRampToValueAtTime(AudioParam* self , float value, double endTime) {
    return em_Val_as(AudioParam, em_Val_call(em_Val_as_val(self->inner), "linearRampToValueAtTime", em_Val_from(value), em_Val_from(endTime)));
}


AudioParam AudioParam_exponentialRampToValueAtTime(AudioParam* self , float value, double endTime) {
    return em_Val_as(AudioParam, em_Val_call(em_Val_as_val(self->inner), "exponentialRampToValueAtTime", em_Val_from(value), em_Val_from(endTime)));
}


AudioParam AudioParam_setTargetAtTime(AudioParam* self , float target, double startTime, float timeConstant) {
    return em_Val_as(AudioParam, em_Val_call(em_Val_as_val(self->inner), "setTargetAtTime", em_Val_from(target), em_Val_from(startTime), em_Val_from(timeConstant)));
}


AudioParam AudioParam_setValueCurveAtTime(AudioParam* self , jb_Array * values, double startTime, double duration) {
    return em_Val_as(AudioParam, em_Val_call(em_Val_as_val(self->inner), "setValueCurveAtTime", em_Val_from(values), em_Val_from(startTime), em_Val_from(duration)));
}


AudioParam AudioParam_cancelScheduledValues(AudioParam* self , double cancelTime) {
    return em_Val_as(AudioParam, em_Val_call(em_Val_as_val(self->inner), "cancelScheduledValues", em_Val_from(cancelTime)));
}


AudioParam AudioParam_cancelAndHoldAtTime(AudioParam* self , double cancelTime) {
    return em_Val_as(AudioParam, em_Val_call(em_Val_as_val(self->inner), "cancelAndHoldAtTime", em_Val_from(cancelTime)));
}

