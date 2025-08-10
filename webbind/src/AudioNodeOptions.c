#include <webbind/AudioNodeOptions.h>

DEFINE_EMLITE_TYPE(AudioNodeOptions, em_Val);


unsigned long AudioNodeOptions_channelCount(const AudioNodeOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("channelCount")));
}


void AudioNodeOptions_set_channelCount(AudioNodeOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("channelCount"), em_Val_from(value));
}


ChannelCountMode AudioNodeOptions_channelCountMode(const AudioNodeOptions *self) {
    return em_Val_as(ChannelCountMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("channelCountMode")));
}


void AudioNodeOptions_set_channelCountMode(AudioNodeOptions* self, ChannelCountMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("channelCountMode"), em_Val_from(value));
}


ChannelInterpretation AudioNodeOptions_channelInterpretation(const AudioNodeOptions *self) {
    return em_Val_as(ChannelInterpretation, em_Val_get(em_Val_as_val(self->inner), em_Val_from("channelInterpretation")));
}


void AudioNodeOptions_set_channelInterpretation(AudioNodeOptions* self, ChannelInterpretation * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("channelInterpretation"), em_Val_from(value));
}


AudioNodeOptions AudioNodeOptions_new() {
    em_Val obj = em_Val_object();
    return AudioNodeOptions_from_val(&obj);
}

