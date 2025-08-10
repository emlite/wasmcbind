#include <webbind/ChannelSplitterOptions.h>

DEFINE_EMLITE_TYPE(ChannelSplitterOptions, AudioNodeOptions);


unsigned long ChannelSplitterOptions_numberOfOutputs(const ChannelSplitterOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("numberOfOutputs")));
}


void ChannelSplitterOptions_set_numberOfOutputs(ChannelSplitterOptions* self, unsigned long value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("numberOfOutputs"), em_Val_from(value));
}


ChannelSplitterOptions ChannelSplitterOptions_new() {
    em_Val obj = em_Val_object();
    return ChannelSplitterOptions_from_val(&obj);
}

