#include <webbind/AudioWorkletNode.h>
#include <webbind/AudioParamMap.h>
#include <webbind/MessagePort.h>
#include <webbind/BaseAudioContext.h>


DEFINE_EMLITE_TYPE(AudioWorkletNode, AudioNode);


AudioWorkletNode AudioWorkletNode_new0(BaseAudioContext * context, jb_DOMString * name) {
        em_Val vv = em_Val_new(em_Val_global("AudioWorkletNode") , em_Val_from(context), em_Val_from(name));
        return AudioWorkletNode_from_val(&vv);
      }


AudioWorkletNode AudioWorkletNode_new1(BaseAudioContext * context, jb_DOMString * name, jb_Any * options) {
        em_Val vv = em_Val_new(em_Val_global("AudioWorkletNode") , em_Val_from(context), em_Val_from(name), em_Val_from(options));
        return AudioWorkletNode_from_val(&vv);
      }


AudioParamMap AudioWorkletNode_parameters(const AudioWorkletNode *self) {
    return em_Val_as(AudioParamMap, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("parameters")));
}


jb_Any AudioWorkletNode_port(const AudioWorkletNode *self) {
    return em_Val_as(jb_Any, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("port")));
}


jb_Any AudioWorkletNode_onprocessorerror(const AudioWorkletNode *self) {
    return em_Val_as(jb_Any, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("onprocessorerror")));
}


void AudioWorkletNode_set_onprocessorerror(AudioWorkletNode* self, jb_Any * value) {
    em_Val_set(AudioNode_as_val(self->inner), em_Val_from("onprocessorerror"), em_Val_from(value));
}

