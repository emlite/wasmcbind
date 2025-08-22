#include <webcbind/AudioDataCopyToOptions.h>

DEFINE_EMLITE_TYPE(AudioDataCopyToOptions, em_Val);


unsigned long AudioDataCopyToOptions_planeIndex(const AudioDataCopyToOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("planeIndex")));
}


void AudioDataCopyToOptions_set_planeIndex(AudioDataCopyToOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("planeIndex"), em_Val_from(value));
}


unsigned long AudioDataCopyToOptions_frameOffset(const AudioDataCopyToOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("frameOffset")));
}


void AudioDataCopyToOptions_set_frameOffset(AudioDataCopyToOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("frameOffset"), em_Val_from(value));
}


unsigned long AudioDataCopyToOptions_frameCount(const AudioDataCopyToOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("frameCount")));
}


void AudioDataCopyToOptions_set_frameCount(AudioDataCopyToOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("frameCount"), em_Val_from(value));
}


AudioSampleFormat AudioDataCopyToOptions_format(const AudioDataCopyToOptions *self) {
    return em_Val_as(AudioSampleFormat, em_Val_get(em_Val_as_val(self->inner), em_Val_from("format")));
}


void AudioDataCopyToOptions_set_format(AudioDataCopyToOptions* self, AudioSampleFormat * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("format"), em_Val_from(value));
}


AudioDataCopyToOptions AudioDataCopyToOptions_new() {
    em_Val obj = em_Val_object();
    return AudioDataCopyToOptions_from_val(&obj);
}

