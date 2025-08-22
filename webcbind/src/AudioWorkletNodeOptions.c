#include <webcbind/AudioWorkletNodeOptions.h>

DEFINE_EMLITE_TYPE(AudioWorkletNodeOptions, AudioNodeOptions);


unsigned long AudioWorkletNodeOptions_numberOfInputs(const AudioWorkletNodeOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("numberOfInputs")));
}


void AudioWorkletNodeOptions_set_numberOfInputs(AudioWorkletNodeOptions* self, unsigned long value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("numberOfInputs"), em_Val_from(value));
}


unsigned long AudioWorkletNodeOptions_numberOfOutputs(const AudioWorkletNodeOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("numberOfOutputs")));
}


void AudioWorkletNodeOptions_set_numberOfOutputs(AudioWorkletNodeOptions* self, unsigned long value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("numberOfOutputs"), em_Val_from(value));
}


jb_Array AudioWorkletNodeOptions_outputChannelCount(const AudioWorkletNodeOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("outputChannelCount")));
}


void AudioWorkletNodeOptions_set_outputChannelCount(AudioWorkletNodeOptions* self, jb_Array * value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("outputChannelCount"), em_Val_from(value));
}


jb_Object AudioWorkletNodeOptions_parameterData(const AudioWorkletNodeOptions *self) {
    return em_Val_as(jb_Object, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("parameterData")));
}


void AudioWorkletNodeOptions_set_parameterData(AudioWorkletNodeOptions* self, jb_Object * value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("parameterData"), em_Val_from(value));
}


jb_Object AudioWorkletNodeOptions_processorOptions(const AudioWorkletNodeOptions *self) {
    return em_Val_as(jb_Object, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("processorOptions")));
}


void AudioWorkletNodeOptions_set_processorOptions(AudioWorkletNodeOptions* self, jb_Object * value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("processorOptions"), em_Val_from(value));
}


AudioWorkletNodeOptions AudioWorkletNodeOptions_new() {
    em_Val obj = em_Val_object();
    return AudioWorkletNodeOptions_from_val(&obj);
}

