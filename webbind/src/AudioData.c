#include <webbind/AudioData.h>


DEFINE_EMLITE_TYPE(AudioDataCopyToOptions, em_Val);


unsigned long AudioDataCopyToOptions_planeIndex(const AudioDataCopyToOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "planeIndex"));
}


void AudioDataCopyToOptions_set_planeIndex(AudioDataCopyToOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "planeIndex", value);
}


unsigned long AudioDataCopyToOptions_frameOffset(const AudioDataCopyToOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "frameOffset"));
}


void AudioDataCopyToOptions_set_frameOffset(AudioDataCopyToOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "frameOffset", value);
}


unsigned long AudioDataCopyToOptions_frameCount(const AudioDataCopyToOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "frameCount"));
}


void AudioDataCopyToOptions_set_frameCount(AudioDataCopyToOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "frameCount", value);
}


AudioSampleFormat AudioDataCopyToOptions_format(const AudioDataCopyToOptions *self) {
    return em_Val_as(AudioSampleFormat, em_Val_get(em_Val_as_val(self->inner), "format"));
}


void AudioDataCopyToOptions_set_format(AudioDataCopyToOptions* self, const AudioSampleFormat* value) {
    em_Val_set(em_Val_as_val(self->inner), "format", value);
}

DEFINE_EMLITE_TYPE(AudioData, em_Val);


AudioData AudioData_new(const jb_Any* init) : em_Val(em_Val_global("AudioData").new_(em_Val_from(init))) {
        return AudioData(em_Val_new(em_Val_global("AudioData", em_Val_from(init)));
      }


AudioSampleFormat AudioData_format(const AudioData *self) {
    return em_Val_as(AudioSampleFormat, em_Val_get(em_Val_as_val(self->inner), "format"));
}


float AudioData_sampleRate(const AudioData *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), "sampleRate"));
}


unsigned long AudioData_numberOfFrames(const AudioData *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "numberOfFrames"));
}


unsigned long AudioData_numberOfChannels(const AudioData *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "numberOfChannels"));
}


long long AudioData_duration(const AudioData *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "duration"));
}


long long AudioData_timestamp(const AudioData *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "timestamp"));
}


unsigned long AudioData_allocationSize(AudioData* self , const AudioDataCopyToOptions* options) {
    return em_Val_as(unsigned long, em_Val_call(em_Val_as_val(self->inner), "allocationSize", em_Val_from(options)));
}


jb_Undefined AudioData_copyTo(AudioData* self , const jb_Any* destination, const AudioDataCopyToOptions* options) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "copyTo", em_Val_from(destination), em_Val_from(options)));
}


AudioData AudioData_clone(AudioData* self ) {
    return em_Val_as(AudioData, em_Val_call(em_Val_as_val(self->inner), "clone"));
}


jb_Undefined AudioData_close(AudioData* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "close"));
}

