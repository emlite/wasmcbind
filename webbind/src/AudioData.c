#include <webbind/AudioData.h>

#include <webbind/AudioDataInit.h>
#include <webbind/AudioDataCopyToOptions.h>

DEFINE_EMLITE_TYPE(AudioData, em_Val);


AudioData AudioData_new(AudioDataInit * init) {
        em_Val vv = em_Val_new(em_Val_global("AudioData") , em_Val_from(init));
        return AudioData_from_val(&vv);
      }


AudioSampleFormat AudioData_format(const AudioData *self) {
    return em_Val_as(AudioSampleFormat, em_Val_get(em_Val_as_val(self->inner), em_Val_from("format")));
}


float AudioData_sampleRate(const AudioData *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sampleRate")));
}


unsigned long AudioData_numberOfFrames(const AudioData *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("numberOfFrames")));
}


unsigned long AudioData_numberOfChannels(const AudioData *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("numberOfChannels")));
}


long long AudioData_duration(const AudioData *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("duration")));
}


long long AudioData_timestamp(const AudioData *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("timestamp")));
}


unsigned long AudioData_allocationSize(AudioData* self , AudioDataCopyToOptions * options) {
    return em_Val_as(unsigned long, em_Val_call(em_Val_as_val(self->inner), "allocationSize", em_Val_from(options)));
}


jb_Undefined AudioData_copyTo(AudioData* self , jb_Any * destination, AudioDataCopyToOptions * options) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "copyTo", em_Val_from(destination), em_Val_from(options)));
}


AudioData AudioData_clone(AudioData* self ) {
    return em_Val_as(AudioData, em_Val_call(em_Val_as_val(self->inner), "clone"));
}


jb_Undefined AudioData_close(AudioData* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "close"));
}

