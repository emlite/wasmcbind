#include <webcbind/AudioParamDescriptor.h>

DEFINE_EMLITE_TYPE(AudioParamDescriptor, em_Val);


jb_String AudioParamDescriptor_name(const AudioParamDescriptor *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


void AudioParamDescriptor_set_name(AudioParamDescriptor* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


float AudioParamDescriptor_defaultValue(const AudioParamDescriptor *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("defaultValue")));
}


void AudioParamDescriptor_set_defaultValue(AudioParamDescriptor* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("defaultValue"), em_Val_from(value));
}


float AudioParamDescriptor_minValue(const AudioParamDescriptor *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("minValue")));
}


void AudioParamDescriptor_set_minValue(AudioParamDescriptor* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("minValue"), em_Val_from(value));
}


float AudioParamDescriptor_maxValue(const AudioParamDescriptor *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxValue")));
}


void AudioParamDescriptor_set_maxValue(AudioParamDescriptor* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("maxValue"), em_Val_from(value));
}


AutomationRate AudioParamDescriptor_automationRate(const AudioParamDescriptor *self) {
    return em_Val_as(AutomationRate, em_Val_get(em_Val_as_val(self->inner), em_Val_from("automationRate")));
}


void AudioParamDescriptor_set_automationRate(AudioParamDescriptor* self, AutomationRate * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("automationRate"), em_Val_from(value));
}


AudioParamDescriptor AudioParamDescriptor_new() {
    em_Val obj = em_Val_object();
    return AudioParamDescriptor_from_val(&obj);
}

