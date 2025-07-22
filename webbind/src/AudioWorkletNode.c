#include <webbind/AudioWorkletNode.h>
#include <webbind/AudioParamMap.h>
#include <webbind/MessagePort.h>
#include <webbind/BaseAudioContext.h>


DEFINE_EMLITE_TYPE(AudioWorkletNode, AudioNode);


AudioWorkletNode AudioWorkletNode_new(const BaseAudioContext* context, const jb_DOMString* name) : AudioNode(em_Val_global("AudioWorkletNode").new_(em_Val_from(context), em_Val_from(name))) {
        return AudioWorkletNode(em_Val_new(em_Val_global("AudioWorkletNode", em_Val_from(context), em_Val_from(name)));
      }


AudioWorkletNode AudioWorkletNode_new(const BaseAudioContext* context, const jb_DOMString* name, const jb_Any* options) : AudioNode(em_Val_global("AudioWorkletNode").new_(em_Val_from(context), em_Val_from(name), em_Val_from(options))) {
        return AudioWorkletNode(em_Val_new(em_Val_global("AudioWorkletNode", em_Val_from(context), em_Val_from(name), em_Val_from(options)));
      }


AudioParamMap AudioWorkletNode_parameters(const AudioWorkletNode *self) {
    return em_Val_as(AudioParamMap, em_Val_get(AudioNode_as_val(self->inner), "parameters"));
}


jb_Any AudioWorkletNode_port(const AudioWorkletNode *self) {
    return em_Val_as(jb_Any, em_Val_get(AudioNode_as_val(self->inner), "port"));
}


jb_Any AudioWorkletNode_onprocessorerror(const AudioWorkletNode *self) {
    return em_Val_as(jb_Any, em_Val_get(AudioNode_as_val(self->inner), "onprocessorerror"));
}


void AudioWorkletNode_set_onprocessorerror(AudioWorkletNode* self, const jb_Any* value) {
    em_Val_set(AudioNode_as_val(self->inner), "onprocessorerror", value);
}

