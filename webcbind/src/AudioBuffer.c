#include <webcbind/AudioBuffer.h>

#include <webcbind/AudioBufferOptions.h>

DEFINE_EMLITE_TYPE(AudioBuffer, em_Val);


AudioBuffer AudioBuffer_new(AudioBufferOptions * options) {
        em_Val vv = em_Val_new(em_Val_global("AudioBuffer") , em_Val_from(options));
        return AudioBuffer_from_val(&vv);
      }


float AudioBuffer_sampleRate(const AudioBuffer *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sampleRate")));
}


unsigned long AudioBuffer_length(const AudioBuffer *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}


double AudioBuffer_duration(const AudioBuffer *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("duration")));
}


unsigned long AudioBuffer_numberOfChannels(const AudioBuffer *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("numberOfChannels")));
}


jb_Float32Array AudioBuffer_getChannelData(AudioBuffer* self , unsigned long channel) {
    return em_Val_as(jb_Float32Array, em_Val_call(em_Val_as_val(self->inner), "getChannelData", em_Val_from(channel)));
}


jb_Undefined AudioBuffer_copyFromChannel0(AudioBuffer* self , jb_Float32Array * destination, unsigned long channelNumber) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "copyFromChannel", em_Val_from(destination), em_Val_from(channelNumber)));
}


jb_Undefined AudioBuffer_copyFromChannel1(AudioBuffer* self , jb_Float32Array * destination, unsigned long channelNumber, unsigned long bufferOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "copyFromChannel", em_Val_from(destination), em_Val_from(channelNumber), em_Val_from(bufferOffset)));
}


jb_Undefined AudioBuffer_copyToChannel0(AudioBuffer* self , jb_Float32Array * source, unsigned long channelNumber) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "copyToChannel", em_Val_from(source), em_Val_from(channelNumber)));
}


jb_Undefined AudioBuffer_copyToChannel1(AudioBuffer* self , jb_Float32Array * source, unsigned long channelNumber, unsigned long bufferOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "copyToChannel", em_Val_from(source), em_Val_from(channelNumber), em_Val_from(bufferOffset)));
}

