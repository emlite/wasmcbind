#include <webbind/AudioBufferSourceNode.h>
#include <webbind/AudioBuffer.h>
#include <webbind/AudioParam.h>
#include <webbind/BaseAudioContext.h>


DEFINE_EMLITE_TYPE(AudioBufferSourceNode, AudioScheduledSourceNode);


AudioBufferSourceNode AudioBufferSourceNode_new(const BaseAudioContext* context) : AudioScheduledSourceNode(em_Val_global("AudioBufferSourceNode").new_(em_Val_from(context))) {
        return AudioBufferSourceNode(em_Val_new(em_Val_global("AudioBufferSourceNode", em_Val_from(context)));
      }


AudioBufferSourceNode AudioBufferSourceNode_new(const BaseAudioContext* context, const jb_Any* options) : AudioScheduledSourceNode(em_Val_global("AudioBufferSourceNode").new_(em_Val_from(context), em_Val_from(options))) {
        return AudioBufferSourceNode(em_Val_new(em_Val_global("AudioBufferSourceNode", em_Val_from(context), em_Val_from(options)));
      }


AudioBuffer AudioBufferSourceNode_buffer(const AudioBufferSourceNode *self) {
    return em_Val_as(AudioBuffer, em_Val_get(AudioScheduledSourceNode_as_val(self->inner), "buffer"));
}


void AudioBufferSourceNode_set_buffer(AudioBufferSourceNode* self, const AudioBuffer* value) {
    em_Val_set(AudioScheduledSourceNode_as_val(self->inner), "buffer", value);
}


AudioParam AudioBufferSourceNode_playbackRate(const AudioBufferSourceNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioScheduledSourceNode_as_val(self->inner), "playbackRate"));
}


AudioParam AudioBufferSourceNode_detune(const AudioBufferSourceNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioScheduledSourceNode_as_val(self->inner), "detune"));
}


bool AudioBufferSourceNode_loop(const AudioBufferSourceNode *self) {
    return em_Val_as(bool, em_Val_get(AudioScheduledSourceNode_as_val(self->inner), "loop"));
}


void AudioBufferSourceNode_set_loop(AudioBufferSourceNode* self, bool value) {
    em_Val_set(AudioScheduledSourceNode_as_val(self->inner), "loop", value);
}


double AudioBufferSourceNode_loopStart(const AudioBufferSourceNode *self) {
    return em_Val_as(double, em_Val_get(AudioScheduledSourceNode_as_val(self->inner), "loopStart"));
}


void AudioBufferSourceNode_set_loopStart(AudioBufferSourceNode* self, double value) {
    em_Val_set(AudioScheduledSourceNode_as_val(self->inner), "loopStart", value);
}


double AudioBufferSourceNode_loopEnd(const AudioBufferSourceNode *self) {
    return em_Val_as(double, em_Val_get(AudioScheduledSourceNode_as_val(self->inner), "loopEnd"));
}


void AudioBufferSourceNode_set_loopEnd(AudioBufferSourceNode* self, double value) {
    em_Val_set(AudioScheduledSourceNode_as_val(self->inner), "loopEnd", value);
}


jb_Undefined AudioBufferSourceNode_start(AudioBufferSourceNode* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(AudioScheduledSourceNode_as_val(self->inner), "start"));
}


jb_Undefined AudioBufferSourceNode_start(AudioBufferSourceNode* self , double when) {
    return em_Val_as(jb_Undefined, em_Val_call(AudioScheduledSourceNode_as_val(self->inner), "start", em_Val_from(when)));
}


jb_Undefined AudioBufferSourceNode_start(AudioBufferSourceNode* self , double when, double offset) {
    return em_Val_as(jb_Undefined, em_Val_call(AudioScheduledSourceNode_as_val(self->inner), "start", em_Val_from(when), em_Val_from(offset)));
}


jb_Undefined AudioBufferSourceNode_start(AudioBufferSourceNode* self , double when, double offset, double duration) {
    return em_Val_as(jb_Undefined, em_Val_call(AudioScheduledSourceNode_as_val(self->inner), "start", em_Val_from(when), em_Val_from(offset), em_Val_from(duration)));
}

