#include <webbind/AudioBufferSourceNode.h>
#include <webbind/AudioBuffer.h>
#include <webbind/AudioParam.h>
#include <webbind/BaseAudioContext.h>


DEFINE_EMLITE_TYPE(AudioBufferSourceNode, AudioScheduledSourceNode);


AudioBufferSourceNode AudioBufferSourceNode_new0(BaseAudioContext * context) {
        em_Val vv = em_Val_new(em_Val_global("AudioBufferSourceNode") , em_Val_from(context));
        return AudioBufferSourceNode_from_val(&vv);
      }


AudioBufferSourceNode AudioBufferSourceNode_new1(BaseAudioContext * context, jb_Any * options) {
        em_Val vv = em_Val_new(em_Val_global("AudioBufferSourceNode") , em_Val_from(context), em_Val_from(options));
        return AudioBufferSourceNode_from_val(&vv);
      }


AudioBuffer AudioBufferSourceNode_buffer(const AudioBufferSourceNode *self) {
    return em_Val_as(AudioBuffer, em_Val_get(AudioScheduledSourceNode_as_val(self->inner), em_Val_from("buffer")));
}


void AudioBufferSourceNode_set_buffer(AudioBufferSourceNode* self, AudioBuffer * value) {
    em_Val_set(AudioScheduledSourceNode_as_val(self->inner), em_Val_from("buffer"), em_Val_from(value));
}


AudioParam AudioBufferSourceNode_playbackRate(const AudioBufferSourceNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioScheduledSourceNode_as_val(self->inner), em_Val_from("playbackRate")));
}


AudioParam AudioBufferSourceNode_detune(const AudioBufferSourceNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioScheduledSourceNode_as_val(self->inner), em_Val_from("detune")));
}


bool AudioBufferSourceNode_loop(const AudioBufferSourceNode *self) {
    return em_Val_as(bool, em_Val_get(AudioScheduledSourceNode_as_val(self->inner), em_Val_from("loop")));
}


void AudioBufferSourceNode_set_loop(AudioBufferSourceNode* self, bool value) {
    em_Val_set(AudioScheduledSourceNode_as_val(self->inner), em_Val_from("loop"), em_Val_from(value));
}


double AudioBufferSourceNode_loopStart(const AudioBufferSourceNode *self) {
    return em_Val_as(double, em_Val_get(AudioScheduledSourceNode_as_val(self->inner), em_Val_from("loopStart")));
}


void AudioBufferSourceNode_set_loopStart(AudioBufferSourceNode* self, double value) {
    em_Val_set(AudioScheduledSourceNode_as_val(self->inner), em_Val_from("loopStart"), em_Val_from(value));
}


double AudioBufferSourceNode_loopEnd(const AudioBufferSourceNode *self) {
    return em_Val_as(double, em_Val_get(AudioScheduledSourceNode_as_val(self->inner), em_Val_from("loopEnd")));
}


void AudioBufferSourceNode_set_loopEnd(AudioBufferSourceNode* self, double value) {
    em_Val_set(AudioScheduledSourceNode_as_val(self->inner), em_Val_from("loopEnd"), em_Val_from(value));
}


jb_Undefined AudioBufferSourceNode_start0(AudioBufferSourceNode* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(AudioScheduledSourceNode_as_val(self->inner), "start"));
}


jb_Undefined AudioBufferSourceNode_start1(AudioBufferSourceNode* self , double when) {
    return em_Val_as(jb_Undefined, em_Val_call(AudioScheduledSourceNode_as_val(self->inner), "start", em_Val_from(when)));
}


jb_Undefined AudioBufferSourceNode_start2(AudioBufferSourceNode* self , double when, double offset) {
    return em_Val_as(jb_Undefined, em_Val_call(AudioScheduledSourceNode_as_val(self->inner), "start", em_Val_from(when), em_Val_from(offset)));
}


jb_Undefined AudioBufferSourceNode_start3(AudioBufferSourceNode* self , double when, double offset, double duration) {
    return em_Val_as(jb_Undefined, em_Val_call(AudioScheduledSourceNode_as_val(self->inner), "start", em_Val_from(when), em_Val_from(offset), em_Val_from(duration)));
}

