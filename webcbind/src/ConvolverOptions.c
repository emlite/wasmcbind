#include <webcbind/ConvolverOptions.h>

#include <webcbind/AudioBuffer.h>

DEFINE_EMLITE_TYPE(ConvolverOptions, AudioNodeOptions);


AudioBuffer ConvolverOptions_buffer(const ConvolverOptions *self) {
    return em_Val_as(AudioBuffer, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("buffer")));
}


void ConvolverOptions_set_buffer(ConvolverOptions* self, AudioBuffer * value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("buffer"), em_Val_from(value));
}


bool ConvolverOptions_disableNormalization(const ConvolverOptions *self) {
    return em_Val_as(bool, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("disableNormalization")));
}


void ConvolverOptions_set_disableNormalization(ConvolverOptions* self, bool value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("disableNormalization"), em_Val_from(value));
}


ConvolverOptions ConvolverOptions_new() {
    em_Val obj = em_Val_object();
    return ConvolverOptions_from_val(&obj);
}

