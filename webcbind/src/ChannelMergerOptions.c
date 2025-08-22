#include <webcbind/ChannelMergerOptions.h>

DEFINE_EMLITE_TYPE(ChannelMergerOptions, AudioNodeOptions);


unsigned long ChannelMergerOptions_numberOfInputs(const ChannelMergerOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("numberOfInputs")));
}


void ChannelMergerOptions_set_numberOfInputs(ChannelMergerOptions* self, unsigned long value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("numberOfInputs"), em_Val_from(value));
}


ChannelMergerOptions ChannelMergerOptions_new() {
    em_Val obj = em_Val_object();
    return ChannelMergerOptions_from_val(&obj);
}

