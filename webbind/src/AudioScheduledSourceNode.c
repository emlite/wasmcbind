#include <webbind/AudioScheduledSourceNode.h>


DEFINE_EMLITE_TYPE(AudioScheduledSourceNode, AudioNode);


jb_Any AudioScheduledSourceNode_onended(const AudioScheduledSourceNode *self) {
    return em_Val_as(jb_Any, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("onended")));
}


void AudioScheduledSourceNode_set_onended(AudioScheduledSourceNode* self, jb_Any * value) {
    em_Val_set(AudioNode_as_val(self->inner), em_Val_from("onended"), em_Val_from(value));
}


jb_Undefined AudioScheduledSourceNode_start0(AudioScheduledSourceNode* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(AudioNode_as_val(self->inner), "start"));
}


jb_Undefined AudioScheduledSourceNode_start1(AudioScheduledSourceNode* self , double when) {
    return em_Val_as(jb_Undefined, em_Val_call(AudioNode_as_val(self->inner), "start", em_Val_from(when)));
}


jb_Undefined AudioScheduledSourceNode_stop0(AudioScheduledSourceNode* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(AudioNode_as_val(self->inner), "stop"));
}


jb_Undefined AudioScheduledSourceNode_stop1(AudioScheduledSourceNode* self , double when) {
    return em_Val_as(jb_Undefined, em_Val_call(AudioNode_as_val(self->inner), "stop", em_Val_from(when)));
}

